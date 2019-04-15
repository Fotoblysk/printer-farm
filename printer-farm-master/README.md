# printer-farm-master

Simple print scheduler using 0mq and protobuf.
This is submodule of printer-farm projec and it's use outside of that project scope might be unstable.

## Table of Contents

  1. [Required packages](#required-packages)
  2. [Docker installation](#docker-installation)

## Required packages
  Docker and docker-compose version > 3.0
  
  If you want to run client on bare hardware vcpkg and cmake are required.
  
## Docker usage
```sh
  $ docker build -t printer-farm-master
  $ docker run printer-farm-master
```

## Bare machine usage
```sh
  $ sudo apt  install protobuf
  $ vcpkg install protobuf
```

**[⬆ back to top](#table-of-contents)**


