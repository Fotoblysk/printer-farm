//
// Created by railgunpat on 16.04.19.
//

#include <zmq.hpp>
#include <iostream>
#include "myzmqext.h"

bool my_zmq_ext::ZmqNoblockWrapper::s_send_noblock() {
    bool rc = socket.send(message, ZMQ_NOBLOCK);
    return (rc);
}

bool my_zmq_ext::ZmqNoblockWrapper::s_recv_noblock() {
    return socket.recv(&message, ZMQ_NOBLOCK);
}

std::string my_zmq_ext::ZmqNoblockWrapper::getData() {
    return std::string(static_cast<char *>(message.data()), message.size());
}

