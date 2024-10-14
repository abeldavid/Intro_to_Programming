#include <iostream>

using namespace std;

void odd_even (int n){

    if ((n%2) == 0 )
        cout << "Even #";
    else
        cout << " Odd #";
}

int main(){

   int n = 6;
   odd_even(n);

    return 0;
}
