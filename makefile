output: main.o bgart.o border.o file.o loadingscreen.o ropasci.o rpselement.o
	gcc main.o bgart.o border.o file.o loadingscreen.o ropasci.o rpselement.o -o output

main.o: main.c
	gcc -c main.c

bgart.o: bgart.c
	gcc -c bgart.c

border.o: border.c
	gcc -c border.c

file.o: file.c
	gcc -c file.c

loadingscreen.o: loadingscreen.c
	gcc -c loadingscreen.c

ropasci.o: ropasci.c
	gcc -c ropasci.c

rpselement.o: rpselement.c
	gcc -c rpselement.c

clean:
	rm*.o output