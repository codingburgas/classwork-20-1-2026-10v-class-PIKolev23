#include"math.h"

int add1(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return b - a;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return a / b;
}