// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
int main() {
    int k;
    cin>>k;
    
    for(int i=0;i<k;i++){
        int n,last;
        cin>>n>>last;
        int arr[n];
        for(int x=0;x<n;x++){
            cin>>arr[x];
        }
        map<int,int>mp;
        
        for(int y=0;y<n;y++){
            mp[arr[y]]++;
        }
        int cnt=0;
        int ans=INT_MIN;
        for(int y=1;y<=last;y++){
            cnt++;
            ans=max(cnt,ans);
            if(mp.find(y)!=mp.end()) cnt=0;
        }
        for(int y=last-1;y>=0;y--){
            cnt++;
            ans=max(cnt,ans);
            if(mp.find(y)!=mp.end()) cnt=0;
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}