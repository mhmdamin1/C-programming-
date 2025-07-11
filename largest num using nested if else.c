#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter your numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b){
        if(b<c){
            printf("largest num is : %d",c);
        }
        else if(b>c){
            printf("largest num is : %d",b);
        }
    else{
        printf("largest num is : %d",a);
    }
    }

    return 0;
}
