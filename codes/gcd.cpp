#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

main() {
	cout << gcd(gcd(10,2),4);
}
