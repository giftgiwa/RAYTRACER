CC      = g++
TARGET  = raytracer
C_FILES = $(filter-out $(TARGET).cc, $(wildcard *.cc))

SRC_DIR = src
SRCS    = $(shell cat sourcefiles.txt)
SRCS    := $(addprefix $(SRC_DIR)/, $(SRCS))

BUILD_DIR = build

OBJS = $(patsubst $(SRC_DIR)/%.cc, $(BUILD_DIR)/%.o, $(SRCS))

CFLAGS = -g -Wall -Werror -pedantic-errors
LDFLAGS =

.PHONY: all clean
all: $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cc | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	find $(BUILD_DIR) -name '*.o' -type f -delete
	rm -f $(TARGET)
