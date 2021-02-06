#include <stdio.h>
int main() 
{
    int l,m,n,o,p,q;
    printf("enter your marks in physics, chemistry, maths, biology, computer :\n");
    scanf("%d %d %d %d %d", &l,&m,&n,&o,&q);
    p=(l+m+n+o+q)/5;
    if (p>=90)
        {
            printf("grade A \n");
        }
    else if (p>=80)
        {
            printf("grade B \n");
        }
    else if (p>=70)
        {
            printf("grade C \n");
        }
    else if (p>=60)
        {
            printf("grade D \n");
        }
    else if (p>=40)
        {
            printf("grade E \n");
	    }
    else if (p < 40)
        {
            printf("grade F \n");
	    }
    else if (p>100)
	    {
	        printf("entered wrong marks ! \n");
	    }
    return 0;
}