//3. Define a class Factorial and define an instance member function to find the Factorial
//of a number using class.
#include <iostream>
using namespace std;
class factorial
{
private:
    int num;
    int fact;

public:
    void setdata(int n)
    {
        num = n;
    }
    int getdata()
    {
        return num;
    }
    int getfact()
    {
        return fact;
    }
    void calcfact()
    {
        int f = 1, i;

        for (i = 1; i <= num; i++)
        {
            f = f * i;
        };
        fact = f;
    }
};
int main()
{
    factorial f1;
    f1.setdata(5);
    f1.calcfact();
    cout << "factorial of " << f1.getdata() << " is " << f1.getfact();

    return 0;
}