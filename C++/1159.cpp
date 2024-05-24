// Sum of Consecutive Even Numbers

#include <iostream>
using namespace std;
int main()
{
    int x; 
    for (int i = 1; ; i++) {
        cin >> x;
        if (x == 0) {
            break;
        }
        if (x % 2 == 0) {
            int count1 = 0, sum1 = 0;
            for (int i2 = x; ; i2 = i2 + 2) {
                if (count1 == 5) {
                    break;
                }
                sum1 += i2;
                count1++;
            }
            cout << sum1 << endl;
        }
        else if (x % 2 != 0) {
            int count2 = 0, sum2 = 0;
            x++;
            for (int i3 = x; ; i3 = i3 + 2) {
                if (count2 == 5) {
                    break;
                }
                sum2 += i3;
                count2++;
            }
            cout << sum2 << endl;
        }
    }
}
