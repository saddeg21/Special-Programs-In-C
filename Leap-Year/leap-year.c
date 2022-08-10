#include <stdio.h>

int main() {
    int year;
    printf("Enter a year to check whether it's a leap year or not: \n");
    scanf("%d",&year);

    if(year%400==0) {
        printf("%d is a leap year",year);
    } else if(year%100==0) {
        printf("%d is NOT a leap year",year);
    } else if(year%4==0) {
        printf("%d is a leap year",year);
    } else {
        printf("%d is NOT a leap year",year);
    }
    return 0;
}
