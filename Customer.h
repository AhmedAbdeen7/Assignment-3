

#include "Person.h"
using namespace std;
class Customer : public Person {
private:
    int mechanicID; // variable to store the Id of the mechanic assigned to the customer
    appointment C; // appointment of the customer
public:
   
    Customer(); // default constructor to initialize the data members
    void setMechanicID(int mechanicID); // setter
    int getMechanicID() const; // getter which is const to accommodate to the constant objects
    void setAppointment( int Hours, int minutes); // setter
    void printInfo() const; //print function
    bool operator<(const Customer& other) const; //overlooding the operaters to compare between different customers
    bool operator>(const Customer& other) const;
    bool operator==(const Customer& other) const;
    int gethour() const; // getter
    int getmin() const; // getter
    appointment getAppointment(); // getter
    
};

