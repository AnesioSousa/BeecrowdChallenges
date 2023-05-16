#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int m, n, value, points = 0;
    map<string, int> dict;
    string input;

    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        cin >> input >> value;
        dict[input] = value;
    }

    for (int i = 0; i < n; i++) {
        while (cin >> input) {
            if (input == ".")
                break;
            points += dict[input];
        }
        cout << points << endl;
        points = 0;
    }
}