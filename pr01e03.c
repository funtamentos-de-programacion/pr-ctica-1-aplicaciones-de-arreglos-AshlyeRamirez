#include <stdio.h>

int main() {
    int arr[2][3] = {{0, 1, 2}, {3, 4, 5}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("arr[%d][%d] = %d esta es la direccion: %p\n", i, j, arr[i][j], &arr[i][j]);
        }
    }
    printf("\ndireccion de arr[1][0]: %p\n", &arr[1][0]);
    printf("direccion de arr[0][2]: %p\n", &arr[0][2]);
    return 0;
}