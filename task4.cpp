#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool checkBrackets(string str) {
    stack<char> st;
    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') || 
                (ch == '}' && top != '{') || 
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string str;
    cin >> str;
    if (checkBrackets(str)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}