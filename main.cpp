#include <iostream>
#include "OsDrivers/SensorBank.h"

int main() {

    std::cout << "Size sensor Bank:" << SensorBank::length << std::endl;

    for (int i = 0; i < SensorBank::length; i++) {
        std::cout << (sensorArr[i]->Type == SensorOS::RGB ? "RGB" : "MAG") << " " << sensorArr[i]->isLive() << std::endl;
    }
    return 0;
}