/**
    CSCI-222 Lab 2: People Mover System
    @main.cpp
    @author Keyur Maru
    @version 1.0 12/01/21
*/

#include <iostream>
#include "init_tracks.h"
#include "move_train.h"
#include "print_tracks.h"

int main() {
    Segment *segments[NUM_TRACKS][NUM_SEGMENTS];
    init_tracks(segments);

    for (int i = 0; i < SIM_TIME; i++) {
        print_tracks(segments);
        std::cout << std::endl << std::endl;
        move_train(segments);
    }
    return 0;
}


