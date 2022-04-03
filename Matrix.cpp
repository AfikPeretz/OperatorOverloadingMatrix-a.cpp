#include "Matrix.hpp"

namespace zich {


    Matrix::Matrix(vector<double> arr, double row, double column){
        // this -> row = row;
        // this -> column = column;
        // int size = arr.size();
        // for (int i=0; i<size; i++){
        //     this->arr[i] = arr[i]; 
        // }
        // matrix = new double *[row];
        // for(int i = 0; i< row; i++){
        //     matrix[i] = new double [column];
        // }
        // int k =0;
        // for (int i = 0; i<row; i++){
        //     for (int j = 0; j<column; j++){
        //         matrix[i][j] = arr[k];
        //         k++;
        //     }
        // }
    }

    Matrix::Matrix(double row, double column){
        // this -> row = row;
        // this -> column = column;
        // matrix = new double *[row];
        // for(int i = 0; i< row; i++){
        //     matrix[i] = new double [column];
        // }
    }


    Matrix Matrix::operator+(const Matrix &a){
        // Matrix result(a.row,a.column);
        // for(int i =0; i<row; i++){
        //     for (int j=0; j<column; j++){
        //         result.matrix[i][j] = a.matrix[i][j]+this->matrix[i][j];
        //     }
        // }
        // return result;
        return a;
    }
    
    Matrix Matrix::operator+() const{
        Matrix result (row, column);
        return result;
    }

    Matrix Matrix::operator++() const{
        Matrix result (row, column);
        // for(int i =0; i<row; i++){
        //     for (int j=0; j<column; j++){
        //         result.matrix[i][j] = result.matrix[i][j]+1;
        //     }
        // }
        return result;
    }


    Matrix Matrix::operator+=(const Matrix &a){
        return a;
    }


    Matrix Matrix::operator-(const Matrix &a){
        Matrix result(a.row,a.column);
        // for(int i =0; i<row; i++){
        //     for (int j=0; j<column; j++){
        //         result.matrix[i][j] = a.matrix[i][j]-this->matrix[i][j];
        //     }
        // }
        return result;
    }

    Matrix Matrix::operator-() const {
        Matrix result (row, column);
        // for(int i = 0; i<row; i++){
        //     for (int j = 0; j<column; j++){
        //         result.matrix[i][j] = result.matrix[i][j]*-1;
        //     }
        // }
        return result;
    }

    Matrix Matrix::operator--() const{
        Matrix result (row, column);
        // for(int i =0; i<row; i++){
        //     for (int j=0; j<column; j++){
        //         result.matrix[i][j] = result.matrix[i][j]-1;
        //     }
        // }
        return result;
    }

    Matrix Matrix::operator-=(const Matrix &a){
        Matrix result(row,column);
        return result;
    }

    Matrix Matrix::operator*(const Matrix &a){
        Matrix result(a.row,a.column);
        // for(int i =0; i<row; i++){
        //     for (int j=0; j<column; j++){
        //         for (int k=0; k<column; k++){
        //             result.matrix[i][j] += this->matrix[i][k]*a.matrix[k][j];
        //         }
        //     }
        // }
        return result;
    }


    Matrix Matrix::operator*(double a) const{
        Matrix result(row,column);
        // for(int i =0; i<row; i++){
        //     for (int j=0; j<column; j++){
        //         result.matrix[i][j] = a * result.matrix[i][j];
        //     }
        // }
        return result;
    }
    Matrix Matrix::operator=(const Matrix &a){
        // row = a.row;
        // column = a.column;
        // for(int i =0; i<row; i++){
        //     for (int j=0; j<column; j++){
        //         this->matrix[i][j] = a.matrix[i][j];
        //     }
        // }
        return (*this);
    }

    Matrix Matrix::operator*=(const Matrix &a){
        Matrix result(a.row,a.column);
        // result = result*a;
        return result;
    }

    Matrix Matrix::operator*=(const double &a){
        Matrix result(row, column);
        // result = result * a;
        return result;
    }

    bool Matrix::operator == (const Matrix &a){
        return true;
    }

    bool Matrix::operator < (const Matrix &a){
        return true;
    }

    bool Matrix::operator > (const Matrix &a){
        return true;
    }

    bool Matrix::operator <= (const Matrix &a){
        return true;
    }

    bool Matrix::operator >= (const Matrix &a){
        return true;
    }

    bool Matrix::operator != (const Matrix &a){
        return true;
    }

    Matrix operator* (double factor, const Matrix &a){
        return a;
    }


    istream& operator>>(istream&in, const Matrix &a){
        // cout<<"Input data"<<endl;
        // for(int i =0; i<a.row; i++){
        //     for (int j=0; j<a.column; j++){
        //         in>>a.matrix[i][j];
        //     }
        // }
        return in;
    }


    ostream& operator<<(ostream& out, const Matrix &a){
        // out<<"output data"<<endl;
        // for(int i =0; i<a.row; i++){
        //     for (int j=0; j<a.column; j++){
        //         out<<a.matrix[i][j]<<" ";
        //     }
        //     out<<endl;
        // }
        return out;
    }
    

};