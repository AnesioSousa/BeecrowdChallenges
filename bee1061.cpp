#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <regex>

using namespace std;

int main() {
    int hrs, mins, secs, total_secs, inicial_day;

    char initial_string[7], final_day[7], number[3], horario_inicial[30];

    /*fgets(initial_string, 7, stdin);
    strcpy(number, initial_string + 4);
    inicial_day = atoi(number);*/

    fgets(horario_inicial, 7, stdin);
    // talvez não esteja funcionando por causa do terminador nulo

    string str = "08 : 12 : 23";

    regex pattern("^([[:digit:]]{2})\\s:\\s([[:digit:]]{2})\\s:\\s([[:digit:]]{2})$");
    smatch matches;

    // Execute the regular expression on the input string
    if (regex_match(str, matches, pattern)) {
        // Extract the hours, minutes, and seconds from the matches
        string hours = matches[1].str();
        string minutes = matches[2].str();
        string seconds = matches[3].str();

        // Convert the extracted strings to integers
        int h = stoi(hours);
        int m = stoi(minutes);
        int s = stoi(seconds);

        // Print the extracted values
        cout << "Hours: " << h << endl;
        cout << "Minutes: " << m << endl;
        cout << "Seconds: " << s << endl;
    } else {
        cout << "Error: Input string does not match pattern" << endl;
        return 1;
    }

    /*
    printf("%d\n", inicial_day);

    total_secs = (hrs * 3600) + (mins * 60) + secs; */

    return 0;
}