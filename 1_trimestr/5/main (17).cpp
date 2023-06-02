#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

bool isOrthogonal(double matrix[][MAX_SIZE], int size) {
    // Проверяем первое условие
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            double dot_product = 0;
            for (int k = 0; k < size; k++) {
                dot_product += matrix[i][k] * matrix[j][k];
            }
            if (dot_product != 0) {
                return false;
            }
        }
    }
    
    // Проверяем второе условие
    for (int i = 0; i < size; i++) {
        double dot_product = 0;
        for (int k = 0; k < size; k++) {
            dot_product += matrix[i][k] * matrix[i][k];
        }
        if (dot_product != 1) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Пример матрицы
    double matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    if (isOrthogonal(matrix, 3)) {
        cout << "Матрица ортонормированная" << endl;
    } else {
        cout << "Матрица не ортонормированная" << endl;
    }
    
    return 0;
}
