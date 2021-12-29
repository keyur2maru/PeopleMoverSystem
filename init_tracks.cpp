/**
    CSCI-222 Lab 2: People Mover System
    @init_tracks.cpp
    @author Keyur Maru
    @version 1.0 12/01/21
*/
#include <ctime>
#include <string>
#include "init_tracks.h"

void init_tracks(struct Segment *segments[NUM_TRACKS][NUM_SEGMENTS]) {
    //allocate memory for the track segments
    for (int i = 0; i < NUM_TRACKS; i++)                                            //allocate mem for outer track segment
    {
        for (int j = 0; j < NUM_SEGMENTS; j++)                                      //allocate mem for inner track segment
        {
            segments[i][j] = new Segment;
        }
    }
    srand(time(0));

    //connect the segments
    for (int i = 0; i < NUM_TRACKS; i++)
    {
        for (int j = 0; j < NUM_SEGMENTS; j++)
        {
            int knext, kprev;
            knext = (j + 1) % NUM_SEGMENTS;
            kprev = (j - 1 + NUM_SEGMENTS) % NUM_SEGMENTS;
            segments[i][j] -> next = segments[i][knext];                            //pointer to next
            segments[i][j] -> prev = segments[i][kprev];                            //pointer to previous
            segments[i][j] -> next_adj = segments[NUM_TRACKS - 1 - i][knext];       //pointer to adjacent next
            segments[i][j] -> prev_adj = segments[NUM_TRACKS - 1 - i][kprev];       //pointer to adjacent previous
        }
    }

    //init train in each segment
    for (int i = 0; i < NUM_TRACKS; i++)
    {
        for (int j = 0; j < NUM_SEGMENTS; j++)
        {
            segments[i][j] -> train = 0;
        }
    }
    //randomly place four trains
    int n = 0;                                                                      //keep track of active train
    while (n < NUM_TRAIN)
    {
        int t, s, d;                                                                // t = track , s = segment, d = direction
        t = rand() % NUM_TRACKS;
        s = rand() % NUM_SEGMENTS;
        d = (rand() % 2) * 2 - 1;
        if (segments[t][s] -> train == 0)
        {
            segments[t][s] -> train = d;
            n++;
        }
    }
}
