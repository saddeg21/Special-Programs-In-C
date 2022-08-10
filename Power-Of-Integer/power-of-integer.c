#include <stdio.h>

int main() {
    int base,exponent,power=1;
    double powernegative = 1.0;

    printf("Enter a base number:\n");
    scanf("%d",&base);
    printf("Enter an exponent number:\n");
    scanf("%d",&exponent);

    if(exponent>0) {
        while(exponent != 0) {
            power = power*base;
            exponent--;
        }
        printf("The result is : %d",power);
    }else if(exponent < 0) {
        while(exponent != 0) {
            powernegative = powernegative*(1.0/base);
            exponent++;
        }
        printf("The result is : %.10f",powernegative);
    } else {
        printf("The result is : 1");
    }

    return 0;
}
