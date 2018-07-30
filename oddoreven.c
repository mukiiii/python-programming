#include <stdio.h>

void main()
{
    int a;
    scanf("%d",&a);
    if(a>=0)
    {
        
        
        if(a==0)
        printf("Zero");
        else
        {
        int b=a%2;
            if(b)
            printf("odd");
            else
            printf("Even");
        }
    }
    else
    printf("Invalid");
    getch();
    
}
