#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <fstream>

#include "ordenamiento.h"

using namespace std;
using namespace std::chrono;

// Función que crea un arreglo de números aleatorios.
duration<double> crear_arreglo(int *A, int TAM_ARREGLO, int RANGO_MAX) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    for (int i = 0; i < TAM_ARREGLO; i++) {
        int x = rand() % RANGO_MAX;
        A[i] = x;
    }
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

// Función que ordena un arreglo utilizando el algoritmo de inserción.
duration<double> ordenar_insertion_sort(int* A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    insertion_sort(A, TAM_ARREGLO);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

// Función que ordena un arreglo utilizando el algoritmo de selección.
duration<double> ordenar_selection_sort(int* A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    selection_sort(A, TAM_ARREGLO);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

// Función que ordena un arreglo utilizando el algoritmo de burbuja.
duration<double> ordenar_bubblesort(int* A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    bubblesort(A, TAM_ARREGLO);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

// Función que ordena un arreglo utilizando el algoritmo de merge sort.
duration<double> ordenar_merge_sort(int* A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    merge_sort(A, 0, TAM_ARREGLO-1);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

// Función que ordena un arreglo utilizando el algoritmo de quicksort.
duration<double> ordenar_quicksort(int* A, int TAM_ARREGLO) {
    high_resolution_clock::time_point inicio = high_resolution_clock::now();
    quicksort(A, 0, TAM_ARREGLO-1);
    high_resolution_clock::time_point fin = high_resolution_clock::now();
    duration<double> tiempo = duration_cast<duration<double> >(fin - inicio);
    return tiempo;
}

// Función que copia un arreglo.
int* copiar_arreglo(int A[], int n) {
    int *aux = new int[n];
    for (int i = 0; i < n; i++) {
        aux[i] = A[i];
    }
    return aux;
}

// Función que muestra un arreglo en la consola.
void mostrar_arreglo(int *A, int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Función que ejecuta un algoritmo de ordenamiento seleccionado.
duration<double> E_Algoritmo(int* B, int tam, int opcion) {
    duration<double> tiempo;

    switch (opcion) {
    case 1:
        cout << "Iniciando ordenamiento con INSERTION SORT... ";
        tiempo = ordenar_insertion_sort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete [] B;
        break;
    case 2:
        cout << "Iniciando ordenamiento con SELECTION SORT... ";
        tiempo = ordenar_selection_sort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete [] B;
        break;
    case 3:
        cout << "Iniciando ordenamiento con BUBBLESORT... ";
        tiempo = ordenar_bubblesort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete [] B;
        break;
    case 4:
        cout << "Iniciando ordenamiento con MERGE SORT... " << flush;
        tiempo = ordenar_merge_sort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete [] B;
        break;
    case 5:
        cout << "Iniciando ordenamiento con QUICKSORT... " << flush;
        tiempo = ordenar_quicksort(B, tam);
        cout << "\tOrdenado. ";
        cout << "\tTiempo: " << tiempo.count() << "s" << endl;
        delete [] B;
        break;
    default:
        break;
    }

    cout << endl;
    return tiempo;
}

// Función principal del programa.
int main(int argc, char * argv[]) {
    if (argc != 3) {
        cout << "\nSintaxis: ordenamiento <numero_arreglos_a_generar_y_ordenar> <tamano_arreglo>\n" << endl;
    } else {
        int NUM_ARREGLOS = atoi(argv[1]);
        int TAM_ARREGLO = atoi(argv[2]);
        int RANGO = 10 * TAM_ARREGLO;

        std::string titulo = "" + std::to_string(TAM_ARREGLO) + ".txt";
        std::ofstream salida(titulo);
        salida << "ARREGLO \t insertion_sort \t selection_sort \t bubble_sort \t merge_sort \t quick_sort" << endl;

        cout << "\n\tTAMANO DE ARREGLOS: " << TAM_ARREGLO << "\tARREGLOS: " << NUM_ARREGLOS << endl;

        int algoritmos[] = {1, 2, 3, 4, 5};
        for (int i = 0; i < NUM_ARREGLOS; i++) {
            int *A = new int[TAM_ARREGLO];
            int *B = new int[TAM_ARREGLO];
            salida << i+1 << "\t";

            duration<double> tiempo;
            duration<double> tiempo1;
            cout << "\n*** NUMERO DE ARREGLO: " << i + 1 << " ***" << endl;
            cout << "\nCreando arreglo aleatorio de tamano " << TAM_ARREGLO << "...";
            tiempo = crear_arreglo(A, TAM_ARREGLO, RANGO);
            cout << "\tCreado. ";
            cout << "\tTiempo: " << tiempo.count() << "s" << endl << "\n";

            for (int j = 1; i <= 5; j++) {
                B = copiar_arreglo(A, TAM_ARREGLO);
                tiempo1 = E_Algoritmo(B, TAM_ARREGLO, j);
                salida << std::fixed << std::setprecision(8) << tiempo1.count() << "\t";
            }
            salida << endl;
        }
    }
    return EXIT_SUCCESS;
}
