#include <bits/stdc++.h>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("../input.txt","r",stdin);
      freopen("../output.txt","w",stdout);
  #endif
}

int factorial (int n) {
    if (n <= 1)
        return 1;

    return n * factorial (n - 1);
}

int main () {
    imp ();

    int n;
    cin >> n;

    int ans = factorial (n);

    cout << ans;

    return 0;
}