#include <iostream>
using namespace std;
int main() {
int arr1[20]= {0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int arr2[14]= {0,23,25,27,29,31,33,35,37,39,40,41,42,43};
int arr3[34];
int indexA=0, indexB=0, indexC=0;

while((indexA<20) && (indexB<14)) {
    if(arr1[indexA] < arr2[indexB]) {
        arr3[indexC] = arr1[indexA];
        indexA++;
    }
    else {
        arr3[indexC] = arr2[indexB];
        indexB++;
    }
    indexC++;
}

while(indexA<20) {
    arr3[indexC] = arr1[indexA];
    indexA++;
    indexC++;
}

while(indexB<14) {
    arr3[indexC] = arr2[indexB];
    indexB++;
    indexC++;
}

for (int i=0; i<34; i++)
    cout << arr3[i] << " ";
return 0;
}
