#include "Person.h"
#include "Customer.h"
#include <string>
using namespace std;

Customer::Customer() : Person(), mechanicID(0)
{
    setAppointment(0, 0); 
}

void Customer::setMechanicID(int mechanicID) {
    this->mechanicID = mechanicID;
}

int Customer::getMechanicID() const {
    return mechanicID;
}

void Customer::setAppointment(int Hours, int minutes) {
    C.hours = Hours;
    C.mins = minutes;
}


void Customer::printInfo() const {
    cout << "Mr./Mrs. " << name << " has an appointment at " << C.hours << ":" << C.mins
        << " with mechanic " << mechanicID << endl;
}

bool Customer::operator<(const Customer& other) const {
      
      if (C.hours == other.C.hours) 
    {
      return C.mins < other.C.mins;
    }
    return C.hours < other.C.hours;
 
}

bool Customer::operator>(const Customer& other) const {
 
    if (C.hours == other.C.hours) 
    {
      return C.mins > other.C.mins;
    }
    return C.hours > other.C.hours;


}

bool Customer::operator==(const Customer& other) const {
if (C.hours == other.C.hours && C.mins == other.C.mins)
  return true;
  else
  return false;
}
int Customer :: gethour() const
    {
        return C.hours;
    }
int Customer :: getmin() const
    {
        return C.mins;
    }
appointment Customer :: getAppointment()
{
    return C;
}