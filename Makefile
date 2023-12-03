CPP		= g++
# CC		= clang++
TARGET  = raytracer
C_FILES = $(filter-out $(TARGET).cc, $(wildcard *.cc))

SRC_DIR = src
SRCS    = $(shell cat sourcefiles.txt)
# SRCS    := $(addprefix $(SRC_DIR)/, $(SRCS))

BUILD_DIR = build/src

OBJS = $(patsubst $(SRC_DIR)/%.cc, $(BUILD_DIR)/%.o, $(SRCS))
OBJS += $(BUILD_DIR)/glad.o
CFLAGS = -g -Wall -Werror -pedantic-errors -Wno-c++11-extensions
IFLAGS = -Iglad/include
LDFLAGS = -lglfw

.PHONY: all clean
all: $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cc | $(BUILD_DIR)
	$(CPP) -std=c++11 $(CFLAGS) $(IFLAGS) -c $< -o $@


$(BUILD_DIR)/glad.o: glad/glad.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CPP) -std=c++11 $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	find $(BUILD_DIR) -name '*.o' -type f -delete
	rm -f $(TARGET)
