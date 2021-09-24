/*
 * pedirDatosLib.h
 *
 *  Created on: Sep 7, 2021
 *      Author: mel
 */

#ifndef BIBLIOTECAUTN_2021_H_
#define BIBLIOTECAUTN_2021_H_

#include <stdio.h>
#include <stdlib.h>

float pedirFloatUsuario(char* variableTexto);
void mostrarMenuCalculadora();
float sumarFloat(float numeroUno,float numeroDos);
float restarFloat(float numeroUno,float numeroDos);
float dividirFloat(float numeroUno, float numeroDos);
float multiplicarFloat(float numeroUno,float numeroDos);
float calcularFactorial(float numeroUno, float numeroDos);
void mostrarResultadoDeOperaciones(float numeroUno, float numeroDos);
float calcularOperaciones(float numeroUno, float numeroDos);
int chequearSegundoOperando(float numeroDos);


#endif /* BIBLIOTECAUTN_2021_H_ */
