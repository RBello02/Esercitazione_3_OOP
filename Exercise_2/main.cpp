#include<iostream>
#include<ComplexNumber.hpp>

int main()
{
    ComplexNumber z1(1,2);
    ComplexNumber z2(1,-2);
    ComplexNumber z3(102.56,-62.4663);
    cout<<z1<<endl;
    cout<<z2<<endl;
    cout<<z1+z3<<endl;
    bool b = z1 == z3;
    cout<<b<<endl;
    ComplexNumber z3_conj = !z3;
    cout<<z3_conj<<endl;
    return 0;
}
