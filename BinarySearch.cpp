// Binary search algorithm
// The Array must be sorted for Binary search.
//Anish Khadka

#include <iostream>

using namespace std;

int BinarySearch (int arr[], int l, int r, int n){
   int mid = 0;
   
   //start the loop
   while(l <= r){
       mid = l + (r-l)/2;
       if (n == arr[mid]){
           return mid;
       }
       else if(n < arr[mid]){
           r = mid - 1;
       }
       else{
           l = mid + 1;
       }
   }
   return -1;
}

int main()
{
    int size, left = 0, right, num = 0;
    cout << "enter your array size: " << endl;
    cin >> size;
    int array[size];
    right = size - 1;
    cout << "enter " << size << " values for the array: "<< endl;
    //take inputs for the array, must be in ascending order
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }
    cout << "Your array: "<< endl;
    //Print the entered array
    for (int j = 0; j < size; j++){
        cout << array[j] << " ";
    }
    cout << "\nenter the value to search: "<< endl;
    cin >> num;
    int result = BinarySearch(array, left, right, num);
    
    if (result != -1) {
        cout << "Value found at index: " << result << endl;
    } else {
        cout << "Value not found in the array." << endl;
    }

    return 0;
}
