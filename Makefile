# compiler
CC = gcc
CFLAGS = -Wall -Wextra -g

SRC_DIRS = window textinput
TARGET = uktub

SRCS = main.c $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))

all:
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) -lncurses

clean: rm -f $(TARGET)

.PHONY: all clean
