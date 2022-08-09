#include <stdio.h>

int main() {
    int x,y;
    printf("Enter the first you want to sum up:\n");
    scanf("%d",&x);
    printf("Enter the second you want to sum up:\n");
    scanf("%d",&y);

    if(y>0) {
       while(y!=0) {
            y--;
            x++;
       }
    }else {
        while(y!=0){
            y++;
            x--;
        }
    }

    printf("%d",x);
    return 0;

}
