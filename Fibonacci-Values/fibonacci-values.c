#include <stdio.h>

int main() {
    int a = 0, b= 1;
    int n;
    printf("For the result of F(X), provide us a value of x:\n");
    scanf("%d",&n);

    int result;
    for(int i=1;i<=n;i++) {
        result=a+b;
        a=b;
        b=result;
        printf("\n For the value of F(%d): %d",i,a);
    };
    return 0;
}
