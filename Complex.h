//
// Created by User on 4/27/2020.
//

#ifndef GITTEST_COMPLEX_H
#define GITTEST_COMPLEX_H


class Complex {
private:
    double real;
    double img;
public:
    Complex(double r = 0, double i = 0);
    Complex minus( Complex myComp );

};


#endif //GITTEST_COMPLEX_H
