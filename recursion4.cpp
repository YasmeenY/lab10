/*
This program will return true if the string is a sequence of nested parentheses.
*/

#include <iostream>
#include <string>

using namespace std;

bool nestedParens(string s);

int main() {
   cout << nestedParens("((()))") << endl;
   cout << nestedParens("()") << endl;
   cout << nestedParens("") << endl;
  
  
   cout << nestedParens("(((") << endl;
   cout << nestedParens("(()") << endl;
   cout << nestedParens(")(") << endl;
   cout << nestedParens("a(b)c") << endl;
   return 0;
}

bool nestedParens(string s) {
   if(s.length() == 0) {
       return true; // return true if it is a sequence of nested parentheses
   } else if(s.length() < 2) {
       return false;
   } else {
       if(s[0] == '(' && s[s.size()-1] == ')') {
           return nestedParens(s.substr(1, s.size()-2));
       } else {
           return false; // false not a sequence of nested parentheses
       }
   }
}
