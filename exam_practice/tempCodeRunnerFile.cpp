#include <iostream>
using namespace std;

int main()
{

    // Operators

    // Arithmetic
    int x = 1;
    // addition
    x = x + x;
    // subtraction
    x = x - x;
    // multiplication
    x = x * x;
    // Division
    x = x / x;
    // Modulation
    x = x % x;

    // Relational
    bool b;
    // greater than
    b = x > x;
    // less than
    b = x < x;
    // equal to
    b = x == x;

    // Logical
    // and
    b = b && b;
    // or
    b = b || b;
    // not
    b = !b;

    // Bitwise
    // bw and
    x = x & 0;
    // bw or
    x = x | 0;
    // bw not
    x = ~x;
    // bw Xor
    x = x ^ 0;
    // left shift
    x = x << 1;
    // right shift
    x = x >> 1;

    // Assignment
    // assignment
    x = x;
    // add and assign
    x += x;
    // subtract and assign
    x -= x;
    // multiply and assign
    x *= x;
    // divide and assign
    x /= x;

    // increment and decrement
    x++;
    x--;
    // ternary operator
    x = b ? x : 1;

    cout << x << endl;
    cout << b << endl;
    return 0;
}