#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> pila;

    for (int i = 0; i < s.length(); i++) {
        char actual = s[i];
        if (actual == '(' || actual == '[' || actual== '{') {
            pila.push(actual);
        }else {
            if (pila.empty()) return false; 

            char tope = pila.top();
            if ((actual == ')' && tope == '(') ||
                (actual == ']' && tope == '[') ||
                (actual == '}' && tope == '{')) {
                pila.pop(); 
            } else {
                return false; 
            }
        }
    }
    return pila.empty();
}