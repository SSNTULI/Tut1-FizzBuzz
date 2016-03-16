#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i <= 50; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			cout << "Fizz" << endl;
		else if (i % 5 == 0 && (i % 3) != 0)
			cout << "Bizz" << endl;
		else if ((i % 3) == 0 && (i % 5) == 0)
			cout << "Fizz and Bizz" << endl;
		 
		if (i % 7 == 0 && (i % 5) != 0 && (i % 3) != 0)
			cout << "Wolf" << endl;
		else if ((i % 7 == 0) && (i % 3) == 0 && (i % 5) == 0)
			cout << "Fizz , Bizz and wolf " << endl;
	}
}
