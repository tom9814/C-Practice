#include <iostream>
using namespace std;
int addtwonum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int num1 = 20;
    int num2 = 30;
    int sum = addtwonum(num1,num2);
    cout << sum << endl;
    return 0;
}