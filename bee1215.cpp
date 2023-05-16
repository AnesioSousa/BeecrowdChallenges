#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    return a.first < b.first;
}

string toLowerCase(const string& str) {
    string result;
    for (char c : str) {
        result += tolower(c);
    }
    return result;
}

int main() {
    string input, token, aux;
    map<string, bool> dict;
    int asciiValue;

    while (cin >> aux) {
        input = toLowerCase(aux);
        // cout << input << endl;

        /**/
        for (int i = 0; i < input.length(); ++i) {
            printf("%c", input[i]);
            asciiValue = static_cast<int>(input[i]);

            if ((asciiValue > 96 && asciiValue < 123))
            // cout << input[asciiValue];
        }
        map<string, bool>::iterator it;
        it = dict.find(input);
        if (it == dict.end())
            dict.insert(pair<string, bool>(input, true));
    }

    /*
    vector<pair<string, int>> vec(dict.begin(), dict.end());
    sort(vec.begin(), vec.end(), compare);

    for (const auto& pair : vec)
        cout << pair.first << endl;

     printf("%c\n", 46);*/

    return 0;
}
