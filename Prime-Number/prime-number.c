#include <stdio.h>
#include <math.h>

int main() {
    int number,val1,val2;
    printf("Enter a number which will be checked if it's prime: \n");
    scanf("%d",&number);

    val1=number;
    val2=ceil(sqrt(number));

    int count=0;

    for(int i=2;i<=val2;i++) {
        if(number%i==0) {
            count=1;
        }
    }

    if((count==0 && val1!=1) || val1==2) {
        printf("%d is a prime number",val1);
    } else {
        printf("%d is NOT a prime number",val1);
    }
    return 0;
}
