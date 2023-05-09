/*design a dfa which accepts a string which starts with a and ends with b */
#include<stdio.h>
#include<string.h>
void check(char str[20]);
void q0(char);
void q1(char);
void q2(char);
void q3(char);
int dfa=0;
main()
{
	int c;
	char str[20];
	printf("enter string");
	gets(str);
	check(str);
}
void check(char str[20])
{
int l,i;
l=strlen(str);
for (i=0;i<l;i++)
{
	if (dfa==0)
	q0(str[i]);
	else if(dfa==1)
	q1(str[i]);
	else if (dfa==2)
	q2(str[i]);
	else
	q3(str[i]);
	
	}
	if (dfa==2)
	{
		printf ("the string is accepted. ");
		}	
		else
		     printf("the string is not accepted");
}
     void q0(char c)
       {
	if(c=='a')
	{
		dfa=1;
		
	}
	else if (c=='b')
	{
		dfa=3;
	}
      }
     void q1(char c)
     {
        if(c=='a')
	{
		dfa=1;
		
	}
	else if (c=='b')
	{
		dfa=2;
	}  	

        else dfa=3;
     }

void q2(char c)
        {
            if(c=='a')
	{
		dfa=1;
		
	}
	else if (c=='b')
	{
		dfa=2;
	}  	

         else dfa=3;
        }
            void q3(char c)
            {
     
	   {
		dfa=3;
		
	   }
		

           }
