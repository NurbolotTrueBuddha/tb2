#include <iostream>
using namespace std;

void oct_ot(int n, int s) {
	cout << (n % s) + 1;
}

int main()
{
	int n, s;
	cin >> n;
	cin >> s;
	oct_ot(n, s);
}