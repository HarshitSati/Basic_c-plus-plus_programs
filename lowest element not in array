#include<bits/stdc++.h> //finding at coder c 170 code begininer 
using namespace std;
#define ll long long
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
 
    int x,n;
    cin>>x>>n;
    set<int> st;
    for(int i=-1;i<=101;i++)
    {
        st.insert(i);
    }
 
 
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        st.erase(temp);
    }
 
    auto it1=st.lower_bound(x);
    auto it2=it1;
    it2--;
    int ans=0;
    if(abs(*(it2)-x)<=abs(*it1)-x)
    {
        ans=*(it2);
    }
    else
    {
        ans=*(it1);
    }
 
    cout<<ans<<endl;
 
    return 0;
}
