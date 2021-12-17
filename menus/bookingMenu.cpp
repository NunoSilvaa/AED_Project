//
// Created by nmls1 on 16/12/2021.
//

#include "bookingMenu.h"
#include "mainMenu.h"

BookingMenu::BookingMenu() {};

void BookingMenu::runBookingMenu(Passenger client, Flight flight) {
    Ticket ticket;
    int passportNum;
    int numtickets, totalPrice, ccnum, secnum;
    cout << "Insert your passport number: ";
    cin >> passportNum;
    client.setPassportNum(passportNum);
    cout << "How many tickets do you want to buy: ";
    cin >> numtickets;
    totalPrice = flight.getBprice()*numtickets;
    cout << "Total Amount: " << totalPrice << "$\n";
    //ticket.display();
    cout << "Insert you credit card number: ";
    cin >> ccnum;
    cout << "Insert your security number: ";
    cin >> secnum;
    for(int i = 0; i < numtickets; i++){
        int num = ticket.generateTicketNum();
        //check if ticket num already exists
        Ticket ticket1 = Ticket(num, 1, client, flight);
        ticket.addTicket(ticket1);
    }
    cout << "     ************       \n";
    cout << " Transaction Completed\n";
    char c;
    cout << "\n[1]    Check your ticket\n"
         << "[0]    Exit";
    cin >> c;
    switch (c) {
        case '0':
            exit(0);
        case'1':
            ticket.display(client);
            break;
    }
}