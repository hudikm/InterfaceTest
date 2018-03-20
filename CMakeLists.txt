cmake_minimum_required(VERSION 3.9)
project(InterfaceTest)

set(CMAKE_CXX_STANDARD 11)

add_executable(InterfaceTest main.cpp OsDrivers/SensorOS.h OsDrivers/MagOS.cpp OsDrivers/MagOS.h OsDrivers/RgbOS.cpp OsDrivers/RgbOS.h HwDrivers/mag3110.cpp HwDrivers/mag3110.h HwDrivers/rgb123.cpp HwDrivers/rgb123.h OsDrivers/SensorBank.h)