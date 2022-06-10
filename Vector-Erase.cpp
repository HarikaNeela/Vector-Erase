#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n,r,count=0,start,stop;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    cin>>r;
    for(int j;j<n;j++)
    {
        if(j==r)
        {
            int l=r-1;
            v.erase(v.begin()+l);
        }
    }
    cin>>start>>stop;
    
    v.erase(v.begin()+(start-1),v.begin()+(stop-1));
    for(int p:v)
    {
        count++;
    }
    cout<<count<<"\n";
    
    
    for(int x:v)
    {
        
        cout<<x<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
