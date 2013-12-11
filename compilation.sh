#!/bin/bash

# compilation :
g++ -Wall ./src/*.cpp -o test

# test si erreur compilation :
if [ $? -ne 0 ]
then
echo '\n --------------------------------------------------- \n erreur a la compilation !!! \n'
return -1;
fi

# nettoyage :
rm -f *.o
