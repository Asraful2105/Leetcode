class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>a;
        stack<char>b;
        int l1=s.size();
        int l2=t.size();
        int i=0;
        while(i<l1)
        {
            if(s[i]!='#')
            {
                a.push(s[i]);
            }
            else 
            {  
                if(!a.empty()) {
                    a.pop();
                }
            }
        i++;
        }
        int j=0;
        while(j<l2)
        {
            if(t[j]!='#')
            {
                b.push(t[j]);
            }
            else
            { 
                if(!b.empty())
                {
                    b.pop();
                }
            }
        j++;
        }
        if(a.size()!=b.size()) return false;
        while(!a.empty() && !b.empty()){
            if(a.top()!=b.top()) return false;
            a.pop();
            b.pop();
        }
        return true;    
    }
};