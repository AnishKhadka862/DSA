// Implementation of friend function

#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    int ID;
    string Name;
    
    public:
    //Default Constructor
    Student(){
        ID = 0;
        Name = "";
    }
    // setter and getters
    void setId(int id){
        ID = id;
    }
    void setName(string name){
        Name = name;
    }
    int getId(){
        return ID;
    }
    string getName(){
        return Name;
    }
    
    friend void Changeid(Student &s1); // friend function implementation, pass by refrence
    friend void ChangeName(Student &s1);
    
    // Manual Destructor
    ~Student(){
    }
};

// friend function implementation in independent function
// friend function outside class can still access the private and protectd data members from the class
void Changeid(Student &s1){
    s1.ID = s1.ID+5;
}
void ChangeName(Student &s1){
    s1.Name = "Anish Khadka";
}
int main()
{
    Student s2;
    s2.setId(22);
    s2.setName("Rajesh Hamal");
    cout << s2.getId()<< endl;
    cout << s2.getName() << endl;
    //friend function called
    Changeid (s2);
    ChangeName(s2);
    cout << s2.getId() << endl;
    cout << s2.getName() << endl;
    

    return 0;
}
