/*
This program will add the elements passed in the array but only for intervals same as sumRange in B but with arrays.
*/

#include <iostream>

using namespace std;

int sumArrayInRange(int *arr, int left, int right) {
  
  int s = 0;
  
  // array size is odd 
  if ( left == right )
    return arr[ left ];
    
  // array size is even cross over case
  if ( left > right )
    return 0;
    
  s = arr[ left ] + arr[ right ];
  
  return ( s +  sumArrayInRange( arr , left + 1, right -1 ) );
 
}

int sumArray(int *arr, int size) {
  
  return sumArrayInRange(arr,0,size-1);
  
}

int main() {
  
  int size = 10;
  //allocate array dynamically
  int *arr = new int[size];
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  int sum = sumArray(arr,size);
  
  cout << "The sum is :" << sum << endl;
  
  sum = sumArray(arr,5);
  
  cout << "The sum is :" << sum << endl;
  
  delete[] arr; //delocate it
  
  return 0;
  
}
