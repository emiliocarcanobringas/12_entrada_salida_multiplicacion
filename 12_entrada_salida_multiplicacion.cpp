/*Este programa lee la entrada de dos números, y muestra en la salida estándar la multiplicación de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritmético * de multiplicación*/

# include <iostream> //Librería estándar de entrada o salida de datos
# include <locale.h> //Librería estándar de localización (regionalización)

using namespace std; //Damos acceso al espacio de nombres

int main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y colocamos el valor para manejo de caracteres, le asignamos el idioma español
float numero1; //Declaramos la primera variable
float numero2; //Declaramos la segunda variable
float multiplicamos; //Declaramos la variable que almacenará la operación de multiplicación

cout<<"Ingrese el primer número a multiplicar"<<endl;//Solicitamos el primer número a multiplicar
cin>>numero1; //Almacenamos el primer número
cout<<"Ingrese el segundo número a multiplicar"<<endl; //Solicitamos el segundo número a multiplicar
cin>>numero2; //Almacenamos el segundo número
cout<<"El resultado de la multiplicación es:"<<endl; //Imprimimos en pantalla el mensaje
multiplicamos = numero1*numero2; //Realizamos la operación
cout<<multiplicamos<<endl; //Imprimimos en pantalla el resultado

return 0; //Fin del programa

}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
