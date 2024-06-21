//Bubble Sort Algorithm
//Start with the first element, compare with the adjacent element, swap if necessary,
//The biggest element will be at the right most side after the first lopp,
//hence the name: Bubble Sort
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    int temp = 0;
    for (int i = 0; i < size; i++){
        bool flag = false;
        for (int j = 0; j < size - i - 1; j++)
            if(arr[j] > arr[j+1]){
            flag = true;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        if (flag == false){
            break;
        }
        
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
    bubbleSort(myarr,size);

    return 0;
}


