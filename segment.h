/**
    CSCI-222 Lab 2: People Mover System
    @segment.h
    @author Keyur Maru
    @version 1.0 12/01/21
*/
#ifndef SEGMENT_H
#define SEGMENT_H

#define NUM_SEGMENTS 10
#define NUM_TRACKS 2
#define NUM_TRAIN 4
#define SIM_TIME 50

struct Segment {
    int train;                                                                      // if 1 = ccw, if 0 = none, if 1 = cw
    Segment *next, *prev, *next_adj, *prev_adj;                                     // next, prev = same track, next_adj, prev_adj = next track
};

#endif //SEGMENT_H
