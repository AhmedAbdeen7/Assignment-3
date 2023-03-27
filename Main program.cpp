#include <iostream>
#include "Customer.cpp"
#include "Mechanic.cpp"
#include "Q.cpp"
#include "Person.cpp"
using namespace std;
int main() {
  int num1, num2;
cout << "Enter the number of mechanics and customers "; // prompting the user to enter the number of customers and mechanics
cin >> num1 >> num2;

    Mechanic* mechanics = new Mechanic [num2]; //creating an array of mechanics 
    for (int i = 0; i < num2; i++) { // letting the user enter their data
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


        Customer* customers = new Customer[num1]; //creating an array of customers
    for (int i = 0; i < num1; i++) {// prompting the user to enter their data
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
    


for (int i = 0; i < num1; i++)  
{
    bool assigned = false;
    for (int j = 0; j < num2 && !assigned; j++) {
        if (mechanics[j].isAvailable(customers[i].getappoint().hours, customers[i].getappoint().mins)) 
        {
            mechanics[j].addAppointment(customers[i].getappoint().hours, customers[i].getappoint().mins);
            customers[i].setMechanicID(mechanics[j].getId());
            assigned = true;
        }
    }
    if (!assigned) 
      cout << "Couldn't find a mechanic for customer " << customers[i].getName();
       
     
}



for (int i = 0; i < num1-1;i++) // sorting the customers
{   
   int min_index = i;
       for (int j = i+1;i < num1;j++)
       {
        if (customers[j] < customers[min_index])
         min_index = j;
       }    
       Customer temp =  customers[i];
       customers[i] = customers[min_index];
       customers[min_index] = temp;
}

Queue <Customer> queue; 


for (int i = 0;i < num1;i++) // adding the customers to the queue
{
    queue.enqueue(customers[i]);
}


cout << "Appointments in the queue:" <<endl;
while (!queue.isEmpty())  // couting the customers in order of their appointments
{
 cout << "Customer " << queue.dequeue().getName() << "is with the mechanic " << queue.dequeue().getMechanicID();

}





return 0;
}

