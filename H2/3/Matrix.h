#pragma once
#include <iostream>
using namespace std;

class Matrix {
private:
    int** elem;
    int col, row;
    
public:
    Matrix();
    Matrix(int _row, int _col);
    ~Matrix();

    Matrix operator+(const Matrix&);
    Matrix operator-(const Matrix&);
    Matrix operator*(const int);
    Matrix operator*(const Matrix&);
    friend Matrix transpose(const Matrix& a)
    {
        
        
        Matrix ans(a.col,a.row);
        for(int i=0;i<a.row;i++)
        {
            for(int j=0;j<a.col;j++)
            {
                *(*((ans.elem)+j)+i)=*(*((a.elem)+i)+j);
                
            }
            
        }
        return ans;
        
    }
    int* operator[](int) const;
    friend ostream& operator<<(ostream& cout, const Matrix& a)
    {
        for(int i=0;i<a.row;i++)
        {
            for(int j=0;j<a.col;j++)
            {
                cout<<*(*((a.elem)+i)+j)<<' ';
            }
            cout<<endl;
        }
        return cout;
    }
    friend istream& operator>>(istream& cin, Matrix& a)
    {
        int _row,_col;
        cin>>_row>>_col;
        a.elem=new int* [_row];
        for(int i=0;i<_row;i++)
        {
            *((a.elem)+i)=new int [_col];
        }
        a.row=_row;
        a.col=_col;
        for(int i=0;i<a.row;i++)
        {
            for(int j=0;j<a.col;j++)
            {
                cin>>*(*((a.elem)+i)+j);
            }
        }
            return cin;
        
    }
};
