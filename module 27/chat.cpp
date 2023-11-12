#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to return the precedence of an operator
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else {
        return 0;
    }
}

// Function to convert infix to postfix expression
string infixToPostfix(string infix) {
    string postfix = "";
    stack<char> s;

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        // If the character is an operand, output it
        if (isalnum(c)) {
            postfix += c;
        }
        // If the character is a left parenthesis, push it onto the stack
        else if (c == '(') {
            s.push(c);
        }
        // If the character is a right parenthesis, pop operators and output them until a left parenthesis is encountered
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            // Pop and discard the left parenthesis
            if (!s.empty() && s.top() == '(') {
                s.pop();
            }
        }
        // If the character is an operator, pop operators from the stack and output them until the stack is empty or a left parenthesis is encountered. Then push the scanned operator onto the stack.
        else {
            while (!s.empty() && s.top() != '(' && precedence(c) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop any remaining operators from the stack and output them
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix = "3+4*5/(6-2)";
    string postfix = infixToPostfix(infix);

    cout << "Infix expression: " << infix << endl;
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
