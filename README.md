# MenuFisica

## Descripción del proyecto
Programa desarrollado en lenguaje C++ que permite realizar cálculos básicos de física mediante un menú en consola.  
El sistema permite calcular: distancia, velocidad, tiempo.
Cada operación se implementó usando clases independientes que se integraron posteriormente en el menú principal.


## Herramientas utilizadas
- Lenguaje: C++
- Entorno de desarrollo: Visual Studio
- Control de versiones: Git
- Repositorio: GitHub

## Funcionamiento del programa

Al ejecutar el programa, se muestra el siguiente menú:

1.Calcular distancia
2.Calcular velocidad
3.Calcular tiempo
4.Salir

El usuario debe seleccionar una opción, en base a esta, el programa solicita los datos y muestra el resultado.

## Metodología de trabajo

- Se creó una rama por cada funcionalidad:
  - `feature-distancia`
  - `feature-velocidad`
  - `feature-tiempo`
- Cada integrante trabajó de manera independiente en su rama.
- Se realizaron commits claros y descriptivos por cada avance, por ejemplo: "Se creo el encabezado de la rama feature-distancia".
- Las ramas fueron integradas a la rama principal (`master`) mediante el proceso de merge.
- Finalmente, el menú principal fue implementado directamente en la rama principal.

## Repositorio

- Se utilizó un archivo `.gitignore` para evitar subir archivos generados automáticamente por Visual Studio.
- Solo se versionaron archivos relevantes, como: (`.cpp` y `.h`).
- El historial de commits evidencia el progreso y la integración de cada funcionalidad.

---

## Ejecución 

Para ejecutar el programa:

1. Abrir el proyecto en Visual Studio.
2. Compilar la solución.
3. Ejecutar usando Local Windows Debugger o Start Without Debugging.

