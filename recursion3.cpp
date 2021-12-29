/*
This program will return true if all characters in the string are letters and digits, otherwise returns false.
*/

#include <iostream>
#include <string>

using namespace std;

bool isAlphanumeric(string s);

int main() {
   cout << isAlphanumeric("ABCD") << endl;
   cout << isAlphanumeric("Abcd1234xyz") << endl;
   cout << isAlphanumeric("KLMN 8-7-6") << endl;
   return 0;
}

bool isAlphanumeric(string s) {
   if(s.length() == 0) {
       return true; //returns true all are letters and digits
   } else {
       char ch = s[0];
       if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
           return isAlphanumeric(s.substr(1));
       } else {
           return false; // returns false all are not
       }
   }
}
