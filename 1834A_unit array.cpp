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
        int pos=0,neg=0;
        for(int j=0;j<n;j++){
            if(arr[j]==1){
                pos++;
            }
            else neg++;
        }
        int ans=0;
        while(pos<neg || neg%2==1 ){
            ans++;
            pos++;
            neg--;
        }
        cout<<ans<<endl;
    }
}
