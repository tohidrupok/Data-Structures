class Solution{
public:
    bool isValid(string s)
    {
        int n= s.size();
        bool found= true;
        vector<char> v;
        for(int i=0;i<n;i++)
        {
            if((int)v.size()==0){
                v.push_back(s[i]);
            }
            else{
                char ch=v.back();
                if(ch=='('&& s[i]==')')
                {
                    v.pop_back();
                }
                else if(ch=='{'&& s[i]=='}')
                {
                    v.pop_back();
                }
                else if(ch=='['&& s[i]==']')
                {
                    v.pop_back();
                }
                else
                {
                   v.push_back(s[i]);
                }
            }
        }
        if(v.size()==0)
        found= true;
        else
        found = false;
        return found;
    }


}
