#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int evaluate(string exp) {
    stringstream ss(exp);
    //������� ������ ����
    stack<int> s;
    string token;
    //��������� ������ �� ������ (����� � ��������)
    while (ss >> token) {
        //���� ��� ��������, �������� �� ����� ��� ��������� ��������, 
        //��������� �������� � �������� ��������� ������� � ����
        if (token == "+") {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            s.push(a + b);
        } else if (token == "-") {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            s.push(a - b);
        } else if (token == "*") {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            s.push(a * b);
            //���� ��� �����, �������� �� � ����.
        } else {
            s.push(stoi(token));
        }
    }
    return s.top();
}

int main() {
    string exp;
    getline(cin, exp);
    cout << evaluate(exp) << endl;
    return 0;
}