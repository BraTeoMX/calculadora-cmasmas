//Juego de piedra, papel o tijeras.
//consiste en seleccionar 1 de los 3 casos y el programa tambien elejira al azar 1 de los 3 casos
//al final se evalua la comparacion y se definira el ganador, perdedor, o si es empate. 

#include<iostream> //libreria para entrada y salidas
#include<time.h> //libreria para la semilla de numeros aleatorios, es decir, que al correr el programa elija un numero diferente
#include<cstdlib>
using namespace std; // funcion para omitir la palabra reservada namespace std en cout y cin

int main(){ 
    srand(time(NULL)); //Semilla que resetea el contador y asi el numero aleatorio sea diferente cada vez que se ejecuta el programa
    //declaracion de variables
    double opcionUsuario, opcionMaquina; //double porque los datos numericos tienen decimales
    //Datos de entradaa
    cout <<"Juego de Piedra, papel o tijeras :"<<endl;
    cout <<"1. Piedra "<<endl;
    cout <<"2. Papel "<<endl;
    cout <<"3. Tijeras "<<endl;
    cout <<"Introduce la opcion (numero):"<<endl; // Se debe introducir el numero segun sea el caso para poder almacenar el valor y evaluarlo
    cin >> opcionUsuario;
    //Proceso para determinar el numero aleatorio con el rango del 1 al 3
    opcionMaquina = 1+rand()%(4-1);  // el numero 1 es el rango de inicio, (4-1) es el rango final es decir 3
    //Este IF e ELSE IF son para mostrar el mensaje de la opcion que eligio al azar la maquina y mostrar el mensaje segun sea el caso
    //y el usuario final lo interprete de una forma mas facil
    if(opcionMaquina == 1){
        cout <<endl<< "La maquina eligio Piedra, por lo tanto:"<<endl;
    }else if (opcionMaquina == 2){
        cout <<endl<< "La maquina eligio Papel, por lo tanto:"<<endl;
    }else if(opcionMaquina == 3){
        cout <<endl<< "La maquina eligio Tijeras, por lo tanto:"<<endl;
    } //fin del IF

//el primer IF es para comprar que el dato introducido por el usuario sea valido, en caso de introducir otro valor, 
//el programa no evaluara el juego porque seria un valor incorrecto
    if((opcionUsuario == 1) ||(opcionUsuario == 2) ||(opcionUsuario == 3)){ 
        //El segundo IF evalua segun sea el caso para mostrar los resultados correctos
        if(opcionUsuario == opcionMaquina){ // Comparacion en caso de que ambos elijan la misma opcion
            cout << "Es empate, ambos eligieron la misma opcion "<<endl;
        //Aqui se evaluan las posibilidades para el usuario que elije una de las 3 opciones    
        }else if((opcionUsuario == 1) &&  (opcionMaquina == 2)){ 
            cout << "Perdiste, Piedra pierde con papel "<<endl;

        }else if((opcionUsuario == 1) &&  (opcionMaquina == 3)){
            cout << "Felicidades, ganaste"<<endl<< "Piedra le gana a Tijeras"<<endl;

        }else if((opcionUsuario == 2) &&  (opcionMaquina == 1)){
            cout << "Felicidades, ganaste"<<endl<<"Papel le gana a Piedra" <<endl;
        }else if((opcionUsuario == 2) &&  (opcionMaquina == 3)){
            cout << "Perdiste, Papel pierde con tijeras"<<endl;

        }else if((opcionUsuario == 3) &&  (opcionMaquina == 1)){
            cout << "Perdiste, Tijeras pierde on piedra "<<endl;
        }else if((opcionUsuario == 3) &&  (opcionMaquina == 2)){
            cout << "Felicidades, ganaste, Tijeras le gana a Papel"<<endl;
        }

    }else{ //Cuando se introduce un valor incorrecto, se mostrara el mensaje de abajo
        cout << "Error"<<endl;
    }
    // fin del segundo IF

    return 0;
}
