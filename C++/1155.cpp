// S Sequence

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float S=0;
	for (int i = 1; i <=100; i++)
	{
		S += (1.00 / i);
	}
	cout << fixed;
	cout << setprecision(2);
	cout << S << endl;


	return 0;

}