#include<stdio.h>

int main()
{
    int a = 2;//010
    int b = 4;//100
    
    int result = 0;
    while (b > 0) {
        if (b & 1) {
            result += a;
        }
        a = a << 1;//1000
        b = b >> 1;//0001
    }
   printf("%d",result);
}



