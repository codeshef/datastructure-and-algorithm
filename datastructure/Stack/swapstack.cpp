/* swap top two elements of stack*/
#include<iostream>
using namespace std;
const int maxsize =100;
class stack{
	int data[maxsize];
	int top;
	public:
	void push(int element)
	{  if(top>=maxsize)
	    {
	    	cout<<"Overflow"<<endl;
		}
		else
		{  data[top++] =element;
		}
	}
	void pop()
	{ if(top==-1)
	  { cout<<"Underflow"<<endl;
	  }
	  else
	  {  data[top--];
	  }
	}
	void printstack()
	{ int i;
	for(i=0;i<top;i++)
	{ cout<<data[i]<<endl;
	}
	}
	void size()
	{  cout<<"size : "<<top+1<<endl;
	}
	void swap()
	{  int temp;
	   temp=data[top-1];
	   data[top-1]=data[top-2];
	   data[top-2]=temp;
	}
};
int main()
{ stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.push(7);
  s.swap();
  s.printstack();
}
