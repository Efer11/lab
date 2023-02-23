#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s[128];
int n, i;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s, s + n);
	cout << s[n / 2] << endl;

}
