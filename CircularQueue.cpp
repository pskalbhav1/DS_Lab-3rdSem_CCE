#include<bits/stdc++.h>
using namespace std;
class CQ
{
	int a[20],front,rear,maxsize,counter;
	public:
		CQ()
		{
			front=-1;
			rear=-1;
			maxsize=4;
			counter=0;
		}
		void enqueue(int x)
		{
			if(counter==maxsize-1)
			{
				cout<<"Circular Queue is full\n";
			}
			else
			{
				rear=(rear+1)%maxsize;
				a[rear]=x;
				counter++;
			}
		}
		void dequeue()
		{
			if(counter==0)
			{
				cout<<"Circular Queue is empty\n";
			}
			else
			{
				front=(front+1)%maxsize;
				cout<<"Element deleted\n";
				counter--;
			}
		}
		void display()
		{
			if(counter==0)
			{
				cout<<"Circular Queue is empty\n";
			}
			else
			{
				int i;
				for(i=(front+1)%maxsize;i<(rear+1)%maxsize;i=(i+1)%maxsize)
				{
					cout<<a[i]<<" ";
				}
			}
		}
};
int main()
{
	CQ q;
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(2);
	q.enqueue(9);
	q.enqueue(4);
	q.enqueue(7);
	q.display();
	q.dequeue();
	q.display();
	
	
}
