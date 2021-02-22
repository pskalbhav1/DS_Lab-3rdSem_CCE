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
    for(i=top;i>=0;i--)
        if(s[i]>=65)
    {
        cout<<char(s[i]);
    }
    else
    cout<<s[i];
}

int main()
{
    Stack S1;
    cout<<"Enter number to be converted to different base:";
    int num,base,ele;
    cin>>num;
    cout<<"Enter base:";
    cin>>base;
    while(num!=0)
    {
        ele=num%base;

        if(ele>9)
        {

            S1.push(ele-10+'A');
        }
        else{
            S1.push(ele);
        }
        num=num/base;

    }
    cout<<"Answer:";
    S1.display();
}
