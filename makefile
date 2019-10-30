SOURCES := BST.cpp  main.cpp
OBJECTS := $(patsubst %.cpp,%.o,$(SOURCES))

all: program run

program :$(OBJECTS)
	@clear
	g++ -g $(OBJECTS) -o smd

BST.o:
	g++ -c BST.cpp -o BST.o

main.o:
	g++ -c main.cpp -o main.o

BST.dep:
	g++ -MM BST.cpp \
		-MT "BST.dep BST.o" -o BST.dep
main.dep:
	g++ -MM main.cpp \
	 -MT "main.dep main.o" -o main.dep
	 	

-include BST.dep main.dep

run:
	@ctags -R .
	./smd

clean:
	rm -r *.o *.dep tags smd
