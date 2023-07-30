#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout << "Enter a positive or negative decimal number: ";
    cin >> num;

    // convert to binary
    int bits = sizeof(num) * 8; // number of bits in int type
    unsigned int mask = 1 << (bits - 1); // mask for the most significant bit

    cout << "Binary representation: ";

    for (int i = 0; i < bits; i++) {
    
        cout << ((num & mask) ? 1 : 0); // output 1 or 0 based on the bit value
        mask >>= 1; // shift mask to the right
    }
    
    cout << endl;
    return 0;
}