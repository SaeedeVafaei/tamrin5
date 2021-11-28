#include <iostream>
using namespace std;

int main()
{
	int i, j, n, m;
	cout << "Enter n: " << endl;
	cin >> n;
	cout << "Enter m: " << endl;
	cin >> m;
	cout << endl;
	for (i = 1; i <= n; i++)
	{

		for (j = 1; j <= m; j++)
			cout << i*j << '\t';
		cout << '\n';
	}
	cout << '\n\n\n' << "exit";
	return 0;
}