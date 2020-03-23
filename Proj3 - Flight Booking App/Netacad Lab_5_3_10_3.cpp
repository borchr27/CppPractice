// Mitchell Borchers
// Lab: Netacad: Flight Booking System Part 3 - 5.3.10.3

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class FlightBooking {
    public:
        FlightBooking(int id, int capacity, int reserved);
        FlightBooking();
        void printStatus();
        int getId();
        int getCap();
        double getPercent();

        void cancel(int id, int n);
        void add(int id, int n);
        void del(int id);
        
    private:
        int id;
        int capacity;
        int reserved;
        double percent;
};


FlightBooking::FlightBooking(){
    // Empty constructor
    id = 0; capacity = 0; reserved = 0; percent = 0;
}

FlightBooking::FlightBooking(int id, int cap, int res = 0){
    // Constructor with reqd fields
    // Also is a setter function :|
    this -> id = id;
    capacity = cap;
    reserved = res;
}

int FlightBooking::getId(){
    return id;
}

int FlightBooking::getCap(){
    return capacity;
}

double FlightBooking::getPercent(){
    double percent = ((double) reserved / (double) capacity) * 100;
    return percent;
}

void FlightBooking::add(int id, int n){
    // adds n reservations to flight with spec'd id
    reserved += n;
    if (getPercent() <= 105 && getPercent() >= 0){
        printStatus();
    } else{
        cout << "Cannot perform this operation. Exceeds max reservations of 105%." << endl;
        reserved -= n;
    }
}

void FlightBooking::cancel(int id, int n){
    // cancels n reservations to flight with spec'd id
    reserved -= n;
    if (reserved < 0){
        reserved = 0;
        cout << "Cannot perfrom this operation. Reservations count can't be less than 0." << endl;
    } else {
        printStatus();
    }
}

void FlightBooking::del(int id){
    // 'deletes' flight with spec'd id (sets fields to 0, wont show up in 'show' command)
    cout << "Flight " << id << " has been deleted." << endl;
    this -> id = 0; capacity = 0; reserved = 0; percent = 0;
}

void FlightBooking::printStatus(){
    cout << "Flight " << id << " : " << reserved << '/' << capacity << " (" << fixed << setprecision(2) << getPercent() << "%)" << " seats reserved" << endl;
}

int main() {
    string command;     // user input string
    int n, id, cap, j;  // id is flight id, see def. for others below
    int count = 0;      // keeps track of total number of flights created
    FlightBooking booking[10];

    // user interaction while loop
    while (command != "quit") {
        n = 0;      // number of reservations to add or subtract (should be positive)
        cap = 0;    // capacity of flight
        j = 0;      // access variable for array 
        cout << "Would you like to create, add, cancel, or delete a reservation?" << endl; 
        cout << "Type [create], [add], [cancel], [delete], [quit] to exit, or [show] to see all flights." << endl;
        cin >> command;
        if (command == "create"){ // creates a flight with spec id and cap if 10 flights havent been created
            cin >> id;
            cin >> cap;
            if (count < 10){
                booking[count] = FlightBooking(id, cap, 0);
                booking[count].printStatus();
                count++;
            }
            else {cout << "Cannot perform this operation. There are already 10 flights booked." << endl;}      
        }
        else if (command == "add"){ // adds n reservations to flight with spec'd id
            cin >> id;
            cin >> n;
            while (j < 10){
                if (booking[j].getId() == id){
                    booking[j].add(id, n);
                }
                j++;
            }
        }
        else if (command == "cancel"){ // cancels n reservations to flight with spec'd id
            cin >> id;
            cin >> n;
            while (j < 10){
                if (booking[j].getId() == id){
                    booking[j].cancel(id, n);
                }
                j++;
            }       
        }
        else if (command == "delete"){ // deletes flight with spec'd id
            cin >> id;
            while (j < 10){
                if (booking[j].getId() == id){
                    booking[j].del(id);
                }
                j++;
            }       
        }
        else if (command == "quit"){ // obvi quits and closes the program
            cout << " ";
        }
        else if (command == "show"){ // shows all flights created
            while (j < 10){
                if (booking[j].getId() != 0){
                    booking[j].printStatus();    
                }
                j++;
            }
        }
        else {
            cout << "Cannot perform this operation. Invalid command." << endl;
        }
    }
    return 0;
}
