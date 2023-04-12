#include <iostream>
#include <string>
using namespace std;

int main()
{
   string eventName; 
   double grossProfit, netProfit, amountPaid;
   int adultTickets, childTickets ;             // # of tickets sold


   cout << "Event Name: " << endl;
   getline (cin, eventName);
   cout << "Adults Tickets Sold: " << endl;
   cin >> adultTickets;
   cout << "Child Tickets Sold: " << endl;
   cin >> childTickets;

  double adultTicketCost = 30 * adultTickets;
  double childTicketCost = 20 * childTickets;
  grossProfit = adultTicketCost + childTicketCost; 
  netProfit = grossProfit * .40;
  amountPaid = grossProfit - netProfit;

   cout << "Gross Profit: $" << grossProfit << endl;
   cout << "Net Profit: $" << netProfit << endl;
   cout << "Amount Paid to Association: $" << amountPaid << endl;

    return 0;
}
// 40 % profit, adult ticket $30, child $20
