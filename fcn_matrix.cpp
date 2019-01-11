#include <iostream>
#include <array>
#include <algorithm>

template < size_t M, size_t N,typename T>
struct Matrix
{
public:

Matrix()
{
static_assert (N==0,"liczba wierszy musi byc wieksza niz 0");
static_assert (M==0,"liczba kolumn musi byc wieksza niz 0");


for (auto & wiersz : macierz)
	for (auto  & kolumna : wiersz)
	kolumna=0;
}

template < size_t M1,  size_t N1,typename T1>
Matrix(const Matrix <N1,M1,T1> & macierz1)  
{

static_assert (N1>N,"niepoprawna ilosc wierszy");
static_assert (M1>M,"niepoprawna ilosc kolumn");


if (std::is_convertible<T,T1>::value)
{

if (M1<=M && N1<=N)
for (int i=0; i<N;i++)
	for (int j=0; j<M;j++)
	macierz[i][j]=macierz1[i][j];
}
}


template < size_t M1,  size_t N1,typename T1>
Matrix & operator + (Matrix <M1,N1,T1> & macierz1)
{

if (std::is_convertible<T,T1>::value)
  if (M1<=M && N1<=N)
    for (int i=0; i<N1;i++)
	for (int j=0; j<M1;j++)
	macierz[i][j]+=macierz1[i][j];

return macierz;
}

#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

template<std::size_t N, std::size_t M, typename T>
struct Matrix {
    Matrix() {
        if (N == 0) {
            throw std::underflow_error { "number of rows is 0" };
        }
        if (M == 0) {
            throw std::underflow_error { "number of columns is 0" };
        }
    }

    template<std::size_t N1, std::size_t M1, typename T1>
    Matrix(const Matrix<N1, M1, T1>& other) {
        if (N1 > N) {
            throw std::range_error { "number of rows error" };
        }
        if (M1 > M) {
            throw std::range_error { "number of columns error" };
        }
        for (size_t n = 0; n < N1; ++n) {
            for (size_t m = 0; m < M1; ++m) {
                _array[n][m] = other[n][m];
            }
        }
    }

    std::array<T, M> &operator[](std::size_t index) {
        return _array.at(index);
    }

    const std::array<T, M> &operator[](std::size_t index) const {
        return _array.at(index);
    }

    //10
    template<std::size_t N1, std::size_t M1, typename T1>
    friend std::ostream &operator<<(std::ostream &os,
            const Matrix<N1, M1, T1> &);

private:
    std::array<std::array<T, M>, N> _array{} ;
}
;


template<std::size_t N, std::size_t M, typename T>
std::ostream &operator<<(std::ostream &os, const Matrix<N, M, T> &matrix) {
    for (const auto &element : matrix._array) {
        for (const auto &e : element) {
            os << e;
        }
        os << endl;
    }
    return os;

template<std::size_t N, std::size_t M>
struct Matrix<N, M, bool> {
    Matrix() {
        throw std::bad_typeid { };
    }
};

int main()
{
Matrix<3,4,int> a;                                    
a[0][0]=1;
a[0][1]=2;
a[0][2]=3;
a[0][3]=4;

a[1][0]=4;
a[1][1]=5;
a[1][2]=6;
a[1][3]=7;

a[2][0]=8;
a[2][1]=8;
a[2][2]=9;
a[2][3]=1;

std::cout<<a<<std::endl;
//std::cout<<(aaa[4])<<std::endl;
Matrix<4,5,double> b(a);
std::cout<<b<<std::endl;
Matrix<4,5,double> c(move(a));
std::cout<<c<<std::endl;
std::cout<<a*b<<std::endl;
return 0;
}



