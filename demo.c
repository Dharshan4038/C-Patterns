#include<stdio.h>

int main()
{ 
    int arr[6];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    int visited[sizeof(arr)/sizeof(int)];
    int count = 0;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        visited[i] = 0;
    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        for(int j=i+1;j<sizeof(arr)/sizeof(int);j++)
        {
            if(arr[i] == arr[j] && visited[j] == 0)
            {
                visited[j] = 1;
                arr[j] = count;
                count--;
            }
        }
        count = 0;
    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        printf("%d ",arr[i]);
    }
}
