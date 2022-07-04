//Program 2.14 Choosing the correct type for the job 2
#include <stdio.h>

int main(void){
    const float Revenue_Per_150 = 4.5f;
    unsigned short JanSold = 23500;
    unsigned short FebSold = 19300;
    unsigned short MarSold = 21600;

    float RevQuarter = 0.0f;
    unsigned long QuarterSold = JanSold + FebSold + MarSold;

    printf("Stock sold in\n Jan: %d\n Feb: %d\n Mar: %d\n", JanSold, FebSold, MarSold);
    printf("Total stock sold in first quarter: %ld\n", QuarterSold);

    //Calculate the total revenue for the quarter and output it

    RevQuarter = QuarterSold / 150 * Revenue_Per_150;
    printf("Sales revenue this quarter is: $%.2f\n", RevQuarter);
    return 0;
}

