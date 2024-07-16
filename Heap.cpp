#include <iostream>
#include <math.h>
using namespace std;

class Minheap{
    public:
    int *heapArr;
    int capacity;
    int heapSize;
    
    Minheap(int cap){
        capacity = cap;
        heapSize = 0;
        heapArr = new int[cap];
    }
    
    void linearSearch(int val){
        bool found = false;
        int foundIndex = 0;
        for (int i = 0; i < heapSize; i++){
            if (heapArr[i] == val){
                found = true;
                foundIndex = i;
                cout << "value Found!!!" << endl; 
            }
            }
        if (!found){
            cout << "value NOT Found!!!" << endl;
        }
            
    }
    
    
    int parent ( int i){
        return ((i - 1) / 2);
    }
    
    int left (int i){
        return ((2*i)+1);
    }
    
    int right (int i){
        return ((2*i)+2);
    }
    
    void swap (int &x, int &y){
        int temp = x;
        x = y;
        y = temp;
    }
    
    void insertKey(int v){
        if (heapSize == capacity){
            return;
        }
        heapSize++;
        int i = heapSize - 1;
        heapArr[i] = v;
        while ( i != 0 && heapArr[parent(i)] > heapArr[i]){
            swap ( heapArr[parent(i)], heapArr[i]);
            i = parent(i);
        }
        cout << "value inserted in heap: " << v << endl;
    }
    
    void heapify (int i){
        int l = left(i);
        int r = right(i);
        int smallest = i;
        
        if (l < heapSize && heapArr[l] < heapArr[smallest]){
            smallest = l;
        }
        if (r < heapSize && heapArr[r] < heapArr[smallest]){
            smallest = r;
        }
        if (smallest != i){
            swap (heapArr[i] , heapArr[smallest]);
            heapify(smallest);
        }
        
    }
    
    int extractMin(){
        if (heapSize <= 0){
            cout << "heap is empty" << endl;
            return -1;
        }
        if (heapSize == 1){
            heapSize--;
            return heapArr[heapSize];
        }
        int root = heapArr[0];
        heapArr[0] = heapArr[heapSize - 1];
        heapSize--;
        heapify(0);
        return root;
    }
    
    void deleteKey(int v){
        int foundIndex = -1;
        for (int i = 0; i < heapSize; i++){
            if (heapArr[i] == v){
                foundIndex = i;
                break;
            }
        }
        heapArr[foundIndex] = heapArr[heapSize - 1];
        heapSize--;
        heapify(0);
    }
    
    void print(){
        cout << "printing the values of heap: " << endl;
        for (int i = 0; i < heapSize; i++){
            cout << heapArr[i] << " ";
        }
    }
};

int main()
{
    cout << "enter the capacity for your heap: " << endl;
    int cap;
    cin >> cap;
    Minheap heap1(cap);
    cout << "heap created of size: " << cap << endl;
    
    //linear search heap
    heap1.insertKey(5);
    heap1.insertKey(15);
    heap1.insertKey(25);
    heap1.insertKey(30);
    heap1.insertKey(45);
    heap1.linearSearch(7);
    cout << "print our heap elements: "<< endl;
    heap1.print();
    cout << "\nRemoving the min element "<< endl;
    heap1.extractMin();
    cout << "extractMin() function executed: " << endl;
    heap1.print();
    heap1.deleteKey(25);
    cout << "\ndelete key operation performed "<< endl;
    heap1.print();
    
    
    return 0;
}
