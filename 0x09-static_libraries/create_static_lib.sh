#!/bin/bash

create the object files
	gcc -Wall -pedantic -Werror -Wextra -c *.c

generate the static library
	ar -rc liball.a *.o

Indexing 
	ranlib liball.a

Listing object files in the library
	ar -t liball.a

	nm liball.a
