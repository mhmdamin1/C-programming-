// MOHAMED AMIN MOHAMED
// swap two numbers without temp vari...

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a  ;            //30
    int b  ;            //10
    printf("enter the num of a : ");

    scanf("%d",&a);

    printf("enter the num of b : ");

    scanf("%d",&b);

    a = a + b  ; // 40

    b = a - b ; // 10

    a = a - b ; // 30

    printf("a is : %d \nb is : %d ",a,b);

    return 0;
}
