//NAME: APOORV JOSHI
//CLASS: CS 273-2
//INSTRUCTOR: MATTHEW BELL

#ifndef EMMY_H_
#define EMMY_H_

#include "emmyinvite.h"
#include "event.h"

#include <iostream>
#include <string>
#include <list>


class Emmy : public Event {
    private:

    std::list <std::string> room; //List of the guests attending the party
    std::string g_host; //Host for this event
    std::string g_name; //Name of the event

    public: 
    Emmy() //Constructor to set the name of the event and the host
    g_name = "Emmy Awards";
    g_host = "Hasan Minhaj";
}

Invite *add(std::string name) {
    room.push_front(name); //Adding the name to the front of the list

    std::list<std::string>::iterator nameIt = room.begin(); //Getting an iterator to the front of the room
    Invite* invitation = new EmmyInvite(this, nameIt); //Creating an invitation
    return invitation;
}

void list() { //method to show all the guests
    std::list<std::string>::iterator z; 
    for (z = room.begin(); z != room.end(); z++) {
        std::cout << *z;
        std::endl;
    } 

//Removing a guest from the event
    void remove(std::list <std::string>::iterator &it) {
        room.erase(it);
    }

};
#endif