#!/bin/bash

# compilation :
g++ -std=c++11 -Wall ./src/*.cpp -o progTest

# test si erreur compilation :
if [ $? -ne 0 ]
then
 echo ' erreur a la compilation !!! '
 exit -1;
fi

# nettoyage :
rm -f ./src/*.o

echo ' compilation réussie  \o/ '

exit 0
