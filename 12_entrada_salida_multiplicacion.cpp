/*Este programa lee la entrada de dos n�meros, y muestra en la salida est�ndar la multiplicaci�n de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritm�tico * de multiplicaci�n*/

# include <iostream> //Librer�a est�ndar de entrada o salida de datos
# include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; //Damos acceso al espacio de nombres

int main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol
float numero1; //Declaramos la primera variable
float numero2; //Declaramos la segunda variable
float multiplicamos; //Declaramos la variable que almacenar� la operaci�n de multiplicaci�n

cout<<"Ingrese el primer n�mero a multiplicar"<<endl;//Solicitamos el primer n�mero a multiplicar
cin>>numero1; //Almacenamos el primer n�mero
cout<<"Ingrese el segundo n�mero a multiplicar"<<endl; //Solicitamos el segundo n�mero a multiplicar
cin>>numero2; //Almacenamos el segundo n�mero
cout<<"El resultado de la multiplicaci�n es:"<<endl; //Imprimimos en pantalla el mensaje
multiplicamos = numero1*numero2; //Realizamos la operaci�n
cout<<multiplicamos<<endl; //Imprimimos en pantalla el resultado

return 0; //Fin del programa

}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
