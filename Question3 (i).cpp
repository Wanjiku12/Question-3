#include <iostream>
using namespace std;
void checkeven(){
    int n;
   if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd."; 
}
int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;
checkeven();
  

  return 0;
}