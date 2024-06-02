#define ONLINE_JUDGE
#include <bits/stdc++.h>
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

class Practice {
	int n, m;
	vector<vector <int>> arr1, arr2;

	void display (vector<vector <int>>);
	void init ();

	public : 
		Practice (int n, int m) {
			this -> n = n;
			this -> m = m;

			this -> arr1 = vector<vector<int>> (n, vector<int>(m));
			this -> arr2 = vector<vector<int>> (n, vector<int>(m));

			init ();
		}
		void displayAllMembers ();
		void sum ();
		void multi ();
		void sub ();
};

void Practice :: init () {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr1 [i][j] = rand () % 10;
			arr2 [i][j] = rand () % 10;
		}
	}
}

void Practice :: display (vector <vector <int>> arr) {
	for (vector <int> rowElem : arr) {
		for (int colElem : rowElem) {
			cout << colElem << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Practice :: sum () {
	vector <vector <int>> ans(n, vector<int>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ans[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	display (ans);
}

void Practice :: displayAllMembers () {
	cout << n << " " << m << endl;

	display (arr1);
	cout << endl;
	display (arr2);
	cout << endl;
}

int main () {
	imp ();

	Practice p(5, 5);

	p.displayAllMembers ();
	p.sum ();

	return 0;
}