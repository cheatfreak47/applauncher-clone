# Makefile for building applauncher.c with MSYS2 GCC 32-bit

# Detect MSYS2 installation path using a shell command
MSYS2_PATH := $(shell echo $$MSYSTEM_PREFIX | sed 's/\\/\//g')

CC = $(MSYS2_PATH)/mingw32/bin/gcc.exe
CFLAGS = -mwindows -m32 -Os -flto
LDFLAGS = -s -flto
TARGET = AppLauncher.exe
SRC = applauncher.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
	strip $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
