/*
This program will print the sum of the given numbers
*/

#include <iostream>
using namespace std;

int sumRange(int left, int right){
   //base condtion for the recursion.
   if(left > right){
      return 0;
   }
   else{

      return left + sumRange(left + 1, right);
   }
}

int main() {
   //call sumRange
   int x = sumRange(1, 3);
   cout << "This is " << x << endl;   // 6
   int y = sumRange(-2, 10);
   cout << "That is " << y << endl;   // 52
}
