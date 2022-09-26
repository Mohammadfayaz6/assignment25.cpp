/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    void setdata(int r, int i)
    {
        real = r;
        img = i;
    }

    void add(complex c)
    {
        cout << real + c.real << " + " << img + c.img << "i" << endl;
    }
    void print(complex c)
    {
        cout << real << " + " << img << "i" << endl;
        cout << c.real << " + " << c.img << "i" << endl;
    }
};

int main()
{
    complex c1, c2;
    c1.setdata(4, 5);
    c2.setdata(2, 3);

    c1.print(c2);
    c1.add(c2);

    return 0;
}