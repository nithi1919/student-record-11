a.out: main.o add.o delete.o modify.o save.o show.o sort.o read.o
	gcc main.c add.c delete.c modify.c save.c show.c sort.c read.c -o a.out

main.o: main.c
	gcc -c main.c

add.o: add.c
	gcc -c add.c

delete.o: delete.c
	gcc -c delete.c

modify.o: modify.c
	gcc -c modify.c

save.o: save.c
	gcc -c save.c

show.o: show.c
	gcc -c show.c

sort.o: sort.c
	gcc -c sort.c

read.o: read.c
	gcc -c read.c
clean:
	rm -f *.o a.out

