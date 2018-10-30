# Select a design pattern to compile
DESIGN_PATTERN := Singleton

TARGET_DIR := target

SRC_DIRS := \
	$(DESIGN_PATTERN) \
	Common/Interface \

CPP := g++
CPPFLAGS := -std=c++11
CPPFLAGS += -g -Wall
CPPFLAGS += $(foreach dir,$(SRC_DIRS),-I$(dir))

SRC_FILES = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.cpp))
SRC_OBJS = $(SRC_FILES:.cpp=.o)

.PHONY: main
main: $(SRC_OBJS)
	$(CPP) -o $(TARGET_DIR)/$@ $^
	$(TARGET_DIR)/$@

.PHONY: clean
clean:
	rm -f $(SRC_OBJS) $(TARGET_DIR)/*
