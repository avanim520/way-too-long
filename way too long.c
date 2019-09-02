#include<string.h>
#include<stdio.h>
int main()
{
int t;
char s[100];
scanf("%d",&t);
while(t--)
{
scanf("%s",s);
int t=strlen(s);
if(t>10)
printf("%c%d%c\n",s[0],t-2,s[t-1]);
else
printf("%s\n",s);
}
return 0;
}