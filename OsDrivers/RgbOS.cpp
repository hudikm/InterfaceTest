//
// Created by Martin on 20.03.2018.
//

#include "RgbOS.h"

bool RgbOS::Measure() {
    return false;
}

int RgbOS::getFs() {
    return 0;
}

bool RgbOS::isLive() {
    return rgb123::isLive;
}

RgbOS::RgbOS(int port, int speed, bool isLive, SensorOS::E_sensorType Type) : rgb123(port, speed, isLive),
                                                                              SensorOS(Type) {}


