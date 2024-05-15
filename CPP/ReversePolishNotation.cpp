#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int reversePolishNotation(string expression) {
    stack<int> stack;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == ' ')
            continue;
        if (isdigit(expression[i])) {
            int num = 0;
            while (i < expression.length() && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            i--;
            stack.push(num);
        } else if (expression[i] != ' ') {
            int right = stack.top();
            stack.pop();
            int left = stack.top();
            stack.pop();
            switch (expression[i]) {
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
    string expression = "3 4 + 2 * 7 /";
    int result = reversePolishNotation(expression);
    cout << "Result: " << result << endl;
}