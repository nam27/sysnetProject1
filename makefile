myShell: myShell.o 
	gcc myShell.o -o myShell -Wall

myShell.o: myShell.c
	gcc -c myShell.c -Wall

clean:
	myshell.o 
