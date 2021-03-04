#include<bits/stdc++.h>
#define q_size 20
using namespace std;
class Queue{
private:
    int rear;
    int front;
    int q[20];
public:
    void push(int item);
    int pop();
    void display();
    Queue(){
    front=0;
    rear=-1;
}
};
void Queue:: push(int item)
{

    if(rear==q_size-1)
    {
        cout<<"Queue overflow\n";
        return;
    }
    rear=rear+1;
    q[rear]=item;

}
int Queue :: pop(){
 if(front>rear)
 {
     cout<<"Queue Underflow\n";
 }
 return q[front++];

}
void Queue::display()
{
    int i;
    if(front>rear)
    {
        cout<<"Empty queue\n";
    }
    cout<<"Contents of Queue:\n";
    for(i=front;i<=rear;i++)
    {

        cout<<q[i]<<" ";
    }
}
int main()
{
    Queue S1;
    int ch;
   char p;
   do{
    cout<<"1.Push\n";
    cout<<"2.Pop\n";
    cout<<"3.Display\n";
    cout<<"\n Enter choice:";
    cin>>ch;
    if(ch==1)
    {
        int ele;
        cout<<"Enter element to be pushed:";
        cin>>ele;
        S1.push(ele);
    }
    else if(ch==2)
    {

        int ele=S1.pop();
        cout<<"Element popped:"<<ele<<endl;
    }
    else
    {

        S1.display();
    }
    cout<<"\nDo you want to continue?";
    cin>>p;

   }while(p=='y');

}



