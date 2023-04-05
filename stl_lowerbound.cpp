#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, j;
    cin>>n;
    vector<int>v;
    
    for(int i=0; i<n; i++){
        
        cin>>j;
        v.push_back(j);
    }
    
    int q;
    cin>>q;
    
    while(q>0){
        
        int qu;
        cin>>qu;
        
        auto it = lower_bound(v.begin(), v.end(), qu);
        
        if(*it == qu){
            cout<<"Yes "<<it-v.begin()+1<<endl;
        }
        else {
            cout<<"No "<<it-v.begin()+1<<endl;
        }
        
        q--;
    }
    
    

    return 0;
}
