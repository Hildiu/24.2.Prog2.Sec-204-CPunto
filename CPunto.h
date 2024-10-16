//
// Created by mbermejo on 16/10/2024.
//

#ifndef INC_02_PROYECTO_CPUNTO_H
#define INC_02_PROYECTO_CPUNTO_H

#include <iostream>
#include <cmath>
using namespace std;


class CPunto
{
private:
    double x;
    double y;
public:
    CPunto(){}
    CPunto(double _x, double _y): x(_x), y(_y) {}
    virtual ~CPunto(){}
    double distancia( CPunto  p);
    //--- metodos de acceso
    void setX(double _x){ x = _x;}
    double getX(){return x;}
    void setY(double _y){ y= _y;}
    double getY(){return y;}
};


#endif //INC_02_PROYECTO_CPUNTO_H
