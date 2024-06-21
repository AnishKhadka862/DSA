#include <iostream>
using namespace std;
int main()
{   
    int n = 0;
    cin >> n;
    
    /*
        |   *   
        |  * *  
        | * * *
        
    */
    
    // half pyramid 1, 2,2 , 3,3,3 , 4,4,4,4 , 5,5,5,5,5
    
    for (int i = n ; i >= 1; i--){
        
        for (int k = i; k>=1; k--){
            cout << "x";
        }
        cout << endl;
    }    

    return 0;
}
