//
// Created by Martin on 20.03.2018.
//

#ifndef INTERFACETEST_MAG3110_H
#define INTERFACETEST_MAG3110_H


class mag3110 {
public:
    int port;
    int Speed;
    int isLive;
    mag3110(int port, int Speed, int isLive = false);


};


#endif //INTERFACETEST_MAG3110_H
