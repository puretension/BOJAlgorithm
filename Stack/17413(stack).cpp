#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int strLen = str.length();
    stack<char> charStack;
    bool flag = false;
    string result;

    for (int i = 0; i < strLen; i++) {
        if (str[i] == '<') {
            flag = true;
            while (!charStack.empty()) {
                result += charStack.top();
                charStack.pop();
            }
            result += str[i];
        } else if (flag && str[i] != '<' && str[i] != '>') {
            result += str[i];
        } else if (str[i] == '>') {
            flag = false;
            result += str[i];
            continue;
        } else if (!flag && str[i] == ' ') {
            while (!charStack.empty()) {
                result += charStack.top();
                charStack.pop();
            }
            result += str[i];
        } else {
            charStack.push(str[i]);
        }
    }

    while (!charStack.empty()) {
        result += charStack.top();
        charStack.pop();
    }

    cout << result << endl;

    return 0;
}
