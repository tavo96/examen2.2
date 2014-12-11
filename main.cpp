// queue::push/pop
#include "Evaluador.h"
#include "NodoAVL.h"
#include <iostream>
#include "tinyxml2.h"
#include <iostream>
#include <list>
using namespace std;
using namespace tinyxml2;

//Devuelve la cantidad de usuarios que tiene 18 anios o mas dado el nombre de un archivo XML
int contarMayoresDeEdadXML(string nombre_archivo)
{
    int Mayor = 0;

    XMLDocument doc;
    doc.LoadFile(nombre_archivo.c_str());
    XMLElement* Usuarios = doc.FirstChildElement("Usuarios");

    for(XMLElement* usuario = Usuarios->FirstChildElement("Usuario");
         usuario!= NULL;
         usuario = usuario->NextSiblingElement("Usuario")){
            if(atoi(usuario->Attribute("edad")) >= 18)

          Mayor ++;
         }
         return Mayor;
}

//Devuelve el numero anterior del nodo raiz de un Arbol dado
int obtenerNumeroAnterior(NodoAVL* raiz)
{
    return -1;

}

//Devuelve el numero siguiente del nodo raiz de un Arbol dado
int obtenerNumeroSiguiente(NodoAVL* raiz)
{
    return -1;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
