#include "Mechanic.h"

Mechanic::Mechanic() : Person(), numAppointments(0), counter(0) 
{
    appointments = new appointment[100];
    for (int i = 0;i < 100;i++)
    {
        appointments[i].hours =0 ;  
        appointments[i].mins =0;
    }
}


Mechanic::~Mechanic() 
{
    delete[] appointments;
    
}

void Mechanic::addAppointment(int H, int M) 
{ 
        
       appointments[counter].hours = H;
       appointments[counter].mins = M;
       counter = counter + 1;
        
    } 

bool Mechanic::isAvailable(int Hours, int Mins) const 
{
    for (int i = 0; i < 10; i++) {
    if (appointments[i].hours == Hours && appointments[i].mins == Mins) {
            return false;
        }
    }
    return true;
}

void Mechanic::printInfo() const 
{
    cout << "Mechanic " << name << " with ID " << id << " and age " << age << " has the following appointments:" << endl;
    for (int i = 0; i < numAppointments; i++) {
    cout << appointments[i].hours << ":" << appointments[i].mins << endl;
        }
}

 void Mechanic :: setnumAppointments(int n)
 {

  numAppointments = n;
 }
