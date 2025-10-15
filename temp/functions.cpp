#include <bits/stdc++.h>
using namespace std;



int main() {
    printf("going to print area of square\n");
    float side;

    printf("enter the side of square : ");
    scanf("%f" , &side);

    square(side);

    return 0;
}

void square(float side){
    
    float area = side*side;

    printf("area : %f\n" , area);
}