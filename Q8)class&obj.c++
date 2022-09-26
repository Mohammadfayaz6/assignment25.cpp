//8. Define a class Rectangle and define an instance member function to find the area of
//the rectangle.
#include<iostream>
using namespace std;
class rectangle
{
   float length,breadth;
   float res;
   
   public:
   void set_rec(float l,float b)
   {
      length=l;
      breadth=b;
   }
   int get_res()
   {
      return res;
   }
      void Areaof_rec()
      {
         res=length*breadth;
      }
};
int main()
{
  rectangle A1;
  A1.set_rec(4,6);
  A1.Areaof_rec();
  cout<<"Area of rectangle "<<A1.get_res();
    return 0;
}