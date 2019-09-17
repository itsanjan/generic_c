################################################
#   Makefile for the Server Demo Application   #
################################################


################################################################################

### Tools and other useful macros

#Compiler Type 
CROSS_COMPILE=

# Compiler
CC       = $(CROSS_COMPILE)gcc

# Flags for compilation
CFLAGS   = -c -g 
# Include directories path to include multiple header file in one folder example -I../../../Inc
INCLUDES = -I./

# Linker flags example #-lpthread -lrt
LDFLAGS  = 

# Source files need to add multiple file with name 
SOURCES  = ./hellofunc.c ./hellomake.c

# Library 
#LIB   = ../../../somelib.so

# Executable path for executable
EXECUTABLE = ./testmakefile

OBJECTS  = $(SOURCES:.c=.o)

################################################################################


################################################################################

### Compilation

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIB) $(LDFLAGS) -o $@

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS)

################################################################################

