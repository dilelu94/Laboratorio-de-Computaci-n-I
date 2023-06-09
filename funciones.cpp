#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;


/// Desarrollo de funciones / Definiciones
int posicionNumeroEnVector(int v[], int tam, int numero)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (v[i] == numero)
            return i;
    }
    return -1;
}
int minimoVector(int v[], int tam)
{
    int i, posMin = 0;
    for (i = 1; i < tam; i++)
    {
        if (v[i] < v[posMin])
        {
            posMin = i;
        }
    }
    return posMin;
}
void ordenarVector(int v[], int tam)
{
    int i, j, posmin, aux;
    for (i = 0; i < tam - 1; i++)
    {
        posmin = i;
        for (j = i + 1; j < tam; j++)
        {
            if (v[j] < v[posmin])
                posmin = j;
        }
        aux = v[i];
        v[i] = v[posmin];
        v[posmin] = aux;
    }
}

int maximoVector(int v[], int tam)
{
    int i, posMax = 0;
    for (i = 1; i < tam; i++)
    {
        if (v[i] > v[posMax])
        {
            posMax = i;
        }
    }
    return posMax;
}

void cargarAleatorio(int v[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        v[i] = (rand() % limite) + 1;
    }
}

void mostrarVector(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        cout << v[i] << "\t";
    }
}

int contarNumerosRepetidos(int v[], int numero, int tam)
{
    int i, cant = 0;
    for (i = 0; i < tam; i++)
    {
        if (v[i] == numero)
            cant++;
    }
    return cant;
}

void ponerCero(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        v[i] = 0;
    }
}

int sumarVector(int v[], int tam)
{
    int i, suma = 0;
    for (i = 0; i < tam; i++)
    {
        suma += v[i];
    }
    return suma;
}

void copiarVector(int v[], int v2[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        v2[i] = v[i];
    }
}

bool compararVectores(int v[], int v2[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (v2[i] != v[i])
            return false;
    }
    return true;
}

void cargarVector(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        cout << "INGRESE NUMERO: ";
        cin >> v[i];
    }
}

int maximoValorDelVector(int v[], int tam)
{
    int i, maximo = v[0];
    for (i = 1; i < tam; i++)
    {
        if (v[i] > maximo)
        {
            maximo = v[i];
        }
    }
    return maximo;
}

int buscarNumeroEnVector(int v[], int tam, int numero)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (v[i] == numero)
            return i;
    }
    return -1;
}

float promedioVector(int v[], int tam)
{
    int i, suma = 0;
    float promedio;
    for (i = 0; i < tam; i++)
    {
        suma += v[i];
    }
    promedio = (float)suma / tam;
    return promedio;
}

float promedio(float suma, int tam)
{
    float promedio;
    promedio = (float)suma / tam;
    return promedio;
}