#include "ComplexNumber.hpp"
#include<iostream>

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double real = c1.real_part + c2.real_part;
    double imaginary = c1.imaginary_part+ c2.imaginary_part;
    ComplexNumber c(real,imaginary);
    return c;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{
    bool real = c1.real_part==c2.real_part;
    bool imaginary = c1.imaginary_part==c2.imaginary_part;
    return real && imaginary;
}

ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    if (c.imaginary_part > 0)
        os << c.real_part <<" + "<<c.imaginary_part<<"i";
    else if(c.imaginary_part==0)
        os << c.real_part;
    else
        os << c.real_part <<" - "<<-c.imaginary_part<<"i";
    return os;
}
ComplexNumber operator!(const ComplexNumber& c)
{
    ComplexNumber z(c.real_part,-c.imaginary_part);
    return z;
}
