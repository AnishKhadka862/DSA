//Sorting algorithms
//Selection Sorting: we should select the index for the min val in the unsorted array.
//We should then keep comparing the arr[min] with arr[i], then keeping swaping the values.
//We should get min value at the front and keep going until the whole array is sorted.
//Anish Khadka

#include <iostream>
using namespace std;

void selectionSort(int arr[]){
    //select the index with minimum value
    for (int i = 0; i < 5; i++){
        int min = i;
        for (int j = i+1; j < 5; j++){
            if (arr[min] > arr[j]){
                min = j; //minimum value at index = min
            }
        }
        //swapping happens here
        int temp = arr[i];
        if (arr[min] < arr[i]){
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    //print the sorted array
    for (int k = 0; k < 5; k++){
        cout << arr[k] << " ";
    }
}

int main()
{
    int size;
    cout << "enter the size of your array: " << endl;
    cin >> size;
    int array[size];
    //take inputs for the array 
    cout << "enter " << size << " values for the array" << endl;
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }
    cout << "Unsorted array : "<< endl;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << "\nAfter Sorting: " << endl;
    selectionSort(array);

    return 0;
}
