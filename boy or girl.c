#include<stdio.h>
int main()
{
char s[100];
int i,a[96]={0},n;
gets(s);
for(i=0;s[i];i++)
n++;
printf(n%2==0?"IGNORE HIM!" :"CHAT WITH HER!");
return 0;
}