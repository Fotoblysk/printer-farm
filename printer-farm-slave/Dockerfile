FROM debian:buster
# TODO migrate this to alpine linux
# TODO  need thrusted gpg not working
RUN echo "deb [trusted=yes] http://download.opensuse.org/repositories/network:/messaging:/zeromq:/release-stable/Debian_9.0/ ./" >> /etc/apt/sources.list
RUN apt-get -y update
RUN apt-get -y install wget gnupg curl unzip tar
ENV APT_KEY_DONT_WARN_ON_DANGEROUS_USAGE=DontWarn
# FIXME not working
RUN wget https://download.opensuse.org/repositories/network:/messaging:/zeromq:/release-stable/Debian_9.0/Release.key -O- | apt-key add
RUN apt-get -y update
RUN apt-get -y install libzmq3-dev git g++ cmake pkg-config cmake-extras  # TODO change to vcpkg
RUN mkdir -p /libs/vcpkg
WORKDIR /libs/vcpkg
RUN git clone https://github.com/Microsoft/vcpkg .
RUN ./bootstrap-vcpkg.sh
RUN ./vcpkg install protobuf
COPY . /app
WORKDIR /app
RUN cmake . -DCMAKE_TOOLCHAIN_FILE=/libs/vcpkg/scripts/buildsystems/vcpkg.cmake
RUN make

CMD ./printer_farm_slave
