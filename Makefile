#objects
OBJS = source/*.cpp
#compiler
CC = g++
#linkers
LINKERS = -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
all : $(OBJS)
	$(CC) $(OBJS) $(LINKERS) -o the\ hunt\ for\ red\ october && ./the\ hunt\ for\ red\ october
