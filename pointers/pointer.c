#include<stdio.h>
int main()
{
    int i = 72;
    int* j = &i;
    int k = 67;
    printf("the address of i is %u\n", &i);
    printf("the address of i is %u\n", j);
    printf("the address of i is %u\n", &k);
    return 0;
}
