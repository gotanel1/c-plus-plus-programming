#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    ifstream file("example.txt");
    if (file) {        
        vector<string> myLines;
		copy(istream_iterator<string>(file),
          istream_iterator<string>(),
          back_inserter(myLines));
        
        
        for (int i = 0;i<myLines.size();i++) 
		 cout<<myLines[i]<<endl;
    }
}
