// Sample code to read input and write output:

/*
#include <iostream>

using namespace std;

int main() 
{
	char name[20];
	cin >> name;                     // Read input from STDIN
	cout << "Hello " << name;        // Write output to STDOUT
	return 0;
}
*/

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++;
            if (j < i)
                cout << '*';
        }
        cout << endl;
    }

    num--;
    for (int i = n; i >= 1; i--)
    {
        int k = i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << num - k--;
            if (j < i)
                cout << '*';
        }
        num -= i;
        cout << endl;
    }

    return 0;
}