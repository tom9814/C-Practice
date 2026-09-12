#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 0, 7, 5, 3, 8, 8, 9, 4};
    int temp = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}