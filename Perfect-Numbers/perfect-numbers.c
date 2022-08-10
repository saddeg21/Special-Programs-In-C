#include <stdio.h>

int main() {
    int number;
    printf("Enter a number to be checked if it's a perfect number or not: \n");
    scanf("%d",&number);

    int sum=0,rem;

    for(int i=1;i<number;i++) {
        if(number%i==0) {
            sum = sum+i;
        }
    }

    if(sum==number) {
        printf("%d is a PERFECT Number",number);
    } else {
        printf("%d is NOT a PERFECT number",number);
    }

    return 0;
}
