#include <iostream>
using namespace std;
class MovieTicket
{
    string movieName;
    int seatNumber;
    int ticketPrice;
    bool isBooked;

public:
    MovieTicket();
    MovieTicket(string m);
};
