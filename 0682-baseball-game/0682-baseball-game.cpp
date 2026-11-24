class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n=operations.size();
        int i=0;
        while(i<n){
            if(operations[i]!="D" && operations[i]!="C" && operations[i]!="+")
            {
                int m=stoi(operations[i]);
                st.push(m);
            }
            else if(operations[i]=="C")
            {
                st.pop();
            }
            else if(operations[i]=="D")
            {
                int a=2*st.top();
                st.push(a);
            }
            else
            {
                int b=st.top();
                st.pop();
                int c=st.top();
                st.pop();
                st.push(c);
                st.push(b);
                st.push(b+c);
            }    
            i++;
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};