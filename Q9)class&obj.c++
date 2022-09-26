//9. Define a class Circle and define an instance member function to find the area of the
//circle.
#include <iostream>
using namespace std;
class circle
{
  float rad, Area_res;

public:
  void set_radius(float r)
  {
    rad = r;
  }
  float get_radius()
  {
    return rad;
  }
  float get_area()
  {
    return Area_res;
  }
  void Areaof_cir()
  {
    Area_res = 3.14 * rad * rad;
  }
};
int main()
{
  circle c;
  c.set_radius(5.3);
  cout << "radius of circle is = " << c.get_radius() << endl;
  c.Areaof_cir();
  cout << "Area of circle is " << c.get_area();
  return 0;
}