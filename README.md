[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/ke8zCzPd)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13623341)
# Práctica 4: Algoritmos de ordenamiento
**Comparación de Algoritmos de Ordenamiento** 

**Nombre: Alan Torres Aguilar**  

**Matrícula:2223028388** 

**Introducción** 

En esta práctica, se aborda el análisis y comparación de diversos algoritmos de ordenamiento implementados en C++. El objetivo principal es evaluar el desempeño de algoritmos como inserción, selección, burbuja, merge sort y quicksort, utilizando mediciones de tiempo de ejecución. 

**Descripción de la Implementación** 

El programa principal (`ordenamiento.cpp`) está estructurado de manera modular, implementando funciones específicas para tareas clave. Se destacan funciones para la generación de arreglos aleatorios, la aplicación de diferentes algoritmos de ordenamiento y la medición del tiempo de ejecución. 

La implementación de los algoritmos de ordenamiento se encuentra en el archivo `ordenamiento.h`. Cada función en este archivo corresponde a un algoritmo específico, como el de inserción, selección, burbuja, merge sort y quicksort. 

**Funciones Principales** 

1. **crear_arreglo**: Genera un arreglo de números aleatorios. 

2. **ordenar_insertion_sort, ordenar_selection_sort, ordenar_bubblesort, ordenar_merge_sort, ordenar_quicksort**: Implementan los algoritmos de ordenamiento respectivos y miden el tiempo de ejecución. 

3. **copiar_arreglo**: Crea una copia de un arreglo. 

4. **mostrar_arreglo**: Muestra un arreglo en la consola. 

5. **E_Algoritmo**: Ejecuta un algoritmo de ordenamiento seleccionado y presenta información detallada sobre su ejecución. 

6. **main**: Función principal del programa. Lee parámetros de entrada, genera arreglos, realiza el ordenamiento con diferentes algoritmos y registra los tiempos de ejecución en un archivo. 


**Análisis del Trabajo Realizado** 

La implementación demuestra una estructura organizada y modular, siguiendo buenas prácticas de programación. La inclusión de la librería `<chrono>` para medir el tiempo de ejecución proporciona precision en las comparaciones entre algoritmos. Además, la salida de datos se redirige a un archivo para facilitar análisis ulteriores. 

La función principal `main` incorpora un bucle para la generación de múltiples arreglos y la ejecución de los algoritmos de ordenamiento. Los resultados, incluyendo el tamaño del arreglo, el número de arreglos generados y los tiempos de ejecución, son registrados en un archivo de salida. 

**Conclusiones** 

1. La práctica subraya la relevancia de la selección de algoritmos de ordenamiento eficientes según el contexto de uso. 

2. La medición del tiempo de ejecución aporta valiosa información sobre el rendimiento de los algoritmos en escenarios prácticos. 

3. La modularidad y encapsulamiento facilitan la expansión y mantenimiento del código, contribuyendo a una implementación sostenible. 

4. El diseño de la implementación proporciona una base sólida para análisis comparativos entre diferentes algoritmos de ordenamiento en futuras investigaciones.
 
5. el nivel de prcesamiento al ingresar 30 500000 peritio que se realizara en 6 horas asi que se determino que si seguiamos se extenderia demaciado a mas de una semana incluso.

1. Ordenar con Insertion Sort

El algoritmo de ordenamiento por inserción (insertion sort) se caracteriza por su simplicidad y eficiencia en listas pequeñas. En nuestras pruebas, este algoritmo demostró ser el más rápido para tamaños de arreglo moderados. Su complejidad cuadrática no impide que sea altamente competitivo en ciertos contextos.

2. Ordenar con Selection Sort

El algoritmo de ordenamiento por selección (selection sort) sigue a la par de insertion sort en términos de eficiencia. Si bien tiene una complejidad cuadrática, su rendimiento es destacable para arreglos de tamaño moderado. No obstante, para conjuntos de datos más grandes, puede mostrar una desventaja en comparación con otros algoritmos más avanzados.

3. Ordenar con Bubble Sort

El algoritmo de ordenamiento burbuja (bubblesort), por otro lado, se identifica como el más lento de todos los algoritmos evaluados. Su complejidad cuadrática y su enfoque básico de comparación y intercambio lo hacen menos eficiente en comparación con otros algoritmos, especialmente a medida que el tamaño del arreglo aumenta.

4. Ordenar con Merge Sort y QuickSort

Ambos algoritmos, merge sort y quicksort, se destacaron como los más eficientes en términos de velocidad de ejecución. Estos algoritmos, que siguen un enfoque de dividir y conquistar, demostraron ser altamente eficientes incluso para conjuntos de datos grandes. Su complejidad logarítmica y la capacidad de trabajar en paralelo con varias secciones del arreglo contribuyen a su rendimiento superior.

**Conclusiones Específicas**

Insertion Sort y Selection Sort: Eficientes para conjuntos de datos moderados, con insertion sort liderando en términos de velocidad.

Bubble Sort: Considerablemente más lento en comparación con los otros algoritmos, especialmente para tamaños de arreglo más grandes.

Merge Sort y QuickSort: Destacan como los algoritmos más eficientes, siendo óptimos para conjuntos de datos grandes.

**Recomendaciones**

Para conjuntos de datos pequeños a moderados, considerar el uso de insertion sort o selection sort debido a su eficiencia y simplicidad.

Evitar el uso de bubble sort para conjuntos de datos grandes, ya que su complejidad cuadrática afecta negativamente el rendimiento.

Para conjuntos de datos grandes, preferir merge sort o quicksort, ya que demostraron ser los más rápidos en nuestras pruebas.

**tabla** 

<img width="452" alt="Captura de pantalla 2024-01-30 215350" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-alantorresuam/assets/125683087/646e22f9-4a51-412b-bc29-e89e1ac6b002">


**Graficas**

<img width="308" alt="Captura de pantalla 2024-01-30 215403" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-alantorresuam/assets/125683087/5ea40dc0-da77-47a0-a566-f59465e6fd05">

<img width="309" alt="Captura de pantalla 2024-01-30 215415" src="https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-alantorresuam/assets/125683087/883cc592-7846-4daa-bb71-476f806a7f02">

 
