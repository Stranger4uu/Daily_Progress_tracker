/*

=> inline function are those in which you only write 1 line or maximum 2 lines ,
=> if you give more lines then it will known as normal function
=> inline function takes less time to run because of calling overhead 
=> An inline function is a function where the function call is replaced by the actual function code during compilation.

This removes the function call overhead, which makes execution faster.

In an inline function:

The compiler copies the function code directly where the function is called.

No jumping to another memory location.

No call/return overhead.

So execution becomes faster.
*/

#include <iostream>

using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(5);
    return 0;
}


