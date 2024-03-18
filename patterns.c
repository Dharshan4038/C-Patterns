#include<stdio.h>


void pattern5(int n)
{ 
    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern6(int n)
{
    for(int i=n;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

void pattern7(int n)
{
    for(int row=0;row<n;row++)
    {
        for(int j=0;j<n-row-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*row+1;k++)
        {
            printf("*");
        }
        for(int j=0;j<n-row-1;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
} 

void pattern8(int n)
{
    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++)
        {
            printf("*");
        }
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

void pattern10(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int stars = i;
        if(i > n) 
            stars = 2*n-i;
        for(int k=1;k<=stars;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern11(int n)
{
    int start = 1;
    for(int i=1;i<=n;i++)
    {
        if(i%2 == 0) start = 0;
        else start = 1;
        for(int j = 1;j<=i;j++)
        {
            printf("%d",start);
            start = 1 - start;
        }
        printf("\n");
    }
}

void pattern12(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int k=1;k<=(n*2)-(i+i);k++)
        {
            printf(" ");
        }
        for(int m=1;m<=i;m++)
        {
            printf("%d",m);
        }
        printf("\n");
    }
}

void pattern13(int n)
{
    int start=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",start);
            start++;
        }
        printf("\n");
    }
}

void pattern14(int n)
{
    for(int i=1;i<=n;i++)
    {
        char a = 'A';
        for(int j=1;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}

void pattern15(int n)
{
    for(int i=n;i>=0;i--)
    {
        char a = 'A';
        for(int j=1;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}

void pattern16(int n)
{
    char a = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",a);
        }
        a++;
        printf("\n");
    }
}

void pattern17(int n)
{
    for(int i=1;i<=n;i++)
    {
        char a = 'A';
        for(int j=n-i;j>0;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++)
        {    
            printf("%c",a);      
            if(k <= (2*i-1)/2)
            {
                a++;
            }
            else
            {
                a--;
            }
        }
        for(int j=n-i;j>0;j--)
        {
            printf(" ");
        }
        printf("\n");
    }
}

void pattern18(int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}

void pattern19(int n)
{
    for(int i=1;i<=n;i++)
    {
        //stars
        for(int j=n-i+1;j>0;j--)
        {
            printf("*");
        }
        //spaces
        for(int k=1;k<=(2*i)-2;k++)
        {
            printf(" ");
        }
        //stars
        for(int j=n-i+1;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int k=1;k<=(n*2)-(2*i);k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern20(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int k=1;k<=(n*2)-(2*i);k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("*");
        }
        for(int k=1;k<=(2*i);k++)
        {
            printf(" ");
        }
        for(int j=n-i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern21(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}


void pattern22(int n)
{
    for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<n*2-1;j++)
        {
            int top=i;
            int left = j;
            int right = (n*2-1)-1-j;
            int down = (n*2-1)-1-i;
            int min1 = top <= down ? top : down;
            int min2 = left <= right ? left: right;
            int fmin = min1 <= min2 ? min1 : min2;
            printf("%d",n - fmin);
        }
        printf("\n");
    }
}

void mypattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            if(k % 2 != 0)
                printf("*");
            else
                printf(" ");
        }
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}



int main()
{
    int n = 5;
    pattern22(n);
}
