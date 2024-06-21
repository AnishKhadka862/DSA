// Function over-riding process
// works under inheritance

#include <iostream>
using namespace std;

class MyBase{
    private:
    int height;
    int width;
    public:
    MyBase(){
        height = 0;
        width = 0;
    }
    void setHeight(int h){
        height = h;
    }
    int getHeight(){
        return height;
    }
    
    void setWidth(int w){
        width = w;
    }
    int getwidth(){
        return width;
    }
};

class MyDerived : public MyBase{
    public:
    MyDerived(int h, int w): MyBase(){
        setHeight(h);
        setWidth(w);
    };
    int getArea (){
        return getHeight() * getwidth() ;
    }
};

int main()
{
    MyDerived myD(2,4);
    cout << myD.getArea() << endl;

    return 0;
}
