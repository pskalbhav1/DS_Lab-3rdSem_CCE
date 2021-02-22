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
   char p[200],p2[200];
   cout<<"Enter string to be checked if it is a palindrome:";
   cin>>p;
   int i=0,l=0,m=0;
   for(i=0;p[i]!='\0';i++)
   {

       S1.push(p[i]);
       l++;
   }
  for(i=0;p[i]!='\0';i++)
   {

       p2[i]=S1.pop();
   }
   for(i=0;i<l/2;i++)
   {
       if(p[i]==p2[i])
       {
          continue;

       }
       else{m=1;
       break;}
   }
   if(m==0)
   {
       cout<<"The given String is a palindrome\n";
   }
   else{
    cout<<"Given String is not a palindrome\n";
   }
}
