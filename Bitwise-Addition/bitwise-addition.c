#include <stdio.h>

int main() {
    int a,b,sum,carry;
    printf("Type first number for the addition operation:\n");
    scanf("%d",&a);
    printf("Type second number for the addition operation:\n");
    scanf("%d",&b);

    while(b!=0) {
        sum = a^b;
        carry = (a&b)<<1;
        a=sum;
        b=carry;
    }

    printf("The result is : %d",a);

}
