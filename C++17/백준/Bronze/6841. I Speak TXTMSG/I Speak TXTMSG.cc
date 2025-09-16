#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    unordered_map<string, string> dict = {
        {"CU", "see you"},
        {":-)", "I’m happy"},
        {":-(", "I’m unhappy"},
        {";-)", "wink"},
        {":-P", "stick out my tongue"},
        {"(~.~)", "sleepy"},
        {"TA", "totally awesome"},
        {"CCC", "Canadian Computing Competition"},
        {"CUZ", "because"},
        {"TY", "thank-you"},
        {"YW", "you’re welcome"},
        {"TTYL", "talk to you later"}
    };
    string input;
    while (cin >> input) {
        if (dict.find(input) != dict.end())
            cout << dict[input] << "\n";
        else
            cout << input << "\n";
        if (input == "TTYL")
            break;
    }
}