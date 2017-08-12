CC = g++

SRCS = sudokumatrix.cc solver.cc main.cc

CFLAGS= -std=gnu++11

PROG = sudokusolver

LIBS =

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)
