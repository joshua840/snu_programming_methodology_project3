SRC_DIR = '.'
CC = g++
COMPILER_FLAGS = -std=c++14 -Wall -O0 -g
# SRC_FILES = $(wildcard ${SRC_DIR}/*.cpp)
SRC_FILES = $(wildcard *.cpp)
BUILD_DIR = ./build/debug
OBJ_NAME = a.out

all:
	$(CC) $(COMPILER_FLAGS) $(SRC_FILES) -o $(BUILD_DIR)/$(OBJ_NAME)

