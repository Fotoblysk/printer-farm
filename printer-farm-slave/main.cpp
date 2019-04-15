#include <iostream>
#include <thread>
#include <chrono>
#include <random>
#include <zmq.hpp>
#include <memory>

class Printer {
    std::random_device rd;
    std::unique_ptr<std::mt19937> generator;
    std::unique_ptr<std::uniform_int_distribution<>> distribution;

public:
    Printer() {
        generator = std::make_unique<std::mt19937>(rd);
        distribution = std::make_unique<std::uniform_int_distribution<>>(10,60);
    }
private:
    bool print() {
        std::this_thread::sleep_for(std::chrono::seconds((*distribution)(*generator)));
        return true;
    }
};

int main() {
    //  Prepare our context and socket
    zmq::context_t context(1);
    zmq::socket_t socket(context, ZMQ_REQ);

    std::cout << "Connecting to hello world server…" << std::endl;
    socket.connect("tcp://localhost:5555");

    //  Do 10 requests, waiting each time for a response
    for (int request_nbr = 0; request_nbr != 10; request_nbr++) {
        zmq::message_t request(11);
        memcpy(request.data(), "HelloHello", 10);
        std::cout << "Sending Hello " << request_nbr << "…" << std::endl;
        socket.send(request);

        //  Get the reply.
        zmq::message_t reply;
        socket.recv(&reply);
        std::cout << "Received World " << request_nbr << "xD " << reinterpret_cast<char *>(reply.data()) << std::endl;
    }
    return 0;
}