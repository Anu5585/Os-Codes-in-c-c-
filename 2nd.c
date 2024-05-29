#include<stdio.h>

int main()
{
    int value1,value2;
    printf("Add 2 Numbers \n");

    printf("Enter First Number : ");

    scanf("%d", &value1); //reading input like cin %d means int value 

    printf("Enter Second  Number : " ); //%d\n means int in new line

    scanf("%d", &value2); //reading input like cin %d means int value

    int sum = value1 + value2; 
    printf("The Sum of %d and %d is %d\n ",value1,value2,sum);
    return 0;
}