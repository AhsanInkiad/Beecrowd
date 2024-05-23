// S Sequence II

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float S=1;
	int j = 1;
	for (int i = 3; i <=39; i=i+2)
	{
		j = j * 2;
		S += (float) i/(j);
	}
	cout << fixed;
	cout << setprecision(2);
	cout << S << endl;


	return 0;

}
