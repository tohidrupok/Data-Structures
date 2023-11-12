#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
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
    node *CreateNewNode(int id)
    {
        node *NewNode = new node;
        NewNode->id = id;
        NewNode->Left = NULL;
        NewNode->Right = NULL;
        NewNode->parent = NULL;
        return NewNode;
    }
    void build_binary_tree()
    {
        node *allnode[6];
        for(int i=0; i<6; i++)
            allnode[i]=CreateNewNode(i);

        allnode[0]->Left=allnode[1];
        allnode[0]->Right=allnode[2];

        allnode[1]->Left=allnode[5];
        allnode[1]->parent=allnode[0];


        allnode[2]->Left=allnode[3];
        allnode[2]->Right=allnode[4];
        allnode[2]->parent=allnode[0];

        allnode[5]->parent=allnode[1];

        allnode[3]->parent=allnode[2];
        allnode[4]->parent=allnode[2];

        root=allnode[0];

    }
    void BFS()
    {
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
};
int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    //bt.DFS(bt.root);
    //bt.INorder(bt.root);
    //bt.PREorder(bt.root);
    bt.POSTorder(bt.root);
    return 0;
}

