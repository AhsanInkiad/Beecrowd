// FRlavious Josephus Legend


#include <iostream>
using namespace std;
int solution(int n, int m) {
    int result = 0;
    for (int i = 2; i <= n; i++)
        result = (result + m) % i;
    return result;
}

int main()
{
    int x, y, z, solve;

    cin >> x;

    for (int i = 0; i < x; i++) {
        cin >> y >> z;
     solve= solution(y, z) + 1;
        cout << "Case " << i + 1 <<": "<< solve << endl;

    }
    

}