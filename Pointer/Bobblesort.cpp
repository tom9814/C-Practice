#include <iostream>
using namespace std;
void Bobblesort(int *p, int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - 1 - i; j++)
        {
            if(*(p + j) > *(p + j + 1))
            {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int a[] = {1,3,5,4,2,8,9,6,7,10};
    int len = sizeof(a) / sizeof(a[0]);
    Bobblesort(a,len);
    for(int i = 0; i < len ; i++)
    {
        cout << a[i] << " ";
    } 
    return 0;
}