#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int sum=0;
        for(int j=0;j<10;j++){
            string arr;
            // for(int k=0;k<10;k++){
            //     cin>>arr[k];
            // }
            cin>>arr;
            for(int k=0;k<arr.size();k++){
                if(arr[k]=='X'){
                    sum+=min({j+1,10-k,k+1,10-j});
                    
                    continue;
                }
            }
        }
        
        cout<<sum<<endl;
    }
}
