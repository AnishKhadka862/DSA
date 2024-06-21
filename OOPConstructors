
// OOP, classes, Default Constructor, Parameterized Constructor,
// Copy Constructor, Destructor

#include <iostream>
#include <string>
using namespace std;

class Car {
  private:
  string Model;
  int Year;
  int Mileage;
  double Price;
    
  public:
  //Default Constructor, called every time by the compiler even if its not implemented
  Car(){
      cout << "Default Constructor called" << endl;
      Model = "";
      Year = 0;
      Mileage = 0;
      Price = 0;
  }
  
  //Parameterized Constructor
  Car(string mod, int y, int mil, double p){
      cout << "Parameterized Constructor called" << endl;
      Model = mod;
      Year = y;
      Mileage = mil;
      Price = p;
  }
  
  // Copy Constructor
  Car (Car &obj){
      cout << "Copy Constructor called " << endl;
      Model = obj.Model;
      Year = obj.Year;
      Mileage = obj.Mileage;
      Price = obj.Price;
  }
  
  void setDetails(string mo, int y, int mi, int p){
      cout << "setter method activated successfully" << endl;
      Model = mo;
      Year = y;
      Mileage = mi;
      Price = p;
  }
  
  string getModel(){
      cout << "getter method activate successfully" << endl;
      return Model;
  }
  
  ~Car(){
      cout << "Destructor Called manually"<< endl;
  }
  
  void DisplayDetails(){
      cout << Model<< " " << Year << " " << Mileage << " " << Price << endl;
  }
  
};

int main()
{
    Car car1,car2;
    Car car3("Honda", 2010, 28, 8000);
    Car car4 = car1;
    
    car2.setDetails("Hyundai", 2016, 36, 15000);
    cout << car2.getModel() << endl; 
    
    car1.DisplayDetails();
    car3.DisplayDetails();
    car4.DisplayDetails();
    car2.DisplayDetails();

    return 0;
}
