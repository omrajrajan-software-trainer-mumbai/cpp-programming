// Created a debugging folder to find the errors
// Chapter 06 Page No.148

#include <iostream>

using namespace std;

class Room
 {
 float mWidth;
 float mLength;
 public:
 Room()
 {
 }
 Room(float w, float h) :mWidth(w), mLength(h)
 {
 }
 operator float()
 {
 return (float)mWidth * mLength;
 }
 float getWidth()
 {
 }
 float getLength()
 {
 return mLength;
 }
 };

int main()
{
    cout << "Created a debugging folder to find the errors\n";

Room objRoom1(2.5, 2.5);
 float fTotalArea;
 fTotalArea = objRoom1;
 cout << fTotalArea;

 return 0;
}
