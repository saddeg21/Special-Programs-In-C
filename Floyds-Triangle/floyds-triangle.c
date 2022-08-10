#include <stdio.h>

int main() {
    int row,n=1;
    printf("Enter a row number your triangle should be consisted of: \n");
    scanf("%d",&row);
    printf("Your right-angle triangle with %d rows:\n",row);

    for(int j=1;j<=row;j++) {
        for(int i=1;i<=j;i++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
