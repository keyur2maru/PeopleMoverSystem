/**
    CSCI-222 Lab 2: People Mover System
    @print_tracks.cpp
    @author Keyur Maru
    @version 1.0 12/01/21
*/

#include <iostream>
#include "print_tracks.h"

void print_tracks(struct Segment *segments[NUM_TRACKS][NUM_SEGMENTS]) {
    std::cout << "+--";                                                              //upper-left corner
    //print top track
    for (int i = 0; i < NUM_SEGMENTS / 2; i++) {
        if (segments[0][i] -> train == 0) {                                     //if train not present, print outer track
            std::cout << "---";
        }
        else if (segments[0][i] -> train == 1) {                                //if train present cw, print outer track
            std::cout << "->-";
        }
        else                                                                    //if train present ccw, print outer track
            std::cout << "-<-";
    }

    std::cout << "--+" << std::endl;                                                      //upper-right corner
    std::cout << "|   x  x  x  x  x   |" << std::endl;                                    //upper segments
    std::cout << "|  ";                                                              //left vertical border

    for (int i = 0; i < NUM_SEGMENTS / 2; i++) {
        if (segments[1][i] -> train == 0) {                                     //if train not present, print inner track
            std::cout << "---";
        }
        else if (segments[1][i] -> train == 1) {                                //if train present cw, print inner track
            std::cout << "->-";
        }
        else std::cout << "-<-";                                                     //if train present ccw, print inner track
    }

    std::cout << "  |" << std::endl;                                                      //right vertical border
    std::cout << "|  |             |  |" << std::endl;                                    //left and right vertical border for inner loop


    std::cout << "|  ";                                                              //left vertical border
    for (int i = NUM_SEGMENTS / 2; i < NUM_SEGMENTS; i++) {
        if (segments[1][i] -> train == 0) {                                     //if train not present, print inner track
            std::cout << "---";
        }
        else if (segments[1][i] -> train == 1) {                                //if train present, print inner track
            std::cout << "->-";
        }
        else std::cout << "-<-";                                                     //if train present, print inner track
    }

    std::cout << "  |" << std::endl;
    std::cout << "|   x  x  x  x  x   |" << std::endl;                                    //lower segments
    std::cout << "+--";                                                              //lower left corner

    for (int i = NUM_SEGMENTS / 2; i < NUM_SEGMENTS; i++) {
        if (segments[0][i] -> train == 0) {                                     //if train not present, print outer track
            std::cout << "---";
        }
        else if (segments[0][i] -> train == 1) {                                //if train present cw, print outer track
            std::cout << "->-";
        }
        else std::cout << "-<-";                                                     //if train present ccw, print outer track
    }
    std::cout << "--+" << std::endl;                                                      //lower right corner
}
