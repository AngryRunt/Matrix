#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 0;

    cout << "введите размер матрицы: " << endl;
    cin >> n;
    int holder[n * n];
    for (int i = 0; i < n * n; i++)
    {
        holder[i] = i+1;
    }
    // заполнение матрицы из левого верхнего вниз в правый нижний по строчкам
    int k = 0;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = holder[k];
            k++;
        }
    }
    k = 0;
    //----------------------------------------------------------------------------//
    // заполнение матрицы из левого верхнего вниз в правый нижний по строчкам
    k = 0;
        for (int i = n - 1; i >= 0; i--)
        {
        for (int j = n - 1; j >= 0; j--)
        {
            mat[j][i] = holder[k];
            k++;
        }
    }
    //----------------------------------------------------------------------------//
    // заполнение матрицы из левого верхнего вниз горизонтальной змейкой
    k = 0;
        for (int i = 0; i < n; i++)
        if (i %2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j] = holder[k];
                k++;
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                mat[i][j] = holder[k];
                k++;
            }
        }
//----------------------------------------------------------------------------//
    // заполнение матрицы из правого верхнего вертикальной змейкой
    k = 0;
    for (int i = n - 1; i >= 0; i--)
        if (i %2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                mat[j][i] = holder[k];
                k++;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                mat[j][i] = holder[k];
                k++;
            }
        }

//----------------------------------------------------------------------------//
   /*/ заполнение матрицы из левого нижнего вертикальной змейкой
    k = 0;
    for (int i = 0; i < n; i++)
        if (i %2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                mat[j][i] = holder[k];
                k++;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                mat[j][i] = holder[k];
                k++;
            }
        }
    //----------------------------------------------------------------------------//
    /*k = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i %2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                mat[i][j] = holder[k];
                k++;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j] = holder[k];
                k++;
            }
        }
    }

    k = 0;
    for (int j = n - 1; j >= 0; j--)
        if (j %2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                mat[i][j] = holder[k];
                k++;
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                mat[i][j] = holder[k];
                k++;
            }
        }*/
// контрольный вывод.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(n) << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}