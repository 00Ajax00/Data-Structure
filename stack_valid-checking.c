#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(const char* s) {
    char stack[strlen(s)];
    int top = -1;
    
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) return false;
            char last = stack[top--];
            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                return false;
            }
        }
    }

    return top == -1;
}
     // 1 = TRUE // 0 = FALSE
int main() { 
    printf("%d\n", isValid("()"));
    printf("%d\n", isValid("(){}[]"));
    printf("%d\n", isValid("{[()]}"));
    printf("%d\n", isValid("{[(])}"));
    printf("%d\n", isValid("({[)]}"));
    printf("%d\n", isValid("((("));
    return 0;
}
