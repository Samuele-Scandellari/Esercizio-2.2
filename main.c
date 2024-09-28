#include<stdio.h>
int main() {
    float B, H, A;
    printf("area triango: \nBase:");
    scanf("%f", &B);
    printf("Altezza:");
    scanf("%f", &H);
    A = B*H/2;
    printf("Area: %f", A);
}