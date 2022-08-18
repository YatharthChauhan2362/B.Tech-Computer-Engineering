#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		string str;
		cin >> str;
		string check = str;
		sort(check.begin(), check.end());
		int swap = 0;
		for (int i = 0; i < a; i++)
		{
			if (str[i] != check[i])
			{
				swap++;
			}
		}
		if (swap <= 2)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}