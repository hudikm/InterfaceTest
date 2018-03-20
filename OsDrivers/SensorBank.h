//
// Created by Martin on 20.03.2018.
//

#ifndef INTERFACETEST_SENSORBANK_H
#define INTERFACETEST_SENSORBANK_H


#include "SensorOS.h"
#include "MagOS.h"
#include "RgbOS.h"

SensorOS *sensorArr[] = {
        new MagOS(1, 1000, true),
        new MagOS(2, 1000),
        new MagOS(3, 1000, true),
        new RgbOS(1, 1000),
        new RgbOS(2, 1000, true)
//        new RgbOS(3, 1000)
};

class SensorBank {
public:
    static constexpr int length = sizeof(sensorArr) / sizeof(sensorArr[0]);

};

#endif //INTERFACETEST_SENSORBANK_H
