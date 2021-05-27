#include <iostream>
using namespace std;

void minmax(int *data, int n, int *min, int *max){
    int i;

    *min = data[0];
    *max = data[0];

    for(i=1; i<n; i++){
        if(data[i] > *max){
        *max = data[i];}
        else if(data[i]< *min){
        *min = data[i];}
    }
}

int main(void){
    int min, max;
    int data[10] = {22,09,33,28,13,17,01,44,90,11};

    minmax(data, &min, &max);
    cout <<"Minimo:"<<min<<endl;
    cout <<"Maximo: "<<max; 

    exit(0);  
}