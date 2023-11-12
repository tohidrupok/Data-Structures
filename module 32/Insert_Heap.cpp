#include<bits/stdc++.h>
using namespace std;
class Max_heap
{
public:
    vector <int> nodes;
    Max_heap()
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
     int ExtractMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!";
            return -1;
        } 
        int ret = nodes[0];
        Delete(0);
        return ret;
    }
    
    
};
int main()
{
    Max_heap nodes;
    nodes.insert(4);
    nodes.insert(7);
    nodes.insert(9);
    nodes.insert(1);
    nodes.insert(10);
    nodes.insert(20);
    nodes.insert(30);
    nodes.Printf();
    
    cout<<"Max element = "<<nodes.getMax()<<"\n";
    cout<<"Max element = "<<nodes.ExtractMax()<<"\n";
    cout<<"Max element = "<<nodes.ExtractMax()<<"\n";
    cout<<"Max element = "<<nodes.ExtractMax()<<"\n";
    cout<<"Max element = "<<nodes.ExtractMax()<<"\n";


}
