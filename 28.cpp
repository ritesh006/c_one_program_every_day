#include <iostream>

using namespace std;

namespace one
{
	int accno = 20;
	void welcome_note()
	{
		cout << "Welcome one" << endl;
	}
}
namespace two
{
	int accno = 30;
	void welcome_note()
	{
		cout << "Welcome two" << endl;
	}
}

	using namespace one;
int main()
{

using two::accno;
//	int accno = 30;	
//	using my::accno;
	cout << accno << endl;
	welcome_note();


return 0;
}
