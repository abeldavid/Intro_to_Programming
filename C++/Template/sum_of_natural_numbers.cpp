%
 Data Types - https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-dtyp/b9218cdd-e76a-4c13-bb2d-c322dc39505b
%

#include <iostream>

using namespace std;

typedef unsigned int UINT32;

template <typename T> T calculate_sum(T n) {
    T total = 0;
    for(T i = 1; i <= n; ++i) 
        total += i;
    return total;
}


int main() {
    UINT32 result = calculate_sum <UINT32> (1000000000);
    cout << "Result: " << result << '\n';
    return 0;
}
