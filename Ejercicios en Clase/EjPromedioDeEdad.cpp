/// Ejercicio: EjIngresarNumeroDeCursoYLasEdadesDeDiesAlumnosPorCursoCalcularPromedioDeEdadDeCadaCurso
/// Autor: Diego Leonel Luque
/// Fecha: 21/04/2023
/// Comentario:

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  /*
  Se Ingresa 0 para finalizar el ingreso de cursos
  10 alumnos por curso
  */
  int curso = 1, edad, sumaEdades, promedioEdad;
  while (curso != 0)
  {
    cout << "Ingrese el numero de curso: ";
    cin >> curso;
    if (curso != 0)
    {
      sumaEdades = 0;
      for (int i = 1; i <= 10; i++)
      {
        cout << "Ingrese la edad del alumno " << i << ": ";
        cin >> edad;
        sumaEdades += edad;
      }
      promedioEdad = sumaEdades / 10;
      cout << "El promedio de edad del curso " << curso << " es: " << promedioEdad << endl;
    }
  }

  system("pause");
  return 0;
}
