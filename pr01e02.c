#include<stdio.h>
int main(){
    int arr[3]={0,1,2};
    printf("esta es la direccion: %p\n", arr);
     printf(" esta es la direccion de &arr[0]: %p\n", &arr[0]);
     printf("Direccion de &arr: %p\n", &arr);
    return 0;
}