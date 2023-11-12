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
    node *allnode[6];
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
    void print_tree_info()
    {
        for(int i=0; i<6; i++)
        {
            int p=-1;
            int l =-1;
            int r =-1;
            if(allnode[i]->parent!=NULL)
            {
                p=allnode[i]->parent->id;
            }
            if(allnode[i]->Left!=NULL)
            {
                l=allnode[i]->Left->id;
            }
            if(allnode[i]->Right!=NULL)
            {
                r=allnode[i]->Right->id;
            }

            cout<<"Node "<<i<<":Parent ="<<p<<" , Left chile = "<<l<<" ,Right child = "<<r<<"\n";

        }
    }
};
int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    bt.print_tree_info();
    return 0;
}

