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
        vector<int>ans;
        ans.push_back(arr[0]);
        for(int j=1;j<n;j++){
            if(arr[j]<arr[j-1]){
                ans.push_back(arr[j]);
            }
            ans.push_back(arr[j]);
        }
        cout<<ans.size()<<endl;
        for(int j=0;j<ans.size();j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
        
    }
       
}
