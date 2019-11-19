//NAME: APOORV JOSHI
//CLASS: CS 273-2
//INSTRUCTOR: MATTHEW BELL

#include "emmy.h"
#include "grammy.h"
#include <iostream>
#include <vector>

using namespace std;
int main() {
    cout << "WELCOME TO THE PRESTIGIOUS AWARD EVENT" << endl;

    string partyA = "Emmy";

    Emmy emmy_party;
    vector <Invite*> e_ticket;

    cout << "FOR EMMYS, THE GUESTS ARE AS FOLLOWS: " << endl;
    e_ticket.push_back(emmy_party.add("Leonardo DiCaprio"));
    e_ticket.push_back(emmy_party.add("Matt Damon"));
    e_ticket.push_back(emmy_party.add("Dev Patel"));
    e_ticket.push_back(emmy_party.add("Emma Stone"));
    e_ticket.push_back(emmy_party.add("Dwayne Johnson"));
    e_ticket.push_back(emmy_party.add("Tom Cruise"));
    e_ticket.push_back(emmy_party.add("Al Pacino"));

    emmy_party.list();
    cout << endl;

    cout <<"Matt Damon has to leave" << endl;
    cout << "Therefore here is the new list: " << endl;
    e_ticket[1]->leave(); 
    emmy_party.list();

    

    cout << "This was the emmys";

    string partyB = "Grammys";

    Grammy grammy_party;
    vector<Invite*> g_ticket;

    cout << "FOR GRAMMYS, THE GUESTS ARE AS FOLLOWS: " << endl;
    g_ticket.push_back(grammy_party.add("Coldplay"));
    g_ticket.push_back(grammy_party.add("NF"));
    g_ticket.push_back(grammy_party.add("Louis Armstrong"));
    g_ticket.push_back(grammy_party.add("Rihanna"));
    g_ticket.push_back(grammy_party.add("Avicii"));
    g_ticket.push_back(grammy_party.add("The Weeknd"));
    g_ticket.push_back(grammy_party.add("U2"));

    grammy_party.list(); 
    cout << endl;

    cout << "Avicii has to leave" << endl;
    cout << "Therefore here is the new list: " << endl;
    g_ticket[5]->leave();
    grammy_party.list();

    return 0;



}