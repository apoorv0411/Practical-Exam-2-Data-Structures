//NAME: APOORV JOSHI
//CLASS: CS 273-1
//INSTRUCTOR: MATTHEW BELL

#ifndef EMMY_H_
#define EMMY_H_

#include "invite.h"
#include "event.h"


class EmmyInvite: public Invite { 
    private: 
    Event *NewParty; //setting up a pointer
    std::list <std::string>::iterator it; 

    public: 
    EmmyInvite(Event *party, std::list <std::string>::iterator &me) {
        it = me;
        NewParty = party;
    } 

    void leave() { //This allows a guest to leave the party. 
        NewParty->remove(it); //Removing the person identified by the iterator
    }

};

#endif