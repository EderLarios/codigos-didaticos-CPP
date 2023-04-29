//programa que muestra la suma de dos enteros
#include <iostream>

//la funcion main empieza la ejecucion del programa
int main(){
	
	//declaracion de las variables
	int numero1 = 0;//primer entero a sumar (se inicializa con cero)
	int numero2 = 0;//segundo entero a sumar (se inicializa con cero)
	int suma = 0;//suma de numero1 y numero2 (se inicializa con cero)
	
	std::cout <<"Escriba el primer numero  ";//pide los datos al usuario
	std::cin >>numero1;//lee el primer entero del usuarioy lo coloca en numero1
	
	std::cout <<"Escriba el segundo numero  ";//pide los datos al usuario
	std::cin >>numero2;//lee el segundo entero del usuarioy lo coloca en numero2
	
	suma = numero1 + numero2;// suma los numeros;  almacena el resultado en suma 
	
	std::cout <<"La suma es "<< suma << std::endl;//muestra la suma; fin de la linea
	
}//fin de la funcion main
