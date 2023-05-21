
#include <bits/stdc++.h>
using namespace std;

void imp(){

  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
}

int countIf (int elem) {
    return elem % 2 == 0;
}


int main () {
    imp ();
    
    string str; 
	cin >> str;
	
	vector<int> store;
    int count = 0;

    for (int i = 0; i < str.length (); i++) {
        count += str [i] == '(' ? +1 : -1;
    }

    if (count > 0)
        cout << (str.length () - count) / 2 << endl;

    else if (count < 0)
        cout << (str.length () + count) / 2 << endl;
    
    else 
        cout << str.length () / 2 << endl;

    return 0;
} 