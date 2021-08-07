all: clocktest test clean

clocktest: createdir
	cc -o bin/clocktest clocktest.c

createdir:
	mkdir bin

test:
	./bin/clocktest

clean:
	rm -R bin