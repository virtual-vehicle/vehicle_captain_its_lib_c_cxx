# Authors:
# - Christoph Pilz (christoph.pilz@v2c2.at)
# - Patrizia Neubauer (patrizia.neubauer@v2c2.at)
#

cmake_minimum_required(VERSION 3.13)

# set the project name
project(vcits_testing VERSION 1.1 DESCRIPTION "vcits: testing of the CXX V2X library of the vehicleCAPTAIN toolbox" LANGUAGES C CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)

# add targets
add_subdirectory(experimental/vcits)

# add include directories
include_directories(.)
include_directories(experimental/vcits/asn1c) #vcits lib headers reference this

# add the executable
add_executable(vcitsTesting demo/main.cpp)

# set target properties - CMake does not know without source files
set_target_properties(vcitsTesting
        PROPERTIES
        COMPILE_FLAGS "-Wall -Wextra -fno-strict-aliasing -pipe -pthread -lrt -lm"
        LINK_FLAGS "-Wall -Wextra -fno-strict-aliasing -pipe -pthread -lrt -lm"
        VERSION ${PROJECT_VERSION}
        )

# link libraries
target_link_libraries(vcitsTesting
        PUBLIC
        vcits
        )