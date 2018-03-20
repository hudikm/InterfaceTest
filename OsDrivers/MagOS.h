//
// Created by Martin on 20.03.2018.
//

#ifndef INTERFACETEST_MAGOS_H
#define INTERFACETEST_MAGOS_H


#include "SensorOS.h"
#include "../HwDrivers/mag3110.h"

class MagOS : public mag3110, public SensorOS {
public:
    MagOS(int port, int Speed, int isLive = false, E_sensorType type = MAG);
     //using mag3110::mag3110;

    bool Measure() override;

private:
    bool isLive() override;

public:
    int getFs() override;
};


#endif //INTERFACETEST_MAGOS_H
