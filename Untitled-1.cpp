#include <iostream>
#include "Customer.cpp"
#include "Mechanic.cpp"
#include "Q.cpp"
#include "Person.cpp"

int main() {
  int num1, num2;
cout << "Enter the number of mechanics and customers ";
cin >> num1 >> num2;

    Mechanic* mechanics = new Mechanic [num2];
    for (int i = 0; i < num2; i++) {
        string name;
        int  age, n, id;
        cout << "Enter mechanic " << i+1 << " name: ";
        cin >> name;
        mechanics[i].setName(name);
        cout << "Enter mechanic " << i+1 << " ID: ";
        cin >> id;
        mechanics[i].setId(id);
        cout << "Enter mechanic " << i+1 << " age: ";
        cin >> age;
        mechanics[i].setAge(age);
        cout << "Enter the number of appointments for mechanic " << i+1 << ": ";
        cin >> n;
        mechanics[i].setnumAppointments(n);
    }


        Customer* customers = new Customer[num1];
    for (int i = 0; i < num1; i++) {
        string name;
        int age, hours, mins, id, mechanicID;
        cout << "Enter customer " << i+1 << " name: ";
        cin >> name;
        customers[i].setName(name);
        cout << "Enter customer " << i+1 << " ID: ";
        cin >> id;
        customers[i].setId(id);
        cout << "Enter customer " << i+1 << " age: ";
        cin >> age;
        customers[i].setAge(age);
        cout << "Enter appointment time for customer " << i+1 << " (hh:mm): ";
        cin >> hours >> mins;
        customers[i].setAppointment(hours, mins);
    }

Queue<Customer> queue;
for (int i = 0; i < num1; i++) {
    bool assigned = false;
    for (int j = 0; j < num2; j++) {
        if (mechanics[j].getAge() != 0) {
            bool available = true;
            for (int k = 0; k < i; k++) {
                if (customers[k].getMechanicID() == j && customers[k].getAppointment().hours == customers[i].getAppointment()) {
                    available = false;
                    break;
                }
            }
            if (available) {
                customers[i].setMechanicID(j);
                mechanics[j].setAge(0);
                assigned = true;
                break;
            }
        }
    }
    if (!assigned) {
        cout << "No mechanics available for customer " << customers[i].getName() << " at " << customers[i].getAppointment().hours << ":" << customers[i].getAppointment().mins << endl;
    }
    queue.enqueue(customers[i]);
}



delete [] mechanics;
delete [] customers;
return 0;
}
// Add appointments to mechanics
/*
for (int i = 0;i < num1;i++)
{ 
    
    if (mechanics[i].isAvailable(customers[i].C.hours, customers[i].C.mins))
    {
    mechanics[i].addAppointment(customers[i].C);
    customers[i].setMechanicID(mechanics[i].getId());
    }
    else
    {
        for (int j = i;j <num1;j++)
        {
            if (mechanics[i].isAvailable(customers[i].C.hours, customers[i].C.mins))
            mechanics[j].addAppointment(customers[i].C);
            customers[i].setMechanicID(mechanics[j].getId());

        }
    }
}*/