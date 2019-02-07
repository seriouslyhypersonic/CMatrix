/*
 * Copyright (c) Nuno Alves de Sousa 2019
 *
 * Use, modification and distribution is subject to the Boost Software License,
 * Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */
#include <iostream>
#include <string>

#include <CMatrix.h>

#define PRINT_MATRIX(M) printMatrix(#M, M)

template<class Matrix> // requires Outputable<Matrix>
void printMatrix(const char* str, Matrix matrix)
{
    std::cout << str << " = {" << matrix << "}\n";
}

int main()
{
    constexpr int dim = 5;
    CMatrixLib::FMatrix mA(dim, dim, 1.0, false);
    CMatrixLib::FMatrix mB(dim, dim, 2, true);

    PRINT_MATRIX(mA);
    PRINT_MATRIX(mB);
    PRINT_MATRIX(mA*mB);
}