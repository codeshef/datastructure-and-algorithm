#include <iostream>
using namespace std;
int s[50];
int top=-1;      
push(int elem)
	{	                     
		 s[++top]=elem;
	}
int pop()
	{	                      
		 return(s[top--]);
	}
int main()
{                        
 char pofx[50],ch;
 int i=0,op1,op2;
 	cout<<"Read the Postfix Expression ";
 	cin>>pofx;
 while( (ch=pofx[i++]) != '\0')
 {
  if(isdigit(ch))
   push(ch-'0');
  else
  {        
   op2=pop();
   op1=pop();
   switch(ch)
   {
   case '+':push(op1+op2);
   			break;
   case '-':push(op1-op2);
   			break;
   case '*':push(op1*op2);
   			break;
   case '/':push(op1/op2);
   			break;
   }
  }
 }
 cout<<"\n Given Postfix Expn: \n"<<pofx;
 cout<<"\n Result after Evaluation: \n"<<s[top];
}
