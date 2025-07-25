#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 1000

int nums[MAX];     // stores numbers
char ops[MAX];     // stores operators
int numTop = -1;
int opTop = -1;

int applyOp(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default: return 0;
    }
}

// precedence checker
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

void pushNum(int val) {
    nums[++numTop] = val;
}

void pushOp(char op) {
    while (opTop >= 0 && precedence(ops[opTop]) >= precedence(op)) {
        int b = nums[numTop--];
        int a = nums[numTop--];
        char prevOp = ops[opTop--];
        int res = applyOp(a, b, prevOp);
        pushNum(res);
    }
    ops[++opTop] = op;
}

int main() {
    char exp[MAX];
    printf("Enter expression: ");
    fgets(exp, sizeof(exp), stdin);

    // remove spaces
    char clean[MAX];
    int j = 0;
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] != ' ' && exp[i] != '\n') {
            clean[j++] = exp[i];
        }
    }
    clean[j] = '\0';

    int i = 0;
    while (clean[i] != '\0') {
        if (isdigit(clean[i])) {
            int val = 0;
            while (isdigit(clean[i])) {
                val = val * 10 + (clean[i] - '0');
                i++;
            }
            pushNum(val);
        } else {
            pushOp(clean[i]);
            i++;
        }
    }

    // Apply remaining operators
    while (opTop >= 0) {
        int b = nums[numTop--];
        int a = nums[numTop--];
        char op = ops[opTop--];
        int res = applyOp(a, b, op);
        pushNum(res);
    }

    printf("Result: %d\n", nums[numTop]);
    return 0;
}
