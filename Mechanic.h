

#include "Person.h"

class Mechanic : public Person {
private:
    appointment* appointments; // an array of appointments
    int numAppointments;
    int counter;
public:
    Mechanic(); // default constructor 
    ~Mechanic(); // destructor to delete the dynamic array
    void addAppointment(int H, int M); // function to add an appointment to the array
    bool isAvailable(int Hours, int Mins) const; // function to check for the availablity of the mechanic
    void printInfo() const; // function to print the info of the mechanic
    void setnumAppointments(int n); // setter
};
