#include <iostream>
#include<stdlib.h>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string,int);
        void mostrarPersona();
};

// Cosntructor de la clase person
Persona :: Persona (string _nombre,int _edad){
    nombre=_nombre;
    edad=_edad;
}

void Persona :: mostrarPersona(){
    cout <<"Nombre: "<<nombre<<endl;
    cout <<"Edad: "<<edad<<endl;
}

class Empleado : public Persona{
    private:
        float sueldo;
    public:
        Empleado(string,int,float);
        void mostrarEmpleado();

};
// Constructor de la casa empleado
Empleado::Empleado(string _nombre, int _edad, float _sueldo) : Persona(_nombre,_edad)
{
    sueldo=_sueldo;
}

void Empleado :: mostrarEmpleado(){
    mostrarPersona();
    cout <<"Sueldo: "<<sueldo<<endl;
}

class Estudiante : public Persona {
    private:
        float notafinal;
    public:
        Estudiante(string,int,float);
        void mostrarEstudiante();
};

// Constructor de la clase estudiante
Estudiante :: Estudiante(string _nombre,int _edad,float _notafinal) : Persona(_nombre,_edad){
    notafinal=_notafinal;
}

void Estudiante :: mostrarEstudiante(){
    mostrarPersona();
    cout <<"Nota Final: "<<notafinal<<endl;
}

class Universitario : public Estudiante{
    private:
        string carrera;
    public:
        Universitario(string,int,float,string);
        void mostrarUniversitario();
};

// Constructor de la clase universitaria
Universitario :: Universitario(string _nombre,int _edad,float _notafinal,string _carrera) : Estudiante(_nombre,_edad,_notafinal){
    carrera=_carrera;
}

void Universitario :: mostrarUniversitario(){
    mostrarEstudiante();
    cout <<"Carrera: "<<carrera<<endl;
}


int main(){
    Empleado empleado1("Saúl",25,4000);
    cout<<"Empleado: "<<endl;
    empleado1.mostrarEmpleado();
    cout<<"\n";

    Estudiante estudiante1("Victor",21,18);
    cout<<"Estudiante"<<endl;
    estudiante1.mostrarEstudiante();
    cout<<"\n";

    Universitario universitario1("Victor",21,18,"Derecho");
    cout<<"Universitario"<<endl;
    universitario1.mostrarUniversitario();
    cout<<"\n";

    system("pause");
    return 0;
}