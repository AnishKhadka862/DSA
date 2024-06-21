//Quick Sort Algorithm
#include <iostream>
using namespace std;

int Partition(int arr[],int s, int e){
    int pivot = arr[e];
    int pIndex = s;
    
    //comparing and putting the smaller elements to the left, greater elements to the right of pivot
    for (int i = pIndex; i < e; i++){
        if (arr[i] < pivot){
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    //putting the pivot in the right position
    int temp = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp;
    cout << pIndex << endl;
    return pIndex;
}

void QuickSort(int arr[], int s, int e){
    if (s<e){
        int p = Partition(arr,s,e);
        cout << "pIndex: "<< p << endl;
        QuickSort(arr,s, p-1); //left partition
        QuickSort(arr,p+1,e); //right partition
    }
}

int main()
{
    int size = 0;
    cin >> size;
    int myarr[size];
    
    //fill the array 
    for (int i = 0; i < size; i++){
        cin >> myarr[i];
    }
    
    cout << "Before Quick Sort: "<< endl;
    for (int i = 0; i < size; i++){
        cout << myarr[i] << " ";
    }
    
    QuickSort(myarr,0,size - 1);
    
    cout << "\nAfter Quick sort: "<< endl;
    for (int i = 0; i < size; i++){
        cout << myarr[i] << " ";
    }
    
    return 0;
}
