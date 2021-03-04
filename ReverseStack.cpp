#include<bits/stdc++.h>
using namespace std;
class ReverseStack
{
	int top=-1;
	char value[50];
	public:
		ReverseStack()
		{
			
		}
		void push(char x)
		{
			if(top==50)
			{
				cout<<"Stack overflow\n";
			}
			else
			{
				top++;
				value[top]=x;
			}
		}
		char pop()
		{
			if(top==-1)
			{
				cout<<"Stack underflow\n";
			}
			else
			{
				return value[top--];
			}
		}
		
		
};
int main()
{
	ReverseStack Rs;
	cout<<"Enter string:";
	char String[50];
	cin>>String;
	for(int i=0;String[i]!='\0';i++)
	{
		Rs.push(String[i]);
	}
	for(int i=0;String[i]!='\0';i++)
	{
		String[i]=Rs.pop();
	}
	cout<<String<<endl;
	
}
