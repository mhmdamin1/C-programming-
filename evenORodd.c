// mohamed amiin mohamed



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d is even ",n);

    }
    else
    {
        printf("%d is odd ",n);

    }

    return 0;
}
