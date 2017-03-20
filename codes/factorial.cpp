#include <iostream>

using namespace std;

int fac(int d) {
	int i, r=1;
	for (i=1;i<=d;i++) {
		r = r * i;
	}
	return r;
}

main() {
	cout << fac(5);
}
