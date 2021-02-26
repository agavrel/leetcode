#include <sstream>
#include <cstring>
#include <iostream>

using namespace std;

string DecimalToBinary(int n) {
    stringstream ss((n < 0) ? "1" : "0"); // the first bit, for int8_t, indicates if its negative or not
    if (n < 0)
        n = -(n+1); // read about two complement!
    int mask = 1 << 6; // you wil screen the bits from left to right thank to the mask, equivalent to 0b01000000 at first.
    while (mask) {
        ss << ((mask & n) ? "1" : "0"); // if the bit of the mask matches the bit of n then we add it to the string.
        mask >>= 1; // 0b01000000 becomes 0b00100000 and so on
    }
    return ss.str();
}

int main(void) {
	cout << DecimalToBinary(-127);
	return 0;

}
