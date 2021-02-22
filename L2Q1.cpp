#include<bits/stdc++.h>
#define STACK_SIZE 10

using namespace std;

class Stack{
 private:
     int top;
     int s[10];
 public:
    Stack(){
    top=-1;
    }
    int pop();
    void push(int item);
    void display();

};
void Stack:: push(int item)
{

    if(top== STACK_SIZE-1)
    {

        cout<<"Stack is Full";
        return;

    }

        top=top+1;
        s[top]=item;

}
int Stack::pop(){
  if(top==-1)
  {

      cout<<"Stack is empty";
      return -1;
  }
  else{
    int ele=s[top--];
    return ele;
  }
 }
 void Stack:: display()
 {

     int i;
     if(top==-1)
     {
            cout<<"Empty Stack \n";
            return;
      }
       cout<<"Contents of stack\n";
    for(i=0;i<=top;i++)
    cout<<s[i];
}

int main()
{
   Stack S1;
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
