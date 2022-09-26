//7. Define a class Greatest and define instance member function to find Largest among
//3 numbers using classes.
#include <iostream>
using namespace std;
class Greatest
{
    int n1;
    int n2;
    int n3;
    int greatest;

public:
    void setnum(int a, int b, int c)
    {
        n1 = a;
        n2 = b;
        n3 = c;
    }
    int get_res()
    {
        return greatest;
    }
    void find_greatest()
    {
        if (n1 > n2 && n1 > n3)
        {
            greatest = n1;
        }
        else
        {
            if (n2 > n3)
            {
                greatest = n2;
            }
            else
            {
                greatest = n3;
            }
        }
    }
};
int main()
{
    Greatest G1;
    int x, y, z;
    cout << "Enter 3 numbers" << endl;
    cin >> x >> y >> z;
    G1.setnum(x, y, z);
    G1.find_greatest();
    cout << "The greatest number among 3 number is " << G1.get_res();
    return 0;
}