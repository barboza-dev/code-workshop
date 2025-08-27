#include <iostream>
using namespace std;

void bubbleSortMin(int arr[], int TAM);
void bubbleSortMax(int arr[], int TAM);
void showArray(int arr[], int TAM);

int main() {
    const int TAM = 10;
    int nums[TAM] = {9,8,7,6,5,4,3,2,1,0};

    //showArray(nums, TAM);
    bubbleSortMin(nums, TAM);
    showArray(nums, TAM);
    bubbleSortMax(nums, TAM);
    showArray(nums, TAM);

    return 0;
}
void showArray(int arr[], int TAM){
    for (int i = 0; i < TAM; i++){
        cout << "[" << arr[i] << "]";
    }
    cout << endl;
}

void bubbleSortMin(int arr[], int TAM){
    int aux = 0;
    bool swapped = false;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < (TAM - 1) - i; j++){ 
            if(arr[j] > arr[j+1]){
              aux = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = aux;
              swapped = true;
            }
        }
        if(!swapped) return;
        cout << "NO";
    }
}

void bubbleSortMax(int arr[], int TAM){
    int aux = 0;
    bool swapped = false;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM - i - 1; j++){
            if(arr[j] < arr[j+1]){
              aux = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = aux;
              swapped = true;
            }
        }
        if(!swapped) return;
        cout << "No";
    }
}