// Merge Sort Algorithm
#include <iostream>
using namespace std;

void Merge(int arr[], int l, int m, int r){
    int i = l;
    int j = m+1;
    int k = 0;
    int temp[r-l+1];
    
    while (i <= m && j <= r){
        if (arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
       else{
           temp[k] = arr[j];
           j++;
           k++;
       }  
    }
    while(i<=m){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    for (int s = 0 ; s < r-l+1; s++){
           arr[l+s] = temp[s];
    }
}

void MergeSort(int arr[], int l, int r){
    int m = 0;
    if (l<r){
        m = (r+l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr,m+1,r);
        Merge(arr, l, m, r);
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
    //print the array
    cout << "Before Merge Sort: "<< endl;
    for (int i = 0; i < size; i++){
        cout << myarr[i] << " ";
    }
    
    // Call the MergeSort function here
    MergeSort(myarr,0,size - 1);
    
    cout << "\nAfter Merge sort: "<< endl;
    for (int i = 0; i < size; i++){
        cout << myarr[i] << " ";
    }

    return 0;
}
