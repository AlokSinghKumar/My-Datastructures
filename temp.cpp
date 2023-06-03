
#include <bits/stdc++.h>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
}

void countN (int n) {
    if (n > 1)
        countN (n - 1);

    cout << n << " ";
}


int main () {
    imp ();

    int n;
    cin >> n;

    countN (n);

    return 0;
} 