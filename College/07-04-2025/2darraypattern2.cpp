#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {
        {10,36,54,60},
        {12,30,51,67},
        {18,34,57,65},
        {19,32,55,62},
    };
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == 0 || j == 3){
                cout << arr[i][j] << " ";
            } else {
                cout << "   "; // spacing for alignment
            }
        }
        cout << endl;
    }

    return 0;
}
