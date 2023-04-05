#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    vector<int>vec;
    
    cin>>n;
    
    for (int i =0; i<n; i++){
        int j;
        cin>>j;
        vec.push_back(j);
    }
    
    sort(vec.begin(),vec.end());
    
    for (int i=0; i<vec.size(); i++){
        cout<<vec[i]<< " ";
    }
    return 0;
}
