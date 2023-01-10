# Usage Guide
This is how to use the library in three steps:
1. get the library (use one of the three methods below)
2. copy the library into your project (cmake wrappers are prepared)
3. use the decoder/encoder/verify functions as shown in the [receiver](https://github.com/virtual-vehicle/vehicle_captain_routing_receiver_example) / [sender](https://github.com/virtual-vehicle/vehicle_captain_routing_sender_example) sample.

## Quickstart Guide
**Release tags** have been tested in use and should be stable.

**Master branch** contains latest version. May be unstable.

### Release version (recommended)
Use this, if you do not want to have any hassle with code auto-generation.

Install Prerequisites
````bash
sudo apt-get install git
````
Checkout specific version
````bash
git clone <repo>
git checkout <tag>
````
Copy content of release folder
````bash
cd <repo>
cp -r release <destination>
````

### Code generation with provided Docker script (Not Recommended)
This approach requires [Docker](https://www.docker.com/).

```bash
# Generate the docker
./docker-generation-environment-build-and-run.sh

# Connect to the docker
docker exec -it vcits bash

# Execute the script
# The release version uses "main" and "cmake" in the menu
# The experimental version uses "all" and "cmake" in the menu
./command-cxx.sh

# exit the docker
exit

# copy the generated library from the docker
docker cp vcits:/tmp/gen_env/vcits <your_path>

# the generated files are now in the vcits folder
cp -r vcits <destination>
```


### Do everything yourself (ABSOLUTELY NOT Recommended - or if you like pain)
This version requires more prerequisites for installation. Currently also user input is required for the script to generate code from the standard specification, to structure the code and to generate cmake files. Use a release version, if you are unsure, what you are doing.


To Compile for C/C++, a fork of this [asn1c compiler](https://github.com/vlm/asn1c) is recommended by ETSI, and used for this step (see details below)
Tested on [Ubuntu 18.04 LTS](https://releases.ubuntu.com/18.04/), with a special branch of [asn1c fork](https://github.com/brchiu/asn1c.git).

#### Setup asn1c
Setup environment
```bash
sudo apt-get install autoconf libtool
```
Get git repo with special branch
```bash
git clone https://github.com/brchiu/asn1c.git -n asn1c
cd asn1c
git checkout velichkov_s1ap_plus_option_group_plus_adding_trailing_ull
```
Configure and make
```bash
test -f configure || autoreconf -iv
./configure
make
```
Check and install. You might want to use sudo for install
```bash
make check
make install
```
Uninstalling. You might want to use sudo for uninstalling
```bash
make uninstall
```

#### Compile with asn1c by hand
Example syntax to create encoder/decoder functions and structs for ETSI ITS PDUs:

Step into the root folder of this repo and create a library folder:
```bash
mkdir etsi_its_lib
cd etsi_its_lib
```
```bash
asn1c -pdu=CAM ../cam_en302637_2/CAM-PDU-Descriptions.asn ../cam_en302637_2/cdd/ITS-Container.asn
```
