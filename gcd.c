#include<stdio.h>

void findGCD(int a,int b)
{
    int res = ((a < b) ? a: b);
    while(res > 0)
    {
        if(a % res == 0 && b % res ==0)
        {
            break;
        }
        res--;
    }
    printf("%d",res);
}

int recursionGCD(int a,int b)
{
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a == b)
        return b; // or return b;
    
    if(a > b)
        return recursionGCD(a-b,b);
    return recursionGCD(a,b-a);

}


int main()
{
    int a = 98;
    int b = 56;
    // findGCD(a,b);
    printf("%d",recursionGCD(a,b));
    return 0;
}