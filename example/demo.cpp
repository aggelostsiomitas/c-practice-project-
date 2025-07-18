#include "../inc/Matrix.hpp"
#include <iostream>

int main() {
    // Δημιουργία 1D vector ως γραμμή και ως στήλη
    std::vector<double> rowVec = {1, 2, 3};
    std::vector<double> colVec = {4, 5};

    Matrix rowMatrix(rowVec, true);   // 1x3
    Matrix colMatrix(colVec, false); // 2x1

    // Δημιουργία 2D πίνακα
    std::vector<std::vector<double>> mat2D = {
        {1, 2},
        {3, 4}
    };

    Matrix M1(mat2D);
    Matrix M2(mat2D); 

    // Δημιουργία κενού πίνακα 2x2
    Matrix emptyMat(2, 2);

    // Εκτύπωση όλων
    std::cout << "rowMatrix (1x3):\n" << rowMatrix;
    std::cout << "colMatrix (2x1):\n" << colMatrix;
    std::cout << "M1 (2x2):\n" << M1;
    std::cout << "M2 (2x2):\n" << M2;
    std::cout << "emptyMat (2x2):\n" << emptyMat;

    // Πράξεις
    Matrix sum = M1 + M2;
    Matrix difference = M1 - M2;
    Matrix multiply = M1 * M2;

    std::cout << "\nM1 + M2:\n" << sum;
    std::cout << "\nM1 - M2:\n" << difference;
    std::cout << "\nM1 * M2:\n" << multiply;

    M1+=M2;
    std::cout<<"\nM1+=M2:\n"<<M1;

    M1-=M2;
    std::cout<<"\nM1-=M2\n"<<M2;
   


    Matrix A( { {1,2},{3,4}});
    Matrix B({ {5,6},{7,8}});
    Matrix sum2=A+B;

    std::cout<<"A:\n"<<A;
    std::cout<<"B:\n"<<B;
    std::cout<<"A+B\n"<<sum2;

    Matrix movedmatrix=A+Matrix({ {9,8},{7,6}});
    std::cout<<"\nA + other matrix:\n"<<movedmatrix;

    Matrix C=std::move(movedmatrix);
    std::cout<<"\nC after move:\n"<<C;
    
    return 0;
}
