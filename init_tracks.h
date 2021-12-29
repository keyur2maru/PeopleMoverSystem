/**
    CSCI-222 Lab 2: People Mover System
    @init_tracks.h
    @author Keyur Maru
    @version 1.0 12/01/21
*/
#ifndef INIT_TRACKS_H
#define INIT_TRACKS_H

#ifndef MATRIX_H
#define MATRIX_H

#include "segment.h"

void init_tracks(struct Segment *segments[NUM_TRACKS][NUM_SEGMENTS]);
#endif //MATRIX_H
#endif //INIT_TRACKS_H
