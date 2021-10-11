#include <stdio.h>

int main(){
    float v;
    float r;
    float pi = 3.14;
    
    printf("please input the ball's radius : ");
    scanf("%f", &r);
    
    v = 4.0/3.0*pi*r*r*r;
    printf("the ball's volume is %.2f\n" , v);
}
