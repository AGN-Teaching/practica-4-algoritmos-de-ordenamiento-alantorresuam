// Función que intercambia dos elementos en un arreglo.
void intercambiar(int A[], int x, int y) {
    int aux = A[x];
    A[x] = A[y];
    A[y] = aux;
}

// Algoritmo de ordenamiento por inserción.
void insertion_sort(int A[], int n) {
    for (int j = 1; j < n; j++) {
        int k = A[j];
        int i = j - 1;
 
        // Mueve los elementos mayores que k una posición a la derecha
        // hasta encontrar su posición correcta.
        while (i >= 0 && A[i] > k) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = k;
    }
}

// Algoritmo de ordenamiento por selección.
void selection_sort(int A[], int n) {
    for (int j = 0; j < n-1; j++) {
        int menor = j;
 
        // Encuentra el elemento mínimo del subarreglo no ordenado.
        for (int i = j+1; i < n; i++) {
            if (A[i] < A[menor]) {
                menor = i;
            }
        }
        intercambiar(A, j, menor);
    }
}

// Algoritmo de ordenamiento burbuja.
void bubblesort(int A[], int n) {
    for (int i = 0; i < n-1; i++) {
      
        // Los primeros i elementos ya están ordenados.
        for (int j = n-1; j > i; j--) {
            if (A[j] < A[j-1]) {
                intercambiar(A, j, j-1);
            }
        }
    }
}

// Función auxiliar para el merge sort: combina dos subarreglos ordenados.
void merge(int A[], int inicio, int medio, int fin) {
    int *aux = new int[fin - inicio + 1];
    int i = inicio;     // índice de la primera mitad
    int j = medio + 1;  // índice de la segunda mitad
    int h = 0;

    // Combina ordenadamente ambos subarreglos hasta recorrer totalmente uno de ellos.
    while ((i <= medio) && (j <= fin)) {
        if (A[i] <= A[j]) {
            aux[h] = A[i];
            i += 1;
        } else {
            aux[h] = A[j];
            j += 1;
        }
        h += 1;
    }

    // Copia el resto de la segunda mitad si la primera ya está copiada completamente.
    if (i > medio) {
        while (j <= fin) {
            aux[h] = A[j];
            j += 1;
            h += 1;
        }
    } // Si no, copia el resto de la primera mitad.
    else {
        while (i <= medio) {
            aux[h] = A[i];
            i += 1;
            h += 1;
        }
    }
    
    // Copia los elementos ordenados de vuelta al arreglo original.
    h = 0;
    for (int k = inicio; k <= fin; k++) {
        A[k] = aux[h];
        h += 1;
    }
    delete [] aux;
}

// Algoritmo de ordenamiento merge sort.
void merge_sort(int A[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = (inicio + fin) / 2;
        merge_sort(A, inicio, medio);
        merge_sort(A, medio + 1, fin);
        merge(A, inicio, medio, fin);
    }
}

// Función auxiliar para quicksort: coloca el pivote en su posición correcta y divide el arreglo.
int partition(int A[], int p, int r) {
    int pivote = A[r];    
    int ultimo = p - 1;

    // Agrupa elementos menores que el pivote al inicio del arreglo.
    for (int i = p; i < r; i++) {
        if (A[i] < pivote) {
            ultimo += 1;
            intercambiar(A, ultimo, i);
        }
    }

    // Mueve el pivote a su posición correcta.
    intercambiar(A, ultimo + 1, r);
    return ultimo + 1;
}

// Algoritmo de ordenamiento quicksort.
void quicksort(int A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}
