#include <iostream>
#include <string>
using namespace std;

int main() {
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array de enteros de 10 posiciones
    int array2[6] = {3, 5, 1, 9, 7, 2}; // Array de enteros de 6 posiciones
    int array3[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // Array de enteros de 8 posiciones
    string frutas[9]={"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"}; // Array de cadenas de caracteres

    // Suma de los elementos de un array de enteros de 10 posiciones
    int suma1 = 0;
    for(int i = 0; i < 10; i++) {
        suma1 += array1[i];
    }
    cout << "La suma de los elementos del primer array es: " << suma1 << endl;

    // Encontrar el número mayor en un array de enteros de 6 posiciones
    int mayor = array2[0];
    for(int i = 1; i < 6; i++) {
        if(array2[i] > mayor) {
            mayor = array2[i];
        }
    }
    cout << "El mayor numero del segundo array es: " << mayor << endl;

    // Invertir el orden de los elementos en un array de enteros de 8 posiciones
    for(int i = 0; i < 4; i++) {
        int temp = array3[i];
        array3[i] = array3[7-i];
        array3[7-i] = temp;
    }
    cout << "El tercer array invertido es: ";
    for(int i = 0; i < 8; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;

    // Mostrar la suma de todos los números de un array de enteros de 10 posiciones
    int suma2 = 0;
    for(int i = 0; i < 10; i++) {
        suma2 += array1[i];
    }
    cout << "La suma de los elementos del primer array es: " << suma2 << endl;

    // Contar el número de veces que aparece cada fruta en un array de cadenas de caracteres
    int fresa = 0, sandia = 0, melon = 0, naranja = 0, mango = 0;
    for(int i = 0; i < 9; i++) {
        if(frutas[i] == "fresa") {
            fresa++;
        }
        else if(frutas[i] == "sandia") {
            sandia++;
        }
        else if(frutas[i] == "melon") {
            melon++;
        }
        else if(frutas[i] == "naranja") {
            naranja++;
        }
        else if(frutas[i] == "mango") {
            mango++;
        }
    }
    cout << "La fruta fresa aparece " << fresa << " veces." << endl;
    cout << "La fruta sandia aparece " << sandia << " veces." << endl;
    cout << "La fruta melon aparece " << melon << " veces." << endl;
    cout << "La fruta naranja aparece " << naranja << " veces." << endl;
    cout << "La fruta mango aparece " << mango << " veces." << endl;

    return 0;
}