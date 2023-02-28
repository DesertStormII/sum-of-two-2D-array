#include <iostream>

using namespace std;

int main()
{
    int arr1[4][4] = { {1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16} };

    int arr2[4][4] = { {1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16} };
    int arr3[4][4];


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}