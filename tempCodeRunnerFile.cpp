#include <cstdio>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> tokenizeString(const string& input) {
    vector<string> tokens;
    istringstream iss(input);
    string token;

    while (getline(iss, token, ' ')) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    int m, n, value, points = 0;
    map<string, int> dict;
    string input;
    map<string, int>::iterator it;
    vector<string> descriptions, tokens, inicial_values;

    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        getline(cin, input, ' ');
        scanf("%d", &value);
        dict[input] = value;
    }

    /*
    cout << "Size of map: " << dict.size() << '\n'
         << endl;
    cout << "mymap contains:\n";

    for (it = dict.begin(); it != dict.end(); ++it)
        cout << it->first << " => " << it->second;
    cout << endl;
    */

    for (int i = 0; i < n; i++) {
        getline(cin, input, '.');
        descriptions.push_back(input);
    }

    vector<string>::iterator itr;
    for (itr = descriptions.begin(); itr != descriptions.end(); ++itr)
        cout << *itr;
    cout << endl;

    /*
    for (string description : descriptions) {
        string delimiter = " ";
        int pos = 0;
        std::string token, a;

        while ((pos = description.find(delimiter)) != std::string::npos) {
            token = description.substr(0, pos);
            // cout << token << ' ';
            if (dict.count(token) > 0)
                cout << token;
            description.erase(0, pos + 1);
        }
        cout << endl;
        tokens.clear();
    }
    printf("Points: %d\n", points);
    */
}