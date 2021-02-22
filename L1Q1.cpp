#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    do{
    cout << "1. length of the string.\n";
    cout << "2. string concatenation.\n";
    cout << "3. string comparison.  \n";
    cout << "4. To insert a substring. \n";
    cout << "5. To delete a substring. \n";
    int input;
    cout<<"\nEnter choice:";
    cin >> input ;
    switch(input)
    {
    case 1:
        {
            char str[200];
            cout<<"Enter string:";
            cin>>str;
            int i=0,length=0;
            while(str[i]!='\0')
            {

                length++;
                i++;
            }
            cout<<"Length of given string:"<<length;
            cout<<"\n\nDo you want to continue?";
            cin>>ch;
            break;
        }
    case 2:
        {
            char str[200],str2[200];
            cout<<"Enter 1st String:";
            cin>>str;
            cout<<"Enter 2nd String:";
            cin>>str2;
            int length=0,i=0;
            while(str[i]!='\0')
            {

                length++;
                i++;
            }
            int j;
            for(j=0;str2[j]!='\0';j++)
            {

                str[length++]=str2[j];
            }
            str[length]='\0';
            cout<<"Concatenated String:"<<str;
            cout<<"\n\nDo you want to continue?";
            cin>>ch;
            break;


        }
    case 3:
        {
            char str[200],str2[200];
            int pos,length=0,l2=0,i,j;
            cout<<"Enter 1st String:";
            cin>>str;
            cout<<"Enter 2nd String:";
            cin>>str2;
            int c;
            i=0;
            while(str2[i]!='\0' || str[i] != '\0')
            {
            if (str2[i] == str[i])
            {
                c = 0 ;
            }
            else if (str2[i] < str[i])
            {
                c = 1 ;

                break;
            }
            else if (str2[i] > str[i])
            {
                c = -1 ;

                break;
            }
            i++;
             }// end of the while loop
            if (c == 0)
            {
            if(str2[i] == '\0' && str[i] == '\0')
            {
                c = 0 ;
                cout << "Strings are equal." << endl;
            }
            else if (str2[i] != '\0')
            {
                c = 1 ;// s1 is greater
            }
            else if(str[i] != '\0')
            {
                c = 2;// s2 is greater
            }
        }
        if (c == 1)
        {
            cout << "String 1 is greater.\n";
        }
        else if (c == 2 || c == -1)
        {
            cout << "String 2 is greater.\n";
        }
        else if(c == 0)
        {
            cout << "The strings are equal in size.\n";
        }

            cout<<"\n\nDo you want to continue?";
            cin>>ch;
            break;
        }
    case 4:
        {
            char str[100],subs[100];
            cout<<"Enter 1st String:";
            cin>>str;
            cout << "Please enter the substring:" ;
            cin>>subs;
            int pos;
            cout << "Please enter the position where you want to insert the string.";
            cin >> pos;
            char temp[200];
            int i,j;
            for(i=0;i<pos;i++)
            {

                temp[i]=str[i];
            }
            temp[i]='\0';
            j=0;
            while(subs[j]!='\0')
            {
                temp[i]=subs[j];
                j++;
                i++;
            }
             temp[i]='\0';
            while(str[pos]!='\0')
            {

                temp[i]=str[pos];
                pos++;
                i++;
            }
             temp[i]='\0';
            cout<<"answer:"<<temp;
            cout<<"\n\nDo you want to continue?";
            cin>>ch;
            break;
        }
    case 5:
        {
            char str[100],subs[100];
            cout<<"Enter 1st String:";
            cin>>str;
            cout << "Please enter substring:";

        cin>>subs;
        int lenstr =0,i=0,j=0,flag=0,position=0;
        int lensub = 0; // length of the substring
         while(str[i]!='\0')
            {

                lenstr++;
                i++;
            }
            i=0;
            while(subs[i]!='\0')
            {

                lensub++;
                i++;
            }
        for(i = 0 ; i < lenstr ; i++)
        {
            if  (str[i] == subs[0])
            {
                for( j = 0 ; j < lensub ; j++)
                {
                    if(str[i+j] == subs[j])
                    {
                        continue ;
                    }
                    else{
                        break;
                    }
                }
                    if (j == lensub )
                    {
                        cout << "Index has been found." << endl;
                        position = i ;
                        flag = 1 ;
                        break;
                    }
            }
        }
        if (flag == 0 )
        {
            cout << "The substring could not be found." << endl;
            break;
        }
        for(int k1 = 0 ; k1 < lensub ; k1++   )
    {
        for(int k2 = position ; k2 < lenstr; k2++)
        {
            str[k2] = str[k2+1];
        }
    }
    cout << str  << endl;
            cout<<"\n\nDo you want to continue?";
            cin>>ch;
            break;
        }
    default:
        {
            cout<<"Wrong choice"<<endl;
            cout<<"\n\nDo you want to continue?";
            cin>>ch;
        }
    }
    }while(ch=='y');
}
