#ifndef TRANSICION_H_INCLUDED
#define TRANSICION_H_INCLUDED


class Transicion{
    private:
        int id;
        std::string nombre;
    public:
        // Constructor
        Transicion(int,std::string);
        // Set
        void setNombre(std::string);
        void setId(int);
        // Get
        std::string getNombre();
        int getId();

        void leer();

};

// Constructor
Transicion::Transicion(int _id, std::string _nombre){
    id = _id;
    nombre = _nombre;
}

// Set
void Transicion::setId(int _id){
    id = _id;
}

void Transicion::setNombre(std::string _nombre){
    nombre = _nombre;
}

// Get
std::string Transicion::getNombre(){
    return nombre;
}

int Transicion::getId(){
    return id;
}

void Transicion::leer(){
    std::cout <<"Soy "<< nombre <<" y tengo " << id << " token" << std::endl;
}

#endif