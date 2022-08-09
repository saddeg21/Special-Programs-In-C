#include <stdio.h>

int main() {
    int number,result=0,rem,count=0,cnt,mul=1;
    printf("Enter a number for checking whether it's Armstrong or not:\n");
    scanf("%d",&number);

    int q=number;

    while(q!=0) {
        q=q/10;
        count++;
    }

    q=number;
    cnt = count;

    while(q!=0) {
        rem = q%10;
        while(cnt!=0) {
            mul = mul*rem;
            cnt--;
        }
        result = result + mul;
        cnt=count;
        mul=1;
        q=q/10;
    }

    if(result==number) {
        printf("\nThis number is a palindrome number: %d",number);
    }else {
        printf("\nThis is not a palindrome number.");
    }
}
