//
// Created by Martin on 20.03.2018.
//

#ifndef INTERFACETEST_SENSOSOS_H
#define INTERFACETEST_SENSOSOS_H

class SensorOS {
public:
    enum E_sensorType {
        MAG,
        RGB
    };
    E_sensorType Type;

    SensorOS(E_sensorType Type) : Type(Type) {}
    virtual bool Measure() = 0;

    virtual int getFs() = 0;

    virtual bool isLive() = 0;

    E_sensorType getType() { return Type; };

};

#endif //INTERFACETEST_SENSOSOS_H
