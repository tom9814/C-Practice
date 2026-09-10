#include <iostream>
using namespace std;
int main()
{
    int num = 121;
    int onedigit = 0;
    int tendigit = 0;
    int hrddigit = 0;
    while (num < 1000)
    {
        onedigit = num % 10;
        tendigit = (num % 100) / 10;
        hrddigit = num / 100;
        if (onedigit * onedigit * onedigit + tendigit * tendigit * tendigit + hrddigit * hrddigit * hrddigit == num)
        {
            cout << num << endl;
        }
        num++;
    }
    return 0;
}