// MOHAMED AMIN MOAHMED

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x,z;
    char m;

    printf("enter operator + or - or * or / : ");
    scanf("%c",&m);

    printf("enter two operand: ");
    scanf("%f \n%f ",&x,&z);

    switch(m){
        case '+' :
            printf("%f + %f = %f",x,z,x+z);
            break;
        case '-' :
            printf("%f - %f = %f",x,z,x-z);
            break;
        case '*' :
            printf("%f * %f = %f",x,z,x*z);
            break;
        case '/' :
            printf("%f / %f = %f",x,z,x/z);
            break;
        default:
            printf("the operator u enter dose not exist. ");
            break;

    }



    return 0;
}
