#include<bits/stdc++.h>
using namespace std;
class Stack
{
	int top=-1;
	char value[50];
	public:
		Stack()
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
		bool isEmpty()
		{
			if(top==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		
};
int main()
{
	Stack S;
	cout<<"Enter parenthesis expression:";
	string expr;
	int flag=0;
	cin>>expr;
	for(int i=0;expr[i]!='\0';i++)
	{
		if(expr[i]=='(' || expr[i]=='[' || expr[i]=='{')
		{
			S.push(expr[i]);
		}
		else 
		{
			char a=S.pop();
			if((a=='(' && expr[i]==')') || (a=='{' && expr[i]=='}') || (a=='[' && expr[i]==']') )
			{
				flag=1;
			}
			else
			{
				flag=0;
				cout<<"Unbalanced\n";
				
				break;
			}
		}
	}
	if(flag==1 && S.isEmpty())
	{
		cout<<"Balanced Parenthesis Expression"<<endl;
	}
	
}
