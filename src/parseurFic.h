#ifndef DEF_PARSEURFIC
#define DEF_PARSEURFIC

#include <iostream>
#include <fstream>
#include <string>

class parseurFic {

    public :
        void lireFic(std::string nomFic);

    private :
        std::string temp;
        std::ifstream fluxFic;

        /** @TODO : il faudrait une structure a retourner en fin de lecture **/
};


#endif
