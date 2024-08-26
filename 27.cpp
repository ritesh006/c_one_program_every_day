#include <iostream>

using namespace std;

namespace my
{
	int accno = 20;
}

int main()
{
//	int accno = 30;	
	using my::accno;
	cout << my::accno << endl;
	cout << accno << endl;


return 0;
}
