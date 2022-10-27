#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 10;
    if(a<6){
        printf("Value of a is less than 6");
    }
    else {
        printf("Value of a is : %d",a);
    }
}
// In the above code the if condition is not possible
// Hence it can be referred to as dead code
// It can be eliminated by removing the conditional statement

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 10;
    printf("Value of a is : %d",a);
}

