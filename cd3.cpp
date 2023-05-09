#include<string.h>
#include<stdio.h>
int main()
{
char  s[100];
printf("enter any string");
gets(s);
int l=strlen(s);
int zero_count=0,one_count=0;
for(int i=0;i<l;i++)
{
if(s[i]=='0')
zero_count++;
else
one_count++;
}
if((zero_count%2==0) && (one_count%2!=0))
printf("accepted");
else
printf("rejected");
return 0;
}
