#include <iostream>
#include "src/zhelpers.hpp"
#include <job.pb.h>
#include <fstream>
bool readFileToBuffer(std::string filePath, std::vector<unsigned char>& buffer) {
    std::ifstream file(filePath, std::ios::binary);
    if (file.fail()) {
        perror(filePath.c_str());
        return false;
    }

    //seek to the end
    file.seekg(0, std::ios::end);

    //Get the file size
    int fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    //Reduce the file size by any header bytes that might be present
    fileSize -= file.tellg();

    buffer.resize(fileSize);
    file.read((char *)&(buffer[0]), fileSize);
    file.close();

    return true;
}

int main() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    job::Job job_;
    job_.set_name("test");
    job_.set_id(1);
    job::Job_File* jobFile = job_.add_files();
    std::ifstream fin("cloud.jpg", std::ios::binary);
    std::vector<unsigned char> buffer;
    std::string filePath = "./jpd.png";
    readFileToBuffer(filePath, buffer);

    jobFile->set_encodedfile(std::string(buffer.begin(), buffer.end()));
    std::string binaryData = jobFile->encodedfile();
    std::ofstream fileO("./jpd.png", std::ios::binary);
    fileO << binaryData;


    jobFile->set_type(job::Job_FileType_ENCODED);
    std::cout << job_.SerializeAsString() << std::endl;
    std::cout << "Hello, World!" << std::endl;
    s_version();



    //  Prepare our context and socket
    zmq::context_t context (1);
    zmq::socket_t socket (context, ZMQ_REP);
    socket.bind ("tcp://*:5555");

    while (true) {
        zmq::message_t request;

        //  Wait for next request from client
        socket.recv (&request);
        std::cout << "Received Hello" << reinterpret_cast<char*>(request.data()) << std::endl;

        //  Do some 'work'
        sleep(1);

        //  Send reply back to client
        zmq::message_t reply (6);
        memcpy (reply.data (), "World", 5);
        socket.send (reply);
    }
    return 0;



    return EXIT_SUCCESS;
}
