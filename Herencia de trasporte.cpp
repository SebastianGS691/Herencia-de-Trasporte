#include <iostream>
#include <stdlib.h>
using namespace std;

class Trasportes{ 
  private:
    string tipo;
    string nombre;
    int pasajeros;
    float velocidad;

  public:     
  Trasportes(string, string, int, float);
    void Tras();
};

class Terrestre : public Trasportes {
  private:
    int ventanas;
    int ruedas;
    string carro;
public:
  Terrestre(string, string, int, float, int, int, string);
  void Terr();
};              

class Acuatico : public Trasportes{
  private:
    string barco;
    int velas;
  public:
    Acuatico(string, string, int, float, string, int );
void Acua();
};

class Aereo : public Trasportes{
  private:
    int motores;
    int alas;
    string avion;
  public:
    Aereo(string, string, int, float, int, int, string);
void Aere();
};

void Trasportes::Tras(){
  cout<<"Tipo: "<<tipo<<endl;
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Pasajeros: "<<pasajeros<<endl;
  cout<<"Velocidad: "<<velocidad<<endl;
}
void Terrestre::Terr(){
  Tras();
  cout<<"Ruedas: "<<ruedas<<endl;
  cout<<"Ventanas: "<<ventanas<<endl;
  cout<<"El trasporte es un: "<<carro<<endl;
}

void Acuatico::Acua(){
  Tras();
  cout<<"Velas: "<<velas<<endl;
  cout<<"El trasporte es un: "<<barco<<endl;
}

void Aereo::Aere(){
  Tras();
  cout<<"El trasporte es un: "<<avion<<endl;
  cout<<"Motores: "<<motores<<endl;
  cout<< "Alas: "<<alas<<endl;
}

Trasportes::Trasportes(string _tipo, string _nombre, int _pasajeros, float _velocidad){
  nombre = _nombre;
  pasajeros = _pasajeros;
  velocidad = _velocidad;
  tipo = _tipo;
}
Terrestre::Terrestre(string _tipo, string _nombre,int _pasajeros, float _velocidad, int _ventanas, int _ruedas, string _carro) : Trasportes(_tipo, _nombre, _pasajeros, _velocidad){
  ventanas = _ventanas;
  ruedas = _ruedas;
  carro = _carro;
}
Acuatico::Acuatico(string _tipo, string _nombre,int _pasajeros, float _velocidad, string _barco, int _velas) : Trasportes(_tipo, _nombre, _pasajeros, _velocidad){
  velas = _velas;
  barco = _barco;
}
Aereo::Aereo(string _tipo, string _nombre, int _pasajeros, float _velocidad, int _motores, int _alas, string _avion) : Trasportes(_tipo, _nombre, _pasajeros, _velocidad){
  motores = _motores;
  alas = _alas;
  avion = _avion;
}

int main() {

Terrestre Terrestre1("Terrestre", "Carro", 4, 120, 4, 4, "Bentley\n");{
  Terrestre1.Terr();
}
  Acuatico Acuatico1("Acuatico", "Barco", 5, 30, "Yate\n" , 1);{
  Acuatico1.Acua();
}

  Aereo Aereo1("Aereo", "Avion", 100, 335, 2, 1, "Avion conercial");{
  Aereo1.Aere();
  }
  
  return 0;
}
