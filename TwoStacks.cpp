#include<bits/stdc++.h>
using namespace std;

class TwoStacks
{
	int arr[1000],top1,top2;
	int size=1000;
	public:
		TwoStacks()
		{
			top1=-1;
			top2=size;
			
		}
		void push1(int x)
		{
			if(top1<top2-1)
			{
				top1++;
				arr[top1]=x;
			}
			else
			{
				cout<<"Stack overflow\n";
			}
		}
		void push2(int x)
		{
			if(top1<top2-1)
			{
				top2--;
				arr[top2]=x;
			}
			else
			{
				cout<<"Stack overflow\n";
			}
		}
		void pop1()
		{
			if(top1>0)
			{
				int x=arr[top1];
				top1--;
				cout<<"Popped element:"<<x<<endl;
			}
			else
			{
				cout<<"Underflow\n";
			}
		}
		void pop2()
		{
			if(top2<size)
			{
				int x=arr[top2];
				top2++;
				cout<<"Popped element:"<<x<<endl;
			}
			else
			{
				cout<<"Underflow\n";
			}
		}
};
int main()
{
	TwoStacks ts;
	ts.push1(5);
	ts.push2(10);
	ts.push1(30);
	ts.push2(40);
	ts.pop2();
	ts.pop1();
}
