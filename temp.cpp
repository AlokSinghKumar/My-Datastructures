
#include <bits/stdc++.h>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
}

class Search {
    private : 
        vector <int> arr;
        int n, val;

    public :
        void input () {
            cin >> n >> val;

            int tmp;
            while (n--) {
                cin >> tmp;
                arr.push_back (tmp);
            }
        }

        int linearSearch () {
            cout << "I was gere";
            for (int i = 0; i < arr.size (); i++) {
                cout << arr[i] << "  ";
                if (arr[i] == val) {
                    return i;
                }
            }

            return -1;
        }

        int binarySearch () {
            int beg = 0, end = arr[arr.size () - 1];
            int mid;


            while (!(beg > end)) {
                mid = beg + (end - beg) / 2;

                if (arr[mid] == val)
                    return mid;
                else if (arr[mid] > val) {
                    end =  mid - 1;
                }
                else
                    beg  = mid + 1;
            }

            return -1;
        }

};

int main () {
    imp ();
    
    Search s;

    s.input ();
    int ans = s.binarySearch ();
    cout << ans << endl;

    return 0;
}