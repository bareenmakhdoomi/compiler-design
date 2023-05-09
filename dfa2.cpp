/* design a dfa to accept binary no consisting of even no of 0's and 1's  */
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
/*	printf("Do u want to continue? type any key to stop and y to continue: \t");
	scanf("%c",&c);
	if(c=='Y'||c=='Y') 
	{
		printf("enter string :");
		gets(str);  
		check(str);
		
	}
	else
	{
		printf("the end");
		
	}*/
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
	if (dfa==0)
	{
		printf ("the string is accepted. ");
		}	
		else
		     printf("the string is not accepted");
}
     void q0(char c)
       {
	if(c=='0')
	{
		dfa=1;
		
	}
	else if (c=='1')
	{
		dfa=3;
	}
	else
	 {
	 	dfa=4;
	 }
      }
     void q1(char c)
     {
        if(c=='0')
	{
		dfa=0;
		
	}
	else if (c=='1')
	{
		dfa=2;
	}  	
         else
         {
         	dfa=4;
         }
        
     }

void q2(char c)
        {
            if(c=='0')
	{
		dfa=3;
		
	}
	else if (c=='1')
	{
		dfa=1;
	}  	

           else 
           {
           	dfa=4;
           }
        }
            void q3(char c)
            {
              if(c=='0')
	   {
		dfa=2;
		
	   }
	 else if(c=='1')	
                {
                	dfa=0;
	   }
	   
}
  void q4(char c)
            {
     
	   {
		dfa=4;
		
	   }
		

           }
