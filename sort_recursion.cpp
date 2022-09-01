#include <bits/stdc++.h>

using namespace std;

void in(vector<int> &v, int t){
    if(v.size()==0 || v[v.size()-1]<=t){
        v.push_back(t);
        return;
    }
    int a = v[v.size()-1];
    v.pop_back();
    in(v,t);
    v.push_back(a);
}

void s(vector<int> &v){
    if(v.size()==1) return;
    int t = v[v.size()-1];
    v.pop_back();
    s(v);
    in(v,t);
}


int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    s(v);
    for(auto i:v) cout<<i<<" ";

    return 0;
}
