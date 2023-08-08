#include <iostream>
using namespace std;

int main(){
    int **matriz;
    matriz = (int**)malloc(3 * sizeof(int*));

    for(int i = 0; i < 3; i++){
        matriz[i] = (int*)malloc(3 * sizeof(int));
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = 5;
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("%i", matriz[i][j]);
        }
    }

    return 0;
}