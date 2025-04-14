#include<iostream>
using namespace std;

void displayAndAverageHeight(int *heightArr,int size){
    int i=0;
    int sum = 0;
    while(i<size){

        cout<<*heightArr<<endl;
        sum+=*heightArr;

        heightArr++;
        i++;
    }

    cout<<"Average of heights is "<<(sum/size)<<endl;
}
int main(){
    int heightArr[] = {155,160,145,135,140};
    int size = sizeof(heightArr) / sizeof(heightArr[0]);
    displayAndAverageHeight(heightArr,size);
    return 0;
}