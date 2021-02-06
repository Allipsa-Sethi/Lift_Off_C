#include<stdio.h>
int main()
{
    char v,a,e,i,o,u;
        printf("enter any alphabet: \n");
        scanf("%c", &v);
    switch (v)
    {
        case 'a':
        printf("vowel");
        break;
        case 'e' :
        printf("vowel");
        break;
        case 'i' :
        printf("vowel");
        break;
        case 'o' :
        printf("vowel");
        break;
        case 'u' :
        printf("vowel");
        break;
        default :
        printf("consonant !");
    }
    return 0 ;
}