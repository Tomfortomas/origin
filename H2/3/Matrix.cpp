#include "Matrix.h"
#include <iostream>

using namespace std;
Matrix::Matrix()
{
    
}
Matrix::Matrix(int _row, int _col)
{
    elem=new int* [_row];
    for(int i=0;i<_row;i++)
    {
        *(elem+i)=new int [_col];
    }
    row=_row;
    col=_col;
}
Matrix::~Matrix()
{
    for(int i=0;i<row;i++)
    {
        delete [] *(elem+i);
    }
    delete [] elem;
}
Matrix Matrix:: operator+(const Matrix& a)
{   
    Matrix ans(row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(*((ans.elem)+i)+j)=*(*(elem+i)+j)+(*(*((a.elem)+i)+j));
        }
    }
    return ans;
}
Matrix Matrix:: operator-(const Matrix& a)
{
    Matrix ans(row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(*((ans.elem)+i)+j)=*(*(elem+i)+j)-(*(*((a.elem)+i)+j));
        }
    }
    return ans;

}
Matrix Matrix:: operator*(const Matrix& a)
{
    Matrix ans(row,a.col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<a.col;j++)
        {
            *(*((ans.elem)+i)+j)=0;
            for(int k=0;k<col;k++)
            {
                *(*((ans.elem)+i)+j)+=(*(*(elem+i)+k))*(*(*((a.elem)+k)+j));
            }
        }
    }
    return ans;

}
Matrix Matrix:: operator*(const int a)
{
    Matrix ans(row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(*((ans.elem)+i)+j)=*(*(elem+i)+j)*a;
        }
    }
    return ans;
}
int* Matrix::operator[](int a) const
{
    return *((this->elem)+a);
}

