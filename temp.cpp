#define ONLINE_JUDGE
#include<bits/stdc++.h>
using namespace std;
 
void imp(){
    #ifdef ONLINE_JUDGE
        if (freopen("input.txt", "r", stdin) == NULL) {
            perror("Error redirecting stdin");
            exit(1);
        }
        if (freopen("output.txt", "w", stdout) == NULL) {
            perror("Error redirecting stdout");
            exit(1);
        }
    #endif
}

int main () {
	imp();

	int n;
	cin >> n;
	vector<int> a(n), b(n), ans;


	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
		cin >> b[i];


	for (int i = 0; i < n; i++)
		ans.push_back (a[i] + b[i]);


	for (vector<int>::iterator itr = ans.begin ();  itr != ans.end (); itr++)
		cout << *itr << " ";

	cout << endl << ans.size ();

	return 0;
}