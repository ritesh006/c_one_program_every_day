#include <iostream>
using namespace std;


int main()
{
	int a[2] = { 10,20 };
	int (&ra)[2] = a;


	for(size_t i = 0; i < 2; i++)
	cout << " a[" << i << "] = " << a[i] << endl;

	for(size_t i = 0; i < 2; i++)
	cout << " ra[" << i << "] = " << ra[i] << endl;


	




return 0;
}
