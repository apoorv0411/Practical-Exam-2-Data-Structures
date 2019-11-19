//NAME: APOORV JOSHI
//CLASS: CS 273-1
//INSTRUCTOR: MATTHEW BELL

#ifndef GRAMMYINVITE_H_
#define GRAMMYINVITE_H_

#include "invite.h"
#include "event.h"
#include <iostream>

class GrammyInvite : public Invite {
    private:
    Event *NewParty; //Setting up a pointer
    std::list <std::string>::iterator it; //Iterator for the beginning of the container

    public: 

    //Constructor
    GrammyInvite(Event *party, std::list <std::string>::iterator &me) {
        it = me;
        NewParty = party;
    } 

    void leave() { //This allows a guest to leave the party. 
        NewParty->remove(it); //Removing the person identified by the iterator
    }

};
#endif
