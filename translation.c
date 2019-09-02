#include<stdio.h>
#include<string.h>
int main()
{
char a[100000],b[100000];
gets(a);
gets(b);
strrev(b);
if(strcmp(a,b)==0)
printf("YES");
else
printf("NO");
return 0;
}