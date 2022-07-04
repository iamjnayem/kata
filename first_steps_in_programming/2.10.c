//Program 2.10 Round the table again but shorter
#include<stdio.h>

int main(void){
    float diameter = 0.0f;
    float radius = 0.0f;
    const float Pi = 3.14159f;

    printf("Input the diameter of the table:");
    scanf("%f",&diameter);


    radius = diameter / 2.0f;

    printf("\nThe circumference is %.2f", 2.0f*Pi*radius);
    printf("\nThe are is %.2f\n",Pi*radius*radius);
    return 0;
}