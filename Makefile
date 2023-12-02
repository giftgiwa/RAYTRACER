CC      = g++
# CC		= clang++
TARGET  = raytracer
C_FILES = $(filter-out $(TARGET).cc, $(wildcard *.cc))

SRC_DIR = src
SRCS    = $(shell cat sourcefiles.txt)
# SRCS    := $(addprefix $(SRC_DIR)/, $(SRCS))

BUILD_DIR = build/src

OBJS = $(patsubst $(SRC_DIR)/%.cc, $(BUILD_DIR)/%.o, $(SRCS))

CFLAGS = -g -Wall -Werror -pedantic-errors -Wno-c++11-extensions
LDFLAGS =

.PHONY: all clean
all: $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cc | $(BUILD_DIR)
	$(CC) -std=c++11 $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CC) -std=c++11 $(CFLAGS) $^ -o $@ $(LDFLAGS) -lglfw

clean:
	find $(BUILD_DIR) -name '*.o' -type f -delete
	rm -f $(TARGET)
