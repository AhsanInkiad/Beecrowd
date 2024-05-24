// event time

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
            string a;           
            int initialday;
            int initialhour;
            int initialminute;
            int initialsecond;

            cin >> a >> initialday;
            cin >> initialhour >> a >> initialminute >> a >> initialsecond;

            int finalday;
            int finalhour;
            int finalminute;
            int finalsecond;

            cin >> a >> finalday;
            cin >> finalhour >> a >> finalminute >> a >> finalsecond;

            int day = 0, hour, minute;
            int second;

            //second:
            if (finalsecond >= initialsecond) {
                second = finalsecond - initialsecond;
            }
            else {
                second = finalsecond - initialsecond + 60;
                finalminute = finalminute - 1;
            }
            //minute:
            if (finalminute >= initialminute) {
                minute = finalminute - initialminute;
            }
            else {
                minute = finalminute - initialminute + 60;
                finalhour = finalhour - 1;
            }
            //hour:
            if (finalhour >= initialhour) {
                hour = finalhour - initialhour;
            }
            else {
                hour = finalhour - initialhour + 24;
                finalday = finalday - 1;
            }
            //day:
            if (finalday >= initialday) {
                day = finalday - initialday;
            }
            cout << day << " dia(s)" << endl;
            cout << hour << " hora(s)" << endl;
            cout << minute << " minuto(s)" << endl;
            cout << second << " segundo(s)" << endl;
            return 0;
        }
