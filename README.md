![695px-C_Programming_Language svg (1)](https://user-images.githubusercontent.com/89015461/184000720-ef67561d-2871-4ce4-a71f-82f19ebf487d.png)

# Special-Programs-In-C

This repository includes many special program designed by using C programming language and basic level of data structures.

It includes several programs which guides you to learn C language better and also use the benefits of language for calculation.

## Included Programs
* __Armstrong Number__
* __Binary to Decimal Converter__
* __Bitwise Addition__
* __Fibonacci Values__
* __Floyds Triangle__
* __Leap Year__
* __Palindrome Numbers__
* __Perfect Numbers__
* __Power of Integer__
* __Prime Number__
* __Pyramid of Stars__
* __Strong Number__
* __Sum Without Plus__

## Usage/Examples
A program to determine whether a number is PRIME or NOT

```c
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

```


## 🔗 Links
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/ahmetdenizdastan)

## Feedback

If you have any feedback, please reach out to me at ahmetdenizdastan@gmail.com


## Authors

- [@ahmetdenizdastan](https://www.github.com/saddeg21)

