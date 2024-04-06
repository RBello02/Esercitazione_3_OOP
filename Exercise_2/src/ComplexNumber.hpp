#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include<math.h>
#include<iostream>

using namespace std;

struct ComplexNumber
{
    double real_part;
    double imaginary_part;


    ComplexNumber() = default;
    ComplexNumber(double a, double b):
        real_part(a),
        imaginary_part(b){}

};
ComplexNumber operator+(const ComplexNumber& c1,const ComplexNumber& c2);
bool operator==(const ComplexNumber& c1,const ComplexNumber& c2);
ComplexNumber operator!(const ComplexNumber& c);       // simbolo per identificare il coniugato di un numero complesso
ostream& operator<<(ostream& os, const ComplexNumber& c);

#endif
