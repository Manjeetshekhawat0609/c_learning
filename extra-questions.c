// #include <stdio.h>
// int main() {
//     int side , area;
//     printf("Enter the side of the square: ");
//     scanf("%d", &side);
//     area = side * side;
//     printf(" the area of the square is %d\n", area);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int side, volume;
//     printf("Enter the side of the cube: ");
//     scanf("%d", &side);
//     volume = side * side * side;
//     printf(" the volume of the cube is %d\n", volume);
//     return 0;
// }


#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
