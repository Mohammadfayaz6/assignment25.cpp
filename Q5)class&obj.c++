//5. Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class.
#include <iostream>
using namespace std;
class ReverseNumber
{
private:
  int actualnum;
  int revnum;

public:
  void setnum(int x)
  {
    actualnum = x;
  }
  int getnum()
  {
    return actualnum;
  }
  int getrev()
  {
    return revnum;
  }
  void findrev()
  {
    int rem, res = 0;
    while (actualnum != 0)
    {
      rem = actualnum % 10;
      res = res * 10 + rem;
      actualnum /= 10;
    }
    revnum = res;
  }
};
int main()
{
  ReverseNumber r1;
  int var;
  cout << "Enter any number " << endl;
  cin >> var;
  r1.setnum(var);
  cout << "actual number is " << r1.getnum() << endl;
  r1.findrev();
  cout << "reverse number is " << r1.getrev() << endl;

  return 0;
}