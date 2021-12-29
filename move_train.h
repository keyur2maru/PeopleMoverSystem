/**
    CSCI-222 Lab 2: People Mover System
    @move_train.h
    @author Keyur Maru
    @version 1.0 12/01/21
*/
#ifndef MOVE_TRAIN_H
#define MOVE_TRAIN_H

#include "segment.h"

void move_train(struct Segment *segments[NUM_TRACKS][NUM_SEGMENTS]);

#endif //MOVE_TRAIN_H
