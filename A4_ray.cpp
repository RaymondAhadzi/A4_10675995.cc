#include <iostream>

using namespace std;
int gcd(int m, int n);
int main()
{
	int m, n, result;
	cout << "Enter two positive integers: ";
	cin >> m >> n;

	result=gcd(m, n);
    cout << "GCD of " << m << " and " << n << " is: " << result ;

	return 0;
}
 int gcd(int m, int n)
{
	if (n != 0)
		return gcd(n, m % n);
	else
		return m;
}


