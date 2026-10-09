#include <iostream>
using namespace std;
int *func()
{
    int *a = new int(10);
    return(a);
}

int main()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //用delete释放堆内存
    delete p;
    // cout << *p << endl;

    int *arr = new int[10];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = 100 + i;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
    //delete释放堆内存里的数组时，要加[]
    delete[] arr;

    system("pause");
    return 0;
}