all:
	gcc -Iinclude -g -c -o xfuncs.o xfuncs.c
	gcc -Iinclude -g -c -o hush.o hush.c
	gcc -lreadline -o hush hush.o xfuncs.o

clean:
	rm -f xfuncs.o hush.o hush
