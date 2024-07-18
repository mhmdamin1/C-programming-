// mohamed amiin mohamed



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  ch;


    printf("enter a char : ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'y' || ch== 'e' || ch== 'o' || ch== 'u' || ch== 'i'){
        printf("%c is voewl ",ch);

    }
    else
    {
        printf("%c is constant ",ch);

    }

    return 0;
}
