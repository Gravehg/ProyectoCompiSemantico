# Compiler settings
CC = cc


# Source files
SRC_FILES = lex.yy.c bison.tab.c include.c compiler.c defineOne.c replaceDefines.c eliminateDefines.c  

LIBRARIES =  -lfl -lm

# Output binary
OUTPUT = compile

# OUTPUT
all: $(OUTPUT)

# Command
$(OUTPUT): $(SRC_FILES)
	$(CC) $(SRC_FILES) -o $(OUTPUT) $(LIBRARIES)

# Clean
clean:
	rm -f $(OUTPUT)