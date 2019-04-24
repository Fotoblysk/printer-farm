//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_MYZMQEXT_H
#define PRINTER_FARM_SLAVE_MYZMQEXT_H

#include <zmq.hpp>
#include <string>

namespace my_zmq_ext {
    class ZmqNoblockWrapper {
        zmq::message_t message;
        zmq::socket_t &socket;

    public:
        ZmqNoblockWrapper(zmq::socket_t& socket, std::string &string) : socket(socket), message(string.size()) {
            memcpy(message.data(), string.data(), string.size());
        }
        ZmqNoblockWrapper(zmq::socket_t& socket, std::string &&string) : socket(socket), message(string.size()) {
            memcpy(message.data(), string.data(), string.size());
        }

        ZmqNoblockWrapper(zmq::socket_t& socket) : socket(socket) {
        }

        void reset(){
            message = zmq::message_t();
        }

        bool s_send_noblock();

        bool s_recv_noblock();

        std::string getData();
    };
}


#endif //PRINTER_FARM_SLAVE_MYZMQEXT_H
