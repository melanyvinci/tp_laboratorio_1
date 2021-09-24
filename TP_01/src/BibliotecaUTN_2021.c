/*
 * pedirDatosLib.c
 *
 *  Created on: Sep 7, 2021
 *      Author: mel
 */
#include "BibliotecaUTN_2021.h"

/**
*\ brief: pide un float al usuario con un mensaje dictando qué dato queremos que ingrese, sea edad, año, etc...
*\ param: variableTexto corresponde al mensaje de input del tipo de dato que queremos que el usuario ingrese
*\ return: numero ingresado por el usuario
*/
float pedirFloatUsuario(char* variableTexto){
	float numeroObtenido;
	printf("%s\n", variableTexto);
	scanf("%f", &numeroObtenido);
	return numeroObtenido;
}

/**
*\ brief: muestra el menu de la calculadora donde el usuario podra seleccionar las operaciones e ingresar los valores precisados
*\ param: no tiene parametros
*\ return: void
*/
void mostrarMenuCalculadora(){
	int seleccionUsuario;
	int continuar = 0;
	float numeroUno = 0;
	float numeroDos = 0;


	while(continuar == 0){
	printf("Operador A: %f\n", numeroUno);
	printf("Operador B: %f\n", numeroDos);
	printf("Elija el tipo de operación:\n");
	printf("1-Operando A \n 2-Operando B \n 3-Calcular todas las operaciones\n 4-Mostrar resultados\n 5-Salir\n");
	scanf("%d", &seleccionUsuario);
	switch(seleccionUsuario){
		case 1: numeroUno = pedirFloatUsuario("Ingrese el primer operando: \n");
		break;
		case 2: numeroDos = pedirFloatUsuario("Ingrese el segundo operando: \n");
		break;
		case 3: if (calcularOperaciones(numeroUno, numeroDos) == -2147483648){
				continuar = 1;
			}
		break;
		case 4: mostrarResultadoDeOperaciones(numeroUno, numeroDos);
		break;
		case 5: continuar = 1;
		break;
		default: printf("Numero invalido, saliendo del programa\n");
				continuar = 1;
		}
	}
}

/**
*\ brief: suma dos numeros ingresados por parametro por el usuario
*\ param: numeroUno corresponde al A del ingreso del usuario - numeroDos corresponde al B del ingreso del usuario
*\ return: resultado de la operacion
*/
float sumarFloat(float numeroUno,float numeroDos){
	float resultado;
	resultado = numeroUno + numeroDos;
	return resultado;
}

/**
*\ brief: Resta dos numeros ingresados por parametro por el usuario
*\ param: numeroUno corresponde al A del ingreso del usuario - numeroDos corresponde al B del ingreso del usuario
*\ return: resultado de la operacion
*/
float restarFloat(float numeroUno,float numeroDos){
	float resultado;
	resultado = numeroUno - numeroDos;
		return resultado;
}

/**
*\ brief: Divide dos numeros ingresados por parametro por el usuario
*\ param: numeroUno corresponde al A del ingreso del usuario - numeroDos corresponde al B del ingreso del usuario
*\ return: resultado de la operacion
*/
float dividirFloat(float numeroUno, float numeroDos){
	float resultado;
	resultado = numeroUno / numeroDos;
		return resultado;
}

/**
*\ brief: multiplica dos numeros ingresados por parametro por el usuario
*\ param: numeroUno corresponde al A del ingreso del usuario - numeroDos corresponde al B del ingreso del usuario
*\ return: resultado de la operacion
*/
float multiplicarFloat(float numeroUno,float numeroDos){
	float resultado;
	resultado = numeroUno * numeroDos;
	return resultado;
}

/**
*\ brief: calcula el factorial de uno de los numeros ingresados dependiendo de la seleccion del usuario.
*\ param: numeroUno corresponde al A del ingreso del usuario - numeroDos corresponde al B del ingreso del usuario
*\ return:
*/
float calcularFactorial(float numeroUno, float numeroDos){
	float resultado;
	float factorial = 1.00;
	int i;
	int seleccionUsuario;

	printf("Presione 1 para calcular el factorial del numero A\n");
	printf("Presione 2 para calcular el factorial del numero B\n");
	scanf("%d", &seleccionUsuario);
	if(seleccionUsuario == 1){
		for(i = 1; i<= numeroUno; i++){
				factorial = factorial * i;
				resultado = factorial;
				}

	} else{
		for(i = 1; i<= numeroDos; i++){
				factorial = factorial * i;
				resultado = factorial;
				}
	}
	return resultado;

}

/**
*\ brief: calcula segun la opcion elegida por el usuario en el menu el tipo de operacion.
*\ Si en la division el segundo operando es 0, sale del programa, avisando el error.
*\ param: numeroUno corresponde al A del ingreso del usuario - numeroDos corresponde al B del ingreso del usuario
*\ return: resultado de la operacion elegida. Si el operando B es 0 en caso de la division,
*\ se retorna el numero -2147483648, que hace que se salga del programa.
*/
float calcularOperaciones(float numeroUno, float numeroDos){
	int resultadoOperacion;
	char subSeleccionUsuario;

	printf("Elija el tipo de operación:\n");
	printf("a) Suma\n b) Resta\n c) Multiplicacion\n d) Factorial\n e) Division\n");
	scanf("%s", &subSeleccionUsuario);

	switch(subSeleccionUsuario){
	case 'a': resultadoOperacion = sumarFloat(numeroUno, numeroDos);
	break;
	case 'b': resultadoOperacion = restarFloat(numeroUno, numeroDos);
	break;
	case 'c': resultadoOperacion = multiplicarFloat(numeroUno, numeroDos);
	break;
	case 'd': resultadoOperacion = calcularFactorial(numeroUno, numeroDos);
	break;
	case 'e': if(chequearSegundoOperando(numeroDos) ==0){
		resultadoOperacion = dividirFloat(numeroUno, numeroDos);
	} else {
		printf("No puede dividirse por cero\n");
		resultadoOperacion = -2147483648;
		return resultadoOperacion;
	}
	break;
	default: printf("Seleccion invalida\n");
	}

	return resultadoOperacion;
}
/**
*\ brief: chequea si el segundo operando es 0
*\ param: numeroDos corresponde al B del ingreso del usuario
*\ return: 0 si B es != a 0 - 1 si B es igual a 0
*\ */
int chequearSegundoOperando(float numeroDos){
	if(numeroDos == 0){
		return 1;
	} else {
		return 0;
	}
}

/**
*\ brief: Muestra por consola el resultado de la operacion elegida entre dos numeros
*\ param: numeroUno corresponde al A del ingreso del usuario - numeroDos corresponde al B del ingreso del usuario
*\ return: Impresion por consola del resultado de la operacion elegida.
*/
void mostrarResultadoDeOperaciones(float numeroUno, float numeroDos){
	float resultado = calcularOperaciones(numeroUno, numeroDos);
	printf("Resultado de operacion: %f\n\n", resultado);
}

