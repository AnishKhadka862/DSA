// Operator overloading
// ( 4 kg , 23 g) + ( 3 kg , 46 g) = 7 kg , 69 g 
#include <iostream>
using namespace std;

class AddMass{
    
    private:
    int kilogram;
    int grams;
    
    public:
    AddMass(){
        kilogram = 0;
        grams = 0;
    }
    AddMass (int kg, int g) {
        kilogram = kg;
        grams = g;
    }
    void print1(){
        cout << kilogram << " kilograms and " << grams << " grams. " << endl;
    }
    // Operator overloading implementation
    AddMass operator + ( AddMass mass ){
        AddMass Sum;
        Sum.kilogram = kilogram + mass.kilogram;
        Sum.grams = grams + mass.grams;
        return Sum;
    }
    
};

int main()
{
    AddMass m1(4,23);
    AddMass m2(3,46);
    AddMass m3(2,21);
    AddMass mSum;
    
    mSum = m1 + m2 + m3;
    mSum.print1();

    return 0;
}
