#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr, arr + n);
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[0]) cnt++;
        }
        if(cnt==n){
            cout<<"-1"<<endl;
            continue;
        }
        // else{
        int b[cnt],c[n-cnt];
        cout<<cnt<<" "<<n-cnt<<endl;
        for(int j=0;j<cnt;j++){
            b[j]=arr[j];
        }
        for(int j=0;j<n-cnt;j++){
            c[j]=arr[j+cnt];
        }
        
        for(int j=0;j<cnt;j++){
            cout<<b[j]<<" ";
        }
        cout<<endl;
        for(int j=0;j<n-cnt;j++){
            cout<<c[j]<<" ";
        }
        
        cout<<endl;
    }
       
}
