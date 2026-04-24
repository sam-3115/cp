#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else{
            // cout<<"2"<<endl;
            // cout<<1<<x-1<<endl;
            for(int j=1;j<x;j++){
                if(j%x !=0 && x-j % x!=0){
                    cout<<"2"<<endl;
                    cout<<j<<" "<<x-j<<endl;
                    break;
                }
            }
        }
}
}
