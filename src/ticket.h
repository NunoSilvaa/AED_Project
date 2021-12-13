//
// Created by nmls1 on 05/12/2021.
//

#ifndef AIRPORT_TICKET_H
#define AIRPORT_TICKET_H

using namespace std;

class Ticket{
private:
    int price;
    int num;
public:
    Ticket(int num, int price);

    int getNum() const;
    int getPrice() const;

    void setNum(int num);
    void setPrice(int price);
};

#endif //AIRPORT_TICKET_H
