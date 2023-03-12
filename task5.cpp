#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int evaluate(string exp) {
    stringstream ss(exp);
    //Создаем пустой стек
    stack<int> s;
    string token;
    //Разбиваем строку на токены (цифры и операции)
    while (ss >> token) {
        //Если это операция, вынимаем из стека два последних значения, 
        //применяем операцию и помещаем результат обратно в стек
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
            //Если это цифра, помещаем ее в стек.
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