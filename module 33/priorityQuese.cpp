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
            swap(nodes[idx],nodes[(idx-1)/2]);
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
        for(int i=0; i<nodes.size(); i++)
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
    void build_from_array(vector<int>&a)
    {
        nodes = a;
        int n= nodes.size();
        int last_non_leaf = n/2-1;
        for (int i=last_non_leaf; i >=0; i--)
        {
            down_heapify(i);
        }

    }
    int size()
    {
        return nodes.size();
    }

};
vector<int> heap_sort(vector<int>a)
{
    Max_heap h;
    h.build_from_array(a);
    vector<int>ans;
    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(h.ExtractMax());
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
class PrioityQueue
{
public:
    Max_heap h;
    PrioityQueue()
    {

    }
    void push(int x)
    {
        h.insert(x);
    }
    void pop()
    {
        h.Delete(0);
    }
    int top()
    {
        return h.getMax();
    }
    int size()
    {
        return h.size();
    }
};
int main()
{
    PrioityQueue pq;
    pq.push(5);
    pq.push(7);
    pq.push(10);
    pq.push(1);
    pq.push(2);

    while (pq.size()!= 0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }


    return 0;

}

