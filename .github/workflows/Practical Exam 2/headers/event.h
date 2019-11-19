//NAME: APOORV JOSHI
//CLASS: CS 273-1
//INSTRUCTOR: MATTHEW BELL

#ifndef EVENT_H_
#define EVENT_H_

#include "invite.h"
#include <iostream>

class Event {
   private:
   std::list <std::string> room; //This list contains all the guests invited and going to the party

   public: 
   Event() //Constructor
   virtual Invite* add(std::string name) = 0; //Adding guests to the party
   virtual void list() = 0; //Listing everyone who are present at the party
   virtual void remove(std::list <std::string>::iterator &it) = 0; //Removing the specific entry for the guest who exits the party
};

#endif
