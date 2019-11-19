
//NAME: APOORV JOSHI
//CLASS: CS 273-2
//INSTRUCTOR: MATTHEW BELL

#ifndef INVITE_H_
#define INVITE_H_

#include <iostream>
#include <list>


class Invite {
    public: 
    Invite() {} //Constructor
    virtual void leave() = 0; //Allowing a guest to leave
}; 
#endif