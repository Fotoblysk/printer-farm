# printer-farm-slave

Simple print scheduler using 0mq and protobuf.
This is submodule of printer-farm project and it's use outside of that project scope might be unstable.

## Table of Contents

  1. [Required packages](#required-packages)
  2. [Docker usage](#docker-usage)
  3. [Raw machine usage](#raw-machine-usage)
  4. [Test](#test)


## Required packages
  - Docker 
  - docker-compose version > 3.0
  
  If you want to run client on bare hardware vcpkg, cmake, and protobuff are required.
  
## Docker usage
```sh
export PRINT_DIR=<to dir where you will be adding files to pring>
  $ ./setup.sh
  $ docker build -t printer-farm-master
  $ docker run -t --net=host --volume $PRINT_DIR:/app/print-dir printer-farm-slave-raw
```
## Raw machine usage
Follow steps from `./Dockerfile` at least for debian buster.

## Test
```sh
cd $PRINT_DIR
for i in {1..1000}; do echo "$i">"test$i"; done
```

**[⬆ back to top](#table-of-contents)**
