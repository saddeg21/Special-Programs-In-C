#include <stdio.h>

int main() {
    int number,q,result=0,remainder;
    printf("Type a number for us to checking if it's palindrome:\n");
    scanf("%d",&number);

    q=number;

    while(q!=0) {
        remainder=q%10;
        result = result*10 + remainder;
        q=q/10;
    }

    if(result==number) {
        printf("\nThis number is a palindrome number: %d",number);
    } else {
        printf("\nThis is not a palindrome number !!!");
    }
    return 0;
}
