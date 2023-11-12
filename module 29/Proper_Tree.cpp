#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
    int value;
    node *Left;
    node *Right;
    node *parent;
};
class BinaryTree
{
public:
    node *root;

    BinaryTree()
    {
        root=NULL;
    }
    node *CreateNewNode(int id,int value)
    {
        node *NewNode = new node;
        NewNode->id = id;
        NewNode->value=value;
        NewNode->Left = NULL;
        NewNode->Right = NULL;
        NewNode->parent = NULL;
        return NewNode;
    }
    void Insertion(int id,int value)
    {
        node *Newnode=CreateNewNode(id,value);
        if(root==NULL)
        {
            root=Newnode;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node *a =q.front();
            q.pop();
            if(a->Left!=NULL)
            {
                q.push(a->Left);
            }
            else{
                a->Left=Newnode;
                Newnode->parent=a;
                return;
            }
            if(a->Right!=NULL)
            {
                q.push(a->Right);
            }
            else{
                a->Right=Newnode;
                Newnode->parent=a;
                return;
            }

        }
    }
    void BFS()
    {
        if(root==NULL)
            return;
        queue<node*>q;
        q.push(root);
        while (!q.empty())
        {
            node *a=q.front();
            q.pop();
            int p=-1,l=-1,r=-1;
            if(a->Left !=NULL)
            {
                l=a->Left->id;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r= a->Right->id;
                q.push(a->Right);
            }
            if(a->parent != NULL)
            {
                p=a->parent->id;
            }
            cout<<"Node id = "<<a->id<<" Left child = "<<l<<" Right Child = "<<r<<" Parent id = "<<p<<"\n";
        }

    }
    void DFS(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        DFS(a->Left);
        DFS(a->Right);
    }
    void INorder(node *a)
    {
        if(a==NULL)
        {
            return;
        }

        INorder(a->Left);
        cout<<a->id<<" ";
        INorder(a->Right);
    }
    void PREorder(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        PREorder(a->Left);
        PREorder(a->Right);
    }
    void POSTorder(node *a)
    {
        if(a==NULL)
        {
            return;
        }

        POSTorder(a->Left);
        POSTorder(a->Right);
        cout<<a->id<<" ";
    }
    void Search(node *a,int value)
    {
        if(a==NULL)
        {
            return;
        }
        if(a->value==value)
        {
            cout<<a->id<<" ";
        }
        Search(a->Left,value);
        Search(a->Right, value);
    }
    int heigth( node *a)
    {
        if(a==NULL)
            return 0;
        else
        {
            int Left_hight = heigth(a->Left);
            int Right_hight = heigth(a->Right);

            return 1+max(Left_hight,Right_hight);
        }

    }
};
int main()
{
    BinaryTree bt;

    //bt.DFS(bt.root);
    //bt.INorder(bt.root);
    //bt.PREorder(bt.root);
    //bt.POSTorder(bt.root);
    bt.Insertion(0,5);
    bt.Insertion(1,10);
    bt.Insertion(2,10);
    bt.Insertion(3,9);
    bt.Insertion(4,8);
    bt.Insertion(5,5);
    bt.Insertion(6,7);
    bt.BFS();
    cout<<"\n";
    bt.Search(bt.root,5);
    cout<<"\n";
    bt.Search(bt.root,10);
    cout<<"\n";
    cout<<"The Height of the Tree :"<<bt.heigth(bt.root)<<"\n";
    return 0;
}
