#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> months;
    int number;

    months[1] = "January";
    months[2] = "February";
    months[3] = "March";
    months[4] = "April";
    months[5] = "May";
    months[6] = "June";
    months[7] = "July";
    months[8] = "August";
    months[9] = "September";
    months[10] = "October";
    months[11] = "November";
    months[12] = "December";

    scanf("%d", &number);
    if (number >= 1 && number <= 12)
    {
        map<int, string>::iterator it = months.find(number);
        if (it != months.end())
            cout << (*it).second << endl;
    }

    return 0;
}