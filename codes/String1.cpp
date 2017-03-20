#include <iostream>
#include <algorithm>
#include <string>
#include <locale>

using namespace std;

string upper(string sn)
{
    for (size_t i=0; i<sn.length(); ++i)
        sn[i]=toupper(sn[i]);

    return sn;
}

string replace(string r1, string r2)
{
    for (size_t i=0; i<r1.length(); ++i) {
    	if (r1[i]==r2[0])
    	    r1[i]=r2[0];
	}

    return r1;
}

int main () {
   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total lenghth of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;
   
   int x = str3.find("W",5);
   cout << "pos = " << x << endl;
   
   str3 = upper(str3);
   cout << str3 << endl;
   return 0;
}
