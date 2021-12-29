main: main.o init_tracks.o move_train.o print_tracks.o
	rm main.o
	rm init_tracks.o
	rm move_train.o
	rm print_tracks.o
	g++ -c main.cpp init_tracks.cpp move_train.cpp print_tracks.cpp segment.h
	g++ -o main main.o init_tracks.o move_train.o print_tracks.o
clean:
	rm *.o main

