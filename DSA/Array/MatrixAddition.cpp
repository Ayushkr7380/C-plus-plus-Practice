#include<iostream>
using namespace std;

void AddTwoMatrix(int mat1[2][2],int mat2[2][2],int mat3[2][2],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

}

int main(){
    int mat1[2][2] = {{2,5},{12,5}};
    int mat2[2][2] = {{12,4},{5,9}};
    
    int mat3[2][2];

    AddTwoMatrix(mat1,mat2,mat3,2);

    //Sum of two matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<""<<endl;
    }
    return 0;
}