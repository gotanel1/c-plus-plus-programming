#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string shuffleString(string elements){
// the algorithm is called Fisher-Yates shuffle.
int r, sizeOfString = elements.size();
	srand(100);		// key = 100
	for (int k = 0; k < sizeOfString; k++) {
    	r = k + rand() % (sizeOfString - k); 
    	swap(elements[k], elements[r]);
	}
	return elements;
}

string reverseShuffle(string elements){
int sizeOfString = elements.size();
int r[sizeOfString];
	srand(100);		// key = 100
	for (int k = 0; k < sizeOfString; k++) 
    	r[k] = k + rand() % (sizeOfString - k); 
	for (int i=sizeOfString-1; i >= 0; --i){	
    	swap(elements[i], elements[r[i]]);
	}
	return elements;
}

main() {
	string mess = "Programming Contest 2017";
	mess = shuffleString(mess);
	cout << mess << endl;
	mess = reverseShuffle(mess);
	cout << mess << endl;
}
