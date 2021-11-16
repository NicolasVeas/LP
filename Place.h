#ifndef PLACE_H_INCLUDED
#define PLACE_H_INCLUDED

//#include "Transicion.h"

class Place{
    private:
        int ntoken;
        std::string nombre;
    public:
        // Constructor
        Place(int,std::string);
        // Set
        void setNombre(std::string);
        void setNtoken(int);
        // Get
        std::string getNombre();
        int getNtoken();

        void leer();

};

/*
class Arco{
    public:
        int id;
        int peso;
        Place* p;
        Arco(int _id, int _peso, Place* p){
            id = _id;
            peso = _peso;
            this->p;
            std::cout <<"Soy " << p->getNombre() << std::endl;
            //p->leer();
        };

        void leer();
};

void Arco::leer(){
    std::cout <<"Soy "  <<std::endl;
}
*/

// Constructor Place
Place::Place(int _ntoken, std::string _nombre){
    ntoken = _ntoken;
    nombre = _nombre;
}

// Set Place
void Place::setNtoken(int _ntoken){
    ntoken = _ntoken;
}

void Place::setNombre(std::string _nombre){
    nombre = _nombre;
}

// Get Place
std::string Place::getNombre(){
    return nombre;
}

int Place::getNtoken(){
    return ntoken;
}

// Funciones Place
void Place::leer(){
    std::cout <<"Soy "<< nombre <<" y tengo " << ntoken << " token" << std::endl;
}

#endif