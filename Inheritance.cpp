#include <iostream>
#include <string>
using namespace std;

class BaseClass{
private:
    string Name;
public:
    int Height;
    int Width;
    
    BaseClass(int h, int w){
        Height = h;
        Width = w;
    };

    void setHeight(int h){
        Height = h;
    }

    void setWidth(int w){
        Width = w;
    }

    int getHeight(){
        return Height;
    }

    int getWidth(){
        return Width;
    }
};

class ChildClass : public BaseClass{
public:
    ChildClass(int h, int w) : BaseClass(h, w){
    };
    
    int Area(){ // corrected function definition
        return getHeight() * getWidth();
    }
};

int main()
{
    ChildClass A1(5,4); // corrected object creation, passing height and width
    cout << A1.Area() << endl; // corrected function call

    return 0;
}
