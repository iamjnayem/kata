//Program 2.7 division with float values

#include<stdio.h>

int main(void){
    float plank_length = 10.0f;
    float piece_count = 4.0f;
    float piece_length = 0.0f;

    piece_length = plank_length / piece_count;
    printf("A plank %f feet long can be cut into %f pieces %f feet long.\n", plank_length, piece_count, piece_length);

    printf("A plank %0.2f feet long can be cut into %0.0f pieces %0.2f feet long.\n", plank_length, piece_count, piece_length);

    return 0;

}