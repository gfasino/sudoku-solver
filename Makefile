CC = g++

SRCS = sudokumatrix.cc solver.cc main.cc

CFLAGS= -std=gnu++11

PROG = skusolve

#OPENCV = `pkg-config opencv --cflags --libs`
#LIBS = $(OPENCV) -lpthread

LIBS =

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)
