#include <iostream>
using namespace std;

int main()
{
	short num1 = 10;
	cout << "short的占用空间为" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int的占用空间为" << sizeof(num2) << endl;
	long num3 = 10;
	cout << "long的占用空间为" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long long的占用空间为" << sizeof(num4) << endl;
}
