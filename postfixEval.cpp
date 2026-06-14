#include <iostream>
#include <cmath>      
//#include "stackusingsll.h"
#include "sllADT.h"
using namespace std;

// User-defined isdigit function
int isdigit(char symb) {
    return (symb >= '0' && symb <= '9');
}

// Function to perform operations
double oper(int symb, double op1, double op2) {
    switch (symb) {
        case '+': return (op1 + op2);
        case '-': return (op1 - op2);
        case '*': return (op1 * op2);
        case '/': return (op1 / op2);
        case '$': return pow(op1, op2); // exponentiation
        default:
            cout << "Illegal operation: " << (char)symb << endl;
            exit(1);
    }
}

// Function to evaluate postfix expression
double evalPostfix(const char expr[]) {
    Stack <double> st;
    int position;
    char c;
    double op1, op2, value;

    st; // stack ready

    for (position = 0; (c = expr[position]) != '\0'; position++) {
        if (isdigit(c)) {
            st.push((double)(c - '0'));
        } 
        else if (c == ' ' || c == '\t') {
            continue; // ignore spaces
        }
        else {
            op2 = st.top(); st.pop();
            op1 = st.top(); st.pop();
            value = oper(c, op1, op2);
            st.push(value);
        }
    }

    return st.top();
}

// Main function
int main() {
    char expr[50];
    cout << "Enter postfix expression (e.g. 23+5*): ";
    cin >> expr;

    double result = evalPostfix(expr);
    cout << "Result = " << result << endl;

    return 0;
}
