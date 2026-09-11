#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 2, 5, 4, 7};
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    int start = 0;
    int temp = 0;
    while(start < end)
    {
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;    
    }
    
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}