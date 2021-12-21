//
// Created by nmls1 on 16/12/2021.
//

#include "bookingMenu.h"
#include "mainMenu.h"

BookingMenu::BookingMenu() {};

void BookingMenu::runBookingMenu(Passenger client, Flight flight) {
    Ticket ticket;
    int passportNum;
    srand(time(NULL));
    int numTickets, totalPrice, ccnum, secnum, seatsAvailable, countTickets;
    bool checkinLug;
    char c;
    ticket.readTickets();
    cout << flight.getNumfly();
    countTickets = ticket.countFlightTickets(flight.getNumfly());
    seatsAvailable = flight.getPlane().getCapapcity() - countTickets;
    cout << countTickets << endl;
    cout << seatsAvailable << endl;

    if(seatsAvailable == 0)
        cout << "This Flight is full";
    else {
        cout << "Insert your passport number: ";
        cin >> passportNum;
        client.setPassportNum(passportNum);
        cout << "Do you want to checkin your luggage? [y/n] ";
        cin >> c;
        switch (c) {
            case 'n':
                checkinLug = false;
                break;
            case 'y':
                checkinLug = true;
                break;
        }
        client.setCheckinBag(checkinLug);
        cout << "How many tickets do you want to buy: ";
        cin >> numTickets;
        if(numTickets > seatsAvailable)
            cout << "No seats available for that amount of tickets";
        else {
            totalPrice = flight.getBprice() * numTickets;
            cout << "Total Amount: " << totalPrice << "$\n";
            cout << "Insert you credit card number: ";
            cin >> ccnum;
            cout << "Insert your security number: ";
            cin >> secnum;
            for (int i = 0; i < numTickets; i++) {
                int num = ticket.generateTicketNum();
                string seat = ticket.generateSeatNum(flight.getPlane());
                cout << num;
                cout << seat;
                Flight flight1 = Flight(flight.getNumfly(), flight.getOrigin(), flight.getDestination());
                //check if ticket num already exists
                Ticket ticket1 = Ticket(num, seat, client, flight1);
                ticket.addTicket(ticket1);
            }
            cout << "     ************       \n";
            cout << " Transaction Completed\n";
            cout << "\n[1]    Check your ticket\n"
                 << "[0]    Exit\n";
            cin >> c;
            switch (c) {
                case '0':
                    exit(0);
                case '1':
                    ticket.display(client);
                    break;
            }
        }
    }
}
