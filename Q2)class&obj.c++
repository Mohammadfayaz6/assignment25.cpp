/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include <iostream>
using namespace std;
class Time
{
    int Hours;
    int Min;
    int sec;

public:
    void set(int H, int M, int S)
    {
        Hours = H;
        Min = M;
        sec = S;
    }
    void print()
    {
        cout << Hours << "hr " << Min << "min " << sec << "sec" << endl;
    }
};
int main()
{
    Time t1;
    t1.set(3, 45, 20);
    t1.print();
    return 0;
}