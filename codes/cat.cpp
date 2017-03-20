#include <iostream>

using namespace std;
int c, d, l;

void getValue() {
	c = 3;
	d = 1;
	l = 4;
}

main() {
	int R_leg, noCat, onBack;
	
	string mess = "no";
	getValue();
	R_leg = l - (d * 4);      // check remain legs for cat
	if ((R_leg % 4)==0) {		// check remain legs are grouped in 4
	   noCat = (int)(R_leg / 4); // number of cats are remain legs divided by 4
	   if (noCat == c) mess = "yes"; // check number of cat = counting cat number
	   else if (c > noCat) {		// check c should be more than number of cats
	   	   onBack = c - noCat;      // some cats are on the dog's back
	   	   if ((d * 2) >= onBack) mess = "yes"; // dog loads should be more than cat on the back
	   }
	}
	
	cout << mess << endl;
}
