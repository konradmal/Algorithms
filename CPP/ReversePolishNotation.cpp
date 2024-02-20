#include <iostream>
#include <stack>
#include <sstream>  // Dla std::istringstream
#include <string>

using namespace std;

int evaluatePostfix(const string& expression) {
    stack<int> stack;
    istringstream iss(expression);
    string token;
    while (iss >> token) {
        if (isdigit(token[0]))
            stack.push(stoi(token));
        else {
            int right = stack.top(); 
            stack.pop();
            int left = stack.top(); 
            stack.pop();
            switch (token[0]) {
                case '+': stack.push(left + right); break;
                case '-': stack.push(left - right); break;
                case '*': stack.push(left * right); break;
                case '/': stack.push(left / right); break;
            }
        }
    }
    return stack.top();
}

int main() {
    string expression = "5 3 + 18 12 - *";
    cout << "Postfix: " << expression << endl;
    cout << "Result: " << evaluatePostfix(expression) << endl;
    expression = "5 3 7 - 2 * 3 5 1 + * - * 3 -";
    cout << "Postfix: " << expression << endl;
    cout << "Result: " << evaluatePostfix(expression) << endl;
}