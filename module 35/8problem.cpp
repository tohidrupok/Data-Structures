#include<bits/stdc++.h>
using namespace std;
class MaxHeap
{
public:
    vector <int> nodes;
    MaxHeap()
    {

    }
    void up_heapify(int idx)
    {
        while(idx>0 &&nodes[idx] > nodes[idx-1]/2)
        {
            swap(nodes[idx] ,nodes[(idx-1)/2]);
            idx=(idx-1)/2;
        }

    }
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }
    void Printf()
    {
        for(int i=0;i<nodes.size();i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }
    //0(logn)
    void down_heapify(int idx)
    {
        while (1)
        {
            int largest = idx;
            int l = 2*idx+1;
            int r = 2*idx+2;
            if(l < nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if(r < nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if(largest== idx)
            break;
            swap(nodes[largest],nodes[idx]);
            idx = largest;
        }

    }
    //0(logn)
    void Delete(int idx)
    {
        if(idx>= nodes.size())
        return;
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!";
            return -1;
        }
        return nodes[0];
    }



};
class MinHeap{
public:
    MaxHeap mx;
    void insert(int x)
    {
	  mx.insert(-x);
    }
    void Delete(int idx)
    {
        mx.Delete(idx);
    }
    int getMin()
    {
        if(mx.nodes.size()==0)
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        return -mx.getMax();
    }
};

int main()
{
    MinHeap mn;

    mn.insert(10);
    mn.insert(4);
    mn.insert(1);
    mn.insert(7);


    cout<<mn.getMin()<<"\n";
    mn.Delete(0);
    mn.Delete(0);
    cout<<mn.getMin()<<"\n";


    return 0;


}
