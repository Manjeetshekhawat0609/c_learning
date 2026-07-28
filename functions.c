#include<stdio.h>
int sum (int, int);

int sum(int x, int y){
    printf("the sum is %d\n", x + y);
    return x + y;
}
int main() {
    int a = 1;
    int b = 2;

sum(a, b);
    // int c = a + b;
    // printf("the sum of a and b is %d", c);

    int a1 = 12;
    int b1 = 23;

    sum(a1, b1);
    // int c1 = sum(a1, b1);
    // printf("the sum of a1 and b1 is %d", c1);

    int a2 = 2;
    int b2 = 27;

    sum(a2, b2);
    // int c2 = sum(a2, b2);
    // printf("the sum of a2 and b2 is %d", c2);
    return 0;
}



