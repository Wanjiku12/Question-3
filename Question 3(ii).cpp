#include <iostream>
using namespace std;
void max(int n1, n2, n3);//declaration
int main() {
    
  int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    max();
return 0;
}
void max(){//definition
     

    // check if n1 is the largest number
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    // check if n2 is the largest number
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    
    // if neither n1 nor n2 are the largest, n3 is the largest
    else 
        cout << "Largest number: " << n3;
}
    
