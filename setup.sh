#/bin/bash
rm -rf printer-farm-master/common printer-farm-slave/common
cp -r common/ printer-farm-master/
cp -r common/ printer-farm-slave/
