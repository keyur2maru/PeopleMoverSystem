/**
    CSCI-222 Lab 2: People Mover System
    @move_train.cpp
    @author Keyur Maru
    @version 1.0 12/01/21
*/

#include "move_train.h"

void move_train(struct Segment *segments[NUM_TRACKS][NUM_SEGMENTS]) {
    for (int i = 0; i < NUM_TRACKS; i++) {
        for (int j = 0; j < NUM_SEGMENTS; j++) {
            struct Segment *temp_segment = segments[i][j];
            if (temp_segment->train == 1)                                         //handle cw
            {
                if (temp_segment->next->train == 0) {
                    temp_segment->train = 0;
                    temp_segment->next->train = 2;
                } else if (temp_segment->next_adj->train == 0) {
                    temp_segment->train = 0;
                    temp_segment->next_adj->train = 2;
                }
            } else if (temp_segment->train == -1) {                                 //handle ccw
                if (temp_segment->prev->train == 0) {
                    temp_segment->train = 0;
                    temp_segment->prev->train = -2;
                } else if (temp_segment->prev_adj->train == 0) {
                    temp_segment->train = 0;
                    temp_segment->prev_adj->train = -2;
                }
            }
        }
    }
    //reset all 2->1 and -2->-1
    for (int i = 0; i < NUM_TRACKS; i++) {
        for (int j = 0; j < NUM_SEGMENTS; j++) {
            if (segments[i][j] -> train == 2 || segments[i][j] -> train == -2) {
                segments[i][j] -> train /= 2;
            }
        }
    }
}

