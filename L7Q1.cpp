
#include <iostream>
#include <cmath>
using namespace std;
class treenode
{

    treenode* rchild;
    treenode* lchild;
    int data;
    public :
    treenode *createBT();
    treenode *insert(treenode*, int ele);
    void preorder(treenode *p);
    void inorder(treenode *p);
    void postorder(treenode *p);
    int LeafCount(treenode *p);
};
treenode *root = NULL;

void treenode :: inorder(treenode* p)
{
    if(p)
    {
        inorder(p->lchild);
        cout << p->data << "\t";
        inorder(p->rchild);
    }
}
void treenode :: postorder(treenode *p)
{
    if(p)
    {
        inorder(p->lchild);

        inorder(p->rchild);
        cout << p->data << "\t";
    }

}
void treenode :: preorder(treenode *p)
{
    if(p)
    {
         cout << p->data << "\t";
        inorder(p->lchild);

        inorder(p->rchild);

    }
}

treenode* treenode :: createBT()
{
    // recursive function
    treenode* t;
    int x;

    cin >> x;
    if(x == -1)
    {
        return NULL;
    }// when no more depth, both l and r child are returnded as NULL
    else
    {
        t = new treenode();
        t->data = x;
        cout << "Enter the lchild of " << x << ":" ;
        t->lchild = createBT();
        cout << "Enter the rchild of " << x<<":" ;
        t->rchild = createBT();
        return t;
    }

}

int treenode :: LeafCount(treenode* p)
{
    if(p == NULL)
        return 0;
    if(p->lchild == NULL && p->rchild == NULL)
        return 1;
    else
        return LeafCount(p->lchild)+
            LeafCount(p->rchild);
}
int main()
{
    treenode *t;
    cout<<"Enter root value:";
    root = t->createBT();

    cout << "Inorder" << endl;
    t->inorder(root);
    cout << endl;
    cout << "Preorder" << endl;
    t->preorder(root);
    cout << endl;
    cout << "Postorder" << endl;
    t->postorder(root);
    cout << endl;
    int s = t->LeafCount(root);
    cout << "Leaf count " << s << endl;
    return 0;
}
