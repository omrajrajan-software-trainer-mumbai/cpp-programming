/*
Debugging in C++ - 01
#codeblocks #programming #cplusplus
*/
#include <iostream>

class Space {
    int mCount;
public:
    Space() {
        mCount = 0;
    }
    Space(int mCountValue) {
        mCount = mCountValue;
    }
    Space operator ++() {
        mCount++;
        return Space(mCount);
    }
};
int main() {
    Space objSpace;
    objSpace++;
}
