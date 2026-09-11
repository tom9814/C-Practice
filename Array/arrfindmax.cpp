#include <iostream>
using namespace std;
int main()
{
    int weight[5] = {100, 300, 250, 400, 350};
    int max = 0;
    for(int i = 0; i < sizeof(weight) / sizeof(weight[0]); i++)
    {
        max = (max > weight[i]) ? max : weight[i];
    }
    cout << max << endl;
    return 0;
}