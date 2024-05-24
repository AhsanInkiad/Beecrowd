// Sum of Consecutive Odd Numbers III

#include <iostream>
using namespace std;

int main()
{
	int x, m, n;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> m >> n;
		if(m%2==0){
			m++;
			int count = 0, sum = 0;

			for (int i2 = m;  ; i2=i2+2)
			{
				if (count == n) { 
					break;
				}
				sum += i2;
				count++;
			}
			cout << sum << endl;
		}
		else if(m%2!=0) {
			int count1 = 0, sum1 = 0;
			for (int i2 = m; ; i2 = i2 + 2)
			{
				if (count1 == n) {
					break;
				}
				sum1 += i2;
				count1++;
			}
			cout << sum1 << endl;
		}
		
	}
    
}