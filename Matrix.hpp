//I got a lot of help from the following link address: https://www.youtube.com/watch?v=bMAvdT8RQko
#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;


namespace zich {
    class Matrix { 

        private :
            double row;
            double column;
            vector<double> arr;
            double ** matrix;
            // vector<vector<int> > matrix;

        public:
            Matrix(vector<double> arr, double row,double column);
            Matrix(double row, double column);
            Matrix operator+(const Matrix &);
            Matrix operator+() const;
            Matrix operator++() const;
            Matrix operator+=(const Matrix &);
            Matrix operator-(const Matrix &);
            Matrix operator-() const;
            Matrix operator--() const;
            Matrix operator-=(const Matrix &);
            Matrix operator*(const Matrix &);
            Matrix operator* (double) const;
            Matrix operator=(const Matrix &);
            Matrix operator*=(const Matrix &);
            Matrix operator*=(const double &);
            bool operator == (const Matrix &);
            bool operator < (const Matrix &);
            bool operator > (const Matrix &);
            bool operator <= (const Matrix &);
            bool operator >= (const Matrix &);
            bool operator != (const Matrix &);
            friend Matrix operator* (double factor, const Matrix &a);
            friend istream& operator>>(istream& in, const Matrix &a); 
            friend ostream& operator<<(ostream& out, const Matrix &a); 
                              
    };
}