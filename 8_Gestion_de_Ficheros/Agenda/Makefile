
agenda_2000:main.o libagenda.o
	gcc -Wall -O2 -oagenda2000 main.o libagenda.o

main.o:main.c
	gcc -Wall -c main.c

libagenda.o:libagenda.c libagenda.h 
	gcc -Wall -c libagenda.c

clean:
	rm -f *.o

cleanall:
	rm -f *.o
	rm -f agenda_2000
	rm -f agenda2000