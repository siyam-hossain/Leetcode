class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        for(char ch1 : s)
        {
            if(ch1 == '#')
            {
                if(!st1.empty()) 
                    st1.pop() ;
            }
            else st1.push(ch1);
        }
        stack<char> st2;
        for(char ch2 : t)
        {
            if(ch2 == '#')
            {
                if(!st2.empty()) 
                    st2.pop() ; 
            }
            else st2.push(ch2);
        }

        return st1 == st2;
    }
};