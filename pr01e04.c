#include<stdio.h>
int main(){
    int mat[2][3]= {{0,1,2}, {3,4,5}};
            printf("direccion de mat: %p\n", mat);
        printf("direccion de mat[0]: %p\n",  mat[0]);
        printf("direccion de mat [0][0]: %p\n",  &mat[0][0]);
        
        return 0;
    }