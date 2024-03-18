#include<stdio.h>
#include<stdbool.h>

bool isLeapYear(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0 && year % 400 == 0)
        {
            return true;
        }
        return true;
    }
    return false;
}


int main()
{
    int year;
    scanf("%d",&year);
    char days[][20] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Staurday","Sunday"};
    int count = 0;
    for(int i=2002;i<=year;i++)
    {
        if(isLeapYear(i))
        {
            count += 2;
        }
        else{
            count++;
        }
    }
    printf("%s",days[count % 7]);
}
