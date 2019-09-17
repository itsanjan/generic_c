# Target name
TARGET = app
# application.c
SOURCES = $(wildcard ./*.c)
# -ladder
LIBS = -L$(PWD)/module_adder/ -ladder

$(TARGET):
	gcc -o $(TARGET) $(SOURCES) $(LIBS)
clean :
	rm -rf $(PWD)/*.o $(TARGET)
