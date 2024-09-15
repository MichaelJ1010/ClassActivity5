#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main(){

    cout << "size of a short : " << sizeof(short) << endl;
    cout << "limits of a short (max to min): " << numeric_limits<short>::max() 
    << " to " << numeric_limits<short>::min() << endl;
    return 0;
}