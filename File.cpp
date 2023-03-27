#include <iostream>
#include "Customer.cpp"
#include "Mechanic.cpp"
#include "Q.cpp"
#include "Person.cpp"
#include <fstream>
using namespace std;


int main()
{
    string name;
    int hours, minutes;
    int id, age, n, num1, num2;
 ifstream infile("File1.txt");
 Mechanic mechanic;
 infile >> name >> age >> id >> n;
 mechanic.setAge(age);
  mechanic.setName(name);
  mechanic.setId(id);
 mechanic.setnumAppointments(n);
 for (int i = 0; i < n;i++)
 {
    infile >> hours >> minutes;
    mechanic.addAppointment(hours, minutes);
 }
 infile.close();
 ifstream infile1("File2.txt");
 int id2, age2, H, M;
 string name2;
 Customer customer;
 infile1 >> name2 >> age2 >> id2;
 infile1 >> H >> M;
 customer.setAppointment(H, M);
  infile1.close();
    bool assigned = false;
        if (mechanic.isAvailable(customer.getappoint().hours, customer.getappoint().mins)) 
        {
            mechanic.addAppointment(customer.getappoint().hours, customer.getappoint().mins);
            customer.setMechanicID(mechanic.getId());
            assigned = true;
        }
    
    if (!assigned) 
      cout << "Couldn't find a mechanic for customer " << customer.getName();



return 0;
}