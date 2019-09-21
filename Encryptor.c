#include <stdio.h>
#include <stdlib.h>

int main()
{

    ## simple program that receives plain text
    ## and then uses its own algorithm to encrypt it
    char *plain[100],*cipher[100];
    int key;
    char *ptr1;
    char *ptr2;
    int i;

    printf("plain text:");
    gets(plain);
    ptr1 = &plain[0];
    ptr2 = &cipher[0];
    printf("give key:");

    scanf("%d",&key);



    while(*ptr1!='\0')
    {

        if(*ptr1==' ')
        {
            *ptr2 = *ptr1;
        }

        else if(*ptr1+key>122)
        {
            *ptr2 = *ptr1+key-26;
        }

        else
        {
            *ptr2 = *ptr1+key;
        }

        ptr1++;
        ptr2++;


    }


    puts(cipher);





    return 0;
}


