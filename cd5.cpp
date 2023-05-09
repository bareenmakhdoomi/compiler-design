#include<stdio.h>
#include<string.h>
int main()
{
char msg[200],i;
printf("enter string \n");
gets(msg);
int l=strlen(msg);
for(i=0; i<l; i++)
{
if(msg[i]=='a')
msg[i]='?';
printf("%c",msg[i]);
}
}

