#include <stdio.h>

int main() {
    int number,fact=1,result=0,rem;
    printf("Enter a number for checking whether it's STRONG or NOT:\n");
    scanf("%d",&number);

    int q=number;
    while(q!=0) {
        rem = q%10;

        while(rem!=0) {
            fact = fact*rem;
            rem--;
        }
        result = result + fact;
        fact = 1;
        q=q/10;
    }

    if(result==number){
        printf("%d is a STRONG number",number);
    } else {
        printf("NOT A STRONG NUMBER");
    }
    return 0;
}
