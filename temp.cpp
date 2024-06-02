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

string isSubset (int a[], int b[], int n, int m) {
	string ans = "No";
	if (n < m)
		return ans;

	sort (a, a + n);
	sort (b, b + m);

	for (int i = 0; i < m; i++) {
		if (a[i] != b[i])
			return ans;
	}

	ans = "Yes";
	return ans;
}

int main () {
	imp();

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int a1[n], a2[m];

		for (int i = 0; i < n; i++) {
			cin >> a1[i];
		}

		for (int i = 0; i < m; i++)
			cin >> a2[i];

		cout << isSubset (a1, a2, n, m);
	}

	return 0;
}