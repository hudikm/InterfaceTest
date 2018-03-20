//
// Created by Martin on 20.03.2018.
//

#ifndef INTERFACETEST_RGBOS_H
#define INTERFACETEST_RGBOS_H


#include "SensorOS.h"
#include "../HwDrivers/rgb123.h"

class RgbOS : public rgb123,public SensorOS {
public:

//    using rgb123::rgb123;
private:
    bool isLive() override;

public:
    RgbOS(int port, int speed, bool isLive = false, E_sensorType Type = RGB);

    bool Measure() override;

    int getFs() override;

};


#endif //INTERFACETEST_RGBOS_H
