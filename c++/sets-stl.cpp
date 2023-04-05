#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
    int q;
    set<int>s;
    cin>>q;
    while(q>0){
        int y, x;
        cin>>y>>x;
        
        if(y==1){
            s.insert(x);
        }
        else if (y==2) {
            s.erase(x);
        }
        else if (y==3) {
            set<int>::iterator itr=s.find(x);
            if(itr==s.end()){
                cout<<"No"<<endl;
            }
            else {
            cout<<"Yes"<<endl;
            }
        }
        
        
        
        q--;
    }
    
     
    return 0;
}
