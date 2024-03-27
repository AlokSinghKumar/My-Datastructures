#include<bits/stdc++.h>
using namespace std;
 
void imp(){

    #ifdef ONLINE_JUDGE
      freopen ("input.txt", "r", stdin);
      freopen ("output.txt", "w", stdout);
    #endif
}

class Solution{
  public:
    string getSmallest (string arr[], int n) {
        string ans = "";
        int len = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            if (len > arr[i].length ()) {
                len = arr[i].length ();
                ans = arr[i];
            }
        }
        
        return ans;
    }
    
    string getLongestPrefix (string arr[], int n) {
        string smallest = getSmallest (arr, n);
        string prefix = "";

        for (int i = 0; i < smallest.length (); i++) {
            for (int j = 0; j < n; j++) {
                if (smallest [i] != arr[j][i]) {
                    return prefix;
                }
            }
            
            prefix += smallest[i];
        }
        
        return prefix;
    }

    string longestCommonPrefix (string arr[], int n)
    {
        string prefix = getLongestPrefix (arr, n);
        
        if (!prefix.length ())
            return "-1";
            
        return prefix;
    }
};


int main()
{
    imp();

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}
