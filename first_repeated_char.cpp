// https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1#
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}

string firstRepChar(string s)
{
    string ans;
    set<char> h;
    for(int i=0; i<s.length(); i++)
    {
        if(h.find(s[i]) == h.end()){
            h.insert(s[i]);
        }
        else {
            ans.push_back(s[i]);
            return ans;
        }
    }
    return to_string(-1);
}