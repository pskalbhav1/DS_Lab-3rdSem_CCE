#include<bits/stdc++.h>
using namespace std;
class BST
{
	struct Node
	{
		Node* left;
		Node* right;
		int val;
	};
	public:
		BST()
		{
			Node *root=NULL;
			int x;
			do
			{
				
				cout<<"Enter value:";
				cin>>x;
				if(x==-1)
				{
					break;
				}
				root=create_BST(root, x);
				
				
			}while(x!=-1);
			cout<<"Displaying the tree in inorder:";
			display_inorder(root);
			cout<<"\nDisplaying the tree in prerder:";
			display_preorder(root);
			cout<<"\nDisplaying the tree in postorder:";
			display_postorder(root);
			cout<<"\nEnter element to search:";
			cin>>x;
			iterative_search(root,x);
			cout<<"Enter element to search:";
			cin>>x;
		    recursive_search(root,x);
		    cout<<"Enter Element to be deleted:";
		    cin>>x;
		    deleteNode(root,x);
		    cout<<"\nDisplaying the tree in inorder:";
			display_inorder(root);
			
			
		}
		Node* create_BST(Node *root,int x)
		{
			if(root==NULL)
			{
				Node *temp=new Node();
				temp->val=x;
				temp->left=NULL;
				temp->right=NULL;
				root=temp;
			}
			else
			{
				Node *temp=new Node();
				temp->val=x;
				temp->left=NULL;
				temp->right=NULL;
				Node *ptr=root;
				Node *prev=NULL;
				while(ptr!=NULL)
				{
				   prev=ptr;	
				   if(ptr->val>x)
				   {
					   ptr=ptr->left;
				   }
			     	else if(ptr->val<x)
				    {
				    	ptr=ptr->right;
				    }
			     	else
			     	{
				     	cout<<"Insertions not possible\n";
				     	break;
			     	}
			     }
				if(prev->val>x)
				{
					prev->left=temp;
				}
				else if(prev->val<x)
				{
					prev->right=temp;
				}
			}
			return root;
		}
		void display_inorder(Node *root)
		{
			
			Node *p=root;
			if(p)
			{
				display_inorder(p->left);
				cout<<p->val<<" ";
				display_inorder(p->right);
			}
		}
	    void display_preorder(Node *root)
		{
			
			Node *p=root;
			if(p)
			{
				cout<<p->val<<" ";
				display_preorder(p->left);
				display_preorder(p->right);
			}
		}
		void display_postorder(Node *root)
		{
			Node *p=root;
			if(p)
			{
				display_postorder(p->left);
				display_postorder(p->right);
				cout<<p->val<<" ";
			}
		}
		void iterative_search(Node *root, int x)
		{
			Node *p=root;
			if(root==NULL)
			{
				cout<<"Element not found.\n";
			}
			else
			{
				int m=0;
				while(p!=NULL)
				{
					if(p->val==x)
					{
						m=1;
						cout<<"Element found.\n";
						break;
					}
					if(p->val>x)
					{
						p=p->left;
					}
					else if(p->val<x)
					{
						p=p->right;
					}
				
					
				}
				if(m==0)
				{
					cout<<"Element not found.\n";
				}
			}
		}
	    Node* recursive_search(Node *root, int x)
	    {
	    	Node *p=root;
	    	int m=0;
	    	if(p==NULL)
	    	{
	    		return NULL;
			}
	    	   if(p->val==x)
			   {
			   	  m=1;
			   	  cout<<"Element found.\n";
			   	  return root;
			   	 
			   }
				else if(p->val>x)
				{
					return recursive_search(p->left,x);
				}
				else if(p->val<x)
				{
					return recursive_search(p->right,x);
				}	
				   	
			if(m==0)
			{
				cout<<"Element not found.\n";
				
			}
		}
		Node* findSuccessor(Node* p)
		{
			if(!p)
			{
				cout<<"Empty";
			}
			while(p->left!=NULL)
			{
				p=p->left;
			}
			return p;
			
		}
		void findParent(Node* &p,int x, Node* &parent)
		{
			while(p && p->val!=x)
			{
				parent=p;
				if(p->val>x)
				{
					p=p->left;
				}
				else if(p->val<x)
				{
					p=p->right;
				}
			}
		
		}
		void deleteNode(Node *root, int x)
		{
			Node *parent=NULL;
			Node *p=root;
			findParent(p,x,parent);
			if(p==NULL)
			{
				cout<<"Element to be deleted not found.\n";
			}
			else
			{//No children
			if(p->right==NULL && p->left==NULL)
			{
				if(p!=root)
				{
					if(parent->left==p)
                    {
                    	parent->left=NULL;
				    }
					else if(parent->right==p)					
					{
						parent->right=NULL;
					}
				}
				else
				{
					p=NULL;
				}
				delete(p);
			}
			
			//2 children
			else if(p->right && p->left)
			{
				
				Node *successor=findSuccessor(p);
				int l=successor->val;
				deleteNode(root,successor->val);
				p->val=l;
			}
			
			//1 child
			else
			{
				Node *child=p->left?p->left:p->right;
				if(p!=root)
				{
					if(parent->left==p)
                    {
                    	parent->left=child;
				    }
					else if(parent->right==p)					
					{
						parent->right=child;
					}
				}
				else
				{
					p=child;
				}
				delete(p);
			}
		}
			
		}
	
};
int main()
{
	BST();
}
