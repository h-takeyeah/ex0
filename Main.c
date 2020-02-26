#include <stdio.h>

// 加算を行う関数
int add(int a, int b) {
    return a + b;
}

// 減算を行う関数
int minus(int a, int b) {
    return a - b;
}

// 積算を行う関数
int mul(int a, int b) {
    return a * b;
}

// 除算(切り捨て)を行う関数
int divide(int a, int b) {
    return a / b;
}

int main(void){
    printf("add:%d\n", add(1, 2) == 3 ? 1 : 0);
    printf("minus:%d\n", minus(3, 2) == 1 ? 1 : 0);
    printf("mul:%d\n", mul(3, 4) == 12 ? 1 : 0);
    printf("div:%d\n", divide(15, 3) == 5 ? 1 : 0);
}
