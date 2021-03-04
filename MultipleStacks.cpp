#include<bits/stdc++.h>
using namespace std;
#define max_size 100
class MultipleStack
{
	int top[50],a[50],bottom[50];
	public:
		MultipleStack(int ns)
		{
			for(int i=0;i<ns;i++)
			{
				top[i]=bottom[i]=(max_size/ns)*i-1;
			}
		}
		void push(int i, int x)
		{
			if((top[i]==bottom[i+1])|| top[i]==max_size-1)
			{
				cout<<"Stack is full.\n";
			}
			else
			{
				a[++top[i]]=x;
			}
		}
		void pop(int i)
		{
			if(top[i]==bottom[i])
			{
				cout<<"Stack is empty.\n";
			}
			else
			{
				cout<<"Deleted element is "<<a[top[i]--]<<endl;
			}
		}
		void display(int i)
		{
			if(top[i]==bottom[i])
			{
				cout<<"Stack is empty.\n";
			}
			else
			{
				for(int j=top[i];j>bottom[i];j--)
				{
					cout<<a[j]<<" ";
				}
			}
		}
};
int main()
{
	MultipleStack ms(3);
	ms.push(1,3);
	ms.push(2,4);
	ms.push(3,3);
	ms.push(2,5);
	ms.display(2);
	ms.pop(2);
	ms.display(2);
	ms.display(1);
	ms.display(3);
}
