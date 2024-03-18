#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[20];
    scanf("%s",s);
    int alphabets[26];
    for(int i=0;i<26;i++)
    {
        alphabets[i] = 0;
    }
    char ch;
    for(int i=0;i<strlen(s);i++)
    {
        ch = tolower(s[i]);
        alphabets[ch - 'a']++;
    }
    char a = 'a';
    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i+a,alphabets[i]);
    }
}
