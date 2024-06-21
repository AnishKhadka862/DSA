//Anish Khadka
//Insertion Sort algorithm
#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    int key = 0;
    for (int i = 1; i < size; i++){
        key = arr[i];
        int j = i - 1;
        while (j >=0 && key < arr[j]){
                arr[j+1] = arr[j];
                j = j - 1;
        }
            arr[j+1] = key;
    }
    //print the sorted array
    for (int k = 0; k < size; k++){
        cout << arr[k] <<" ";
    }
}
    

int main()
{
    int size = 0;
    cout << "enter the size of your array: "<< endl;
    cin >> size;
    int myarr[size];
    //input elements in the array
    for (int i = 0; i < size; i++){
        cin >> myarr[i];
    }
    //Display the insorted array
    for (int j = 0; j < size; j++){
        cout << myarr[j]<< " ";
    }
    cout << "\nAfter Sorting: " << endl;
    insertionSort(myarr,size);

    return 0;
}
