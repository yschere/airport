#good luck

#compiler flags:
# -g: adds debugging info to exe file
# -Wall: turns on most compiler warnings
CC = g++
CFLAGS = -g -Wall
TARGET = a.out
default: $(TARGET)

$(TARGET): vehicle.o plane.o gse.o main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o plane.o gse.o vehicle.o

vehicle.o: vehicle.cpp vehicle.h
	$(CC) $(CFLAGS) -c vehicle.cpp

plane.o: plane.cpp plane.h vehicle.h
	$(CC) $(CFLAGS) -c plane.cpp

gse.o: gse.cpp gse.h vehicle.h
	$(CC) $(CFLAGS) -c gse.cpp

main.o: main.cpp plane.h vehicle.h gse.h
	$(CC) $(CFLAGS) -c main.cpp
	
clean:
	$(RM) $(TARGET) *.o *~
