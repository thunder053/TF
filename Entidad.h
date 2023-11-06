#pragma once
#include <iostream>


using namespace System::Drawing;
using namespace std;
  ref class Entidad{
  protected:
	 int x, y;
     int dx, dy;
	 Graphics ^ forma;

  public:
	  Entidad(int _x,int _y, Graphics^ _forma);

	  void mover();
	  void dibujar();
	  void borrar();
void setX(int _x);
void setY(int _y);
int getX();
int getY();

};

