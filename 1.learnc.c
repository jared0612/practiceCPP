#include <stdio.h>
#include <stdlib.h>

enum Enum {
    x1,
    x2,
    x3 = 4,
    y1,
    y2
};

int fun() {
    static int x;
    x++;
    return x;
}

void print() {
    int num = fun();
    printf("x = %d\n", num);
}

int main() {

    print();
    print();

    enum Enum enum_A = x1;
    enum Enum enum_B = y2;
    printf("enum_A :%d \nenum_B :%d\n", enum_A, enum_B);
    return 0;
}