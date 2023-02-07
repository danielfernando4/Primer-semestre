
#include <iostream>
using namespace std;

const int M= 3, N=3;
void imprimir(const int A[M][N]);
void transpuesta(const int A[M][N], int B[M][N]);
int main(){
    int A[M][N]=    {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int B[M][N];
    imprimir(A);
    transpuesta(A,B);
    imprimir(B);
    return 0;
}

void imprimir(const int A[M][N]){
    for (int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    } 
}

void transpuesta(const int A[M][N], int B[M][N]){
    for (int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            B[j][i] = A[i][j];
        }
    }
}    