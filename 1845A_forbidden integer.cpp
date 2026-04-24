#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, x;
        cin >> n >> k >> x;
        vector < int > arr;
        string ans = "YES";
        if (x != 1) {
            arr = vector < int > (n, 1);
        }
        else {
            if (k == 1 || (k == 2 && n % 2 == 1)) {
                ans = "NO";
            }
            else {
                if (n % 2 == 0) {
                    arr = vector < int > (n / 2, 2);
                }

                else {
                    arr.push_back(3);
                    for (int j = 0; j < (n - 3) / 2; j++) {
                        arr.push_back(2);
                    }

                }
            }
        }
    
    cout << ans << endl;
    if (ans == "YES") {
        cout << arr.size() << endl;
        for (int j = 0; j < arr.size(); j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

}
}
