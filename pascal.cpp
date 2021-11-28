#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	for (int row = 0; row<n; row++)
	{
		int columnm = 1;
		for (int i = 0; i<n - row; i++)
		{
			cout << " ";
		}

		for (int j = 0; j <= row; j++)
		{
			cout << '\t' << columnm;
			columnm = columnm * (row - j) / (j + 1);
		}
		cout << endl;
	}
	return 0;
}