#include<stdio.h>
int main(){
    //Con enteros
    int arr[5]={0,1,2,3,4};
    for (int i=0; i<5; i++){
        printf(" [%d] esta en la direccion: %p\n" ,i, &arr[i]);
    }
    //Con caracteres
    char arr_char[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("\ndirecciones de memoria para char:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr_char[%d] está en la dirección: %p\n", i, &arr_char[i]);
    }
    //Con doubles
    double arr_double[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
    printf("\nDirecciones de memoria para double:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr_double[%d] está en la dirección: %p\n", i, &arr_double[i]);
    }
    return 0;
}

