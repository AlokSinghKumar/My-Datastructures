
#include <bits/stdc++.h>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
}

int main () {
    imp ();

    vector <long long> arr;
    int n, k;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        long long tmp;
        cin >> tmp;

        arr.push_back (tmp);
    }

    vector<long long>::iterator start = arr.begin (), end;
    int cycle = ceil ((float)n/(float)k);

    if (k > 1) {
        for (int i = 1 ; i <= cycle; i++ ) {
            end = arr.begin () + (i * k) > arr.end () ? arr.end () : arr.begin () + (i * k);

            reverse (start, end);

            cout << endl;
            start = end;
        }
    }


    for (auto itr : arr) {
        cout << itr << " ";
    }

    return 0;
} 