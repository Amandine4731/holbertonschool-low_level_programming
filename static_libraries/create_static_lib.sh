#!bin/bash
gcc -c *.c | ar -rc liball.a *.o | randlib liball.a | ar -t liball.a
