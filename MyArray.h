#ifndef MYARRAY_H
#define MYARRAY_H
#include <iostream>

using namespace std;

class MyArray
{

   friend ostream& operator<<( ostream & output, const MyArray & rhs); // to output the values of the array
   friend istream& operator>>( istream & input, MyArray & rhs); // to input the values of the array
public:
   //constructors
   MyArray(); //empty constructor , SIZE <- 1, data <- {0}
   MyArray(int n); //SIZE <- n, data <- {0, ..., 0}
   MyArray(int n, double val); //SIZE <- n, data <- {val, ..., val}
   MyArray(const MyArray& src); //copy constructor
   MyArray(int n, double* arr ); //SIZE <- n, data <- {arr[0], ..., arr[n-1]}
  
   //utility functions
   void printArray() const;
   void fill(double val);
   int getArraySize() const;
   double* getArray();
   double* getArray() const;

   //indexing
   double& operator[](int ind); //subscript operator for non-const objects returns modifiable lvalue
   double operator[](int ind) const; //subscript operator for non-const objects returns rvalue

   //assignment
   MyArray& operator=(const MyArray& rhs);

   //comparison
   bool operator!=(const MyArray& rhs) const; //equality operator 1
   bool operator==(const MyArray& rhs) const; //equality operator 2
  
   //math functions
   MyArray& operator+=(const MyArray& rhs) ; // additive assignment
   MyArray& operator-=(const MyArray& rhs) ; // subtractive assignment
   MyArray& operator*=(const MyArray& rhs) ; // (element-wise) multiplicative assignment
   MyArray& operator/=(const MyArray& rhs) ; // (element-wise) divisive assignment
  
   MyArray& operator^(const int& pwr) ; // element-wise power
  
private:
   double* array;
   int SIZE;
};
#endif
