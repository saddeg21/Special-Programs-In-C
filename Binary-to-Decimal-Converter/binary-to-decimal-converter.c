#include <stdio.h>

int main() {
    int binary,rem;
    printf("Enter a binary number to be converted to decimal:\n");
    scanf("%d",&binary);

    int decimal=0,weight=1;

    while(binary!=0) {
        rem = binary % 10;
        decimal = decimal + rem*weight;
        weight = weight * 2;
        binary = binary/10;
    }

    printf("This is decimal representation of your number: %d",decimal);
    return 0;
}
