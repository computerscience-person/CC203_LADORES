#include <iostream>

using std::cin, std::cout, std::string;
typedef unsigned long long u64;
typedef unsigned char u8;

class Ticket {
private:
  u64 ticketPrice;

public:
  string passenger, departure, arrival;
  u64 flightNumber; // Ticket price in in cents (or smallest
                    // equivalent monetary unit).
  Ticket(string passengerInput, string departureInput, string arrivalInput,
         u64 flightNumberInput, u64 ticketPriceInput)
      : passenger(passengerInput), departure(departureInput),
        arrival(arrivalInput), flightNumber(flightNumberInput),
        ticketPrice(ticketPriceInput) {}
  auto getPrice() -> u64 { return ticketPrice; }
};

class BusinessClassTicket : public Ticket {
public:
  u8 seatNumber;
  BusinessClassTicket(string passengerInput, string departureInput,
                      string arrivalInput, u64 flightNumberInput,
                      u64 ticketPriceInput, u8 seatNumberInput)
      : Ticket(passengerInput, departureInput, arrivalInput, flightNumberInput,
               ticketPriceInput),
        seatNumber(seatNumberInput) {}
  auto getPrice() -> u64 { return Ticket::getPrice() * 1.1; }
};

auto main() -> int {
  auto ticket1 = Ticket("Oliver", "Iloilo", "Manila", 5349, 150000);
  cout << "Iloilo to Manila Price (in centavos): " << ticket1.getPrice()
       << "\n";
  auto ticket2 =
      BusinessClassTicket("Deyb", "Davao", "Batangas", 15438, 150000, 32);
  cout << "Davao to Batangas Business Price (in centavos): "
       << ticket2.getPrice() << "\n";
  cout << "Davao to Batangas Price (in centavos): "
       << ticket2.Ticket::getPrice() << "\n";
}
