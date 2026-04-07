#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int t=arr[i].size();
        int cnt=0;
        for(int j=0;j<t;j++){
            cnt++;
        }
        if(cnt<=10) cout<<arr[i]<<endl;
        else {
            cout<<arr[i][0]<<cnt-2<<arr[i][t-1]<<endl;
        }
    }
}
