# printer-farm

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
export PRINT_DIR=<absolute path to dir where you will be adding files to pring>
export NUMBER_OF_SLAVES=<em ...  number of slaves fe. 5>
  $ ./setup.sh
  $ docker-compose up --build --scale printer-farm-slave="$NUMBER_OF_SLAVES"
```
## Raw machine usage
Follow steps from `./Dockerfile` at least for debian buster.
## Test
```sh
cd $PRINT_DIR
for i in {1..1000}; do echo "$i">"test$i"; done
```

**[⬆ back to top](#table-of-contents)**

