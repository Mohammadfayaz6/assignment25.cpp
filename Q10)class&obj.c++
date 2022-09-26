//10. Define a class Area and define instance member functions to find the area of the
//different shapes like square, rectangle , circle etc.
#include <iostream>
using namespace std;
class Area
{
    int side, length, bredth, radius;

public:
    void setside(float s)
    {
        side = s;
    }
    void set_len_brd(float l, float b)
    {
        length = l;
        bredth = b;
    }
    void set_radius(float r)
    {
        radius = r;
    }
    float area_of_sqr()
    {
        return side * side;
    }

    float area_of_rec()
    {
        return length * bredth;
    }

    float area_of_cir()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    Area a1;
    a1.setside(4);
    a1.set_len_brd(5, 2);
    a1.set_radius(4.5);

    cout << "area of square is " << a1.area_of_sqr() << endl;
    cout << "area of rectangle is " << a1.area_of_rec() << endl;
    cout << "area of square is " << a1.area_of_cir() << endl;
    return 0;
}