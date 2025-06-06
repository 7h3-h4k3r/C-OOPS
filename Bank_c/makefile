# BUILD_DIR = build
# CFLAG = -o
# ObJEC = $(subst src/,,$(subst .c,.o ,$(filter %.c,$(wildcard src/*))))
# superpower : $(ObJEC) 
# 	cd  $(BUILD_DIR) && $(CC) $(CFLAG) $@ $(ObJEC)
# $(BUILD_DIR)/%.o:src/%.c:
# 	$(CC) -c $< -o $@
CC = gcc
BUILD_DIR = build
CFLAG = -o

# Collect all .c files from src and convert them into .o inside build
SOURCES := $(wildcard src/*.c)
OBJECTS := $(patsubst src/%.c, $(BUILD_DIR)/%.o, $(SOURCES))

# Target name
TARGET = superpower

# Final link step
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAG) $@ $(OBJECTS)

# Static pattern rule to compile .c to .o
$(BUILD_DIR)/%.o: src/%.c
	$(CC) -c $< -o $@

# Clean rule
clean:
	rm -rf $(BUILD_DIR) $(TARGET)
