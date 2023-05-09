#include<stdio.h>
#include<string.h>
int main()
{
char name[200],i;
printf("enter string \n");
gets(name);
int l=strlen(name);
for(i=0; i<l; i++)
{
printf(" %c\n",name[i]);
}
}

