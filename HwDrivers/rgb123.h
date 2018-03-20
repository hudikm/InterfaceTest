//
// Created by Martin on 20.03.2018.
//

#ifndef INTERFACETEST_RGB123_H
#define INTERFACETEST_RGB123_H


class rgb123 {
public:
    int port;
    int speed;
    bool isLive;

    rgb123(int port, int speed, bool isLive = false);

};


#endif //INTERFACETEST_RGB123_H
