#include<stdio.h>
int main()
{ 
    int n = 5;
    int c=1;
    int lc=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=lc;j++)
        {
            if(c==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            c=1-c;
        }
        for(int j=n-i;j>0;j--)
        {
            printf(" ");
        }
        printf("\n");
        lc+=2;
        c=1;
    }
}
