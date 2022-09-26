//4. Define a class LargestNumber and define an instance member function to find the
//Largest of three Numbers using the class.
#include <iostream>
using namespace std;
class largest
{
private:
   int a, b, c, largest;

public:
   void setlargest(int x, int y, int z)
   {
      a = x;
      b = y;
      c = z;
   }
   void display()
   {
      cout << "a = " << a << " b = " << b << " c = " << c << endl;
   }
   int getlar()
   {
      return largest;
   }

   int To_find_lar()
   {
      if (a > b && a > c)
      {
         return largest = a;
      }
      else
      {
         if (b > c)
         {
            return largest = b;
         }
         else
         {
            return largest = c;
         }
      }
   }
};
int main()
{
   largest L1;
   L1.setlargest(10, 21, 33);
   L1.display();
   L1.To_find_lar();
   cout << "The latgest number is " << L1.getlar();
   return 0;
}