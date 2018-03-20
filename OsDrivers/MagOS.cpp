//
// Created by Martin on 20.03.2018.
//

#include "MagOS.h"

bool MagOS::Measure() {
    return false;
}

int MagOS::getFs() {
    return 0;
}

bool MagOS::isLive() {
    return mag3110::isLive;
}

MagOS::MagOS(int port, int speed, int isLive, E_sensorType type) : mag3110(port, speed, isLive),SensorOS(type) {}


