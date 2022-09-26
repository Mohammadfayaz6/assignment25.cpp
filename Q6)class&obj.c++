//6. Define a class Square to find the square of a number and write a C++ program to
//Count number of times a function is called.
#include <iostream>
using namespace std;
class square
{
  int num;
  int sqr_res;
  static int count;

public:
  void setnum(int x)
  {
    num = x;
  }
  int get_sqr()
  {
    return sqr_res;
  }
  void find_square();
  int getcount();
};
int square::count = 0;

void square::find_square()
{
  sqr_res = num * num;
  count++;
}
int square::getcount()
{
  return count;
}
int main()
{
  square s;
  s.setnum(5);
  s.find_square();
  cout << "square of given number is " << s.get_sqr() << endl;
  cout << "function is called " << s.getcount() << " times";
  return 0;
}