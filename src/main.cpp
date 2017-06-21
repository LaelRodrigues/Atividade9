/**
 * @file	main.h
 * @brief	Arquivo corpo principal de teste
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::srand;
using std::rand;

#include <ctime>
using std::time;

#include "buscaseq.h"
#include "buscabin.h"
#include "insertionsort.h"
#include "selectionsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include "bubblesort.h"
#include "pilha.h"

#define TAM 10

using namespace edb1;

int main() {

	int vet[TAM];

	srand(time(NULL));

	for(int i = 0; i < TAM; i++) {
		vet[i] = i+1;
	}

	cout << "Busca sequncial iterativa" << endl;
	bool result = sequencialIte(vet, TAM, 5);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	else {
		cout << "O elemento nao esta no vetor" << endl;
	}
	cout << endl;

	cout << "Busca sequncial recursiva" << endl;
	result = sequencialRec(vet, TAM, 20);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	else {
		cout << "O elemento nao esta no vetor" << endl;
	}
	cout << endl;

	cout << "Busca binaria iterativa" << endl;
	result = binariaIte(vet, TAM, 11);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	else {
		cout << "O elemento nao esta no vetor" << endl;
	}
	cout << endl;

	cout << "Busca binaria recursiva" << endl;
	result = binariaRec(vet, TAM, 7);
	if(result == true) {
		cout << "O elemento esta no vetor" << endl; 
	}
	else {
		cout << "O elemento nao esta no vetor" << endl;
	}
	cout << endl;

	for(int i = 0; i < TAM; i++) {
		vet[i] = rand() % 1000;
	}

	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao bubblesort" << endl;
	bubbleSort(vet, TAM);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << endl;

	for(int i = 0; i < TAM; i++) {
		vet[i] = rand() % 1000;
	}

	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao insertionsort" << endl;
	insertionSort(vet, TAM);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << endl;

	for(int i = 0; i < TAM; i++) {
		vet[i] = rand() % 1000;
	}

	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao selectionsort" << endl;
	selectionSort(vet, TAM);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << endl;

	for(int i = 0; i < TAM; i++) {
		vet[i] = rand() % 1000;
	}

	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao quicksort" << endl;
	quickSort(vet, 0, TAM-1);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << endl;

	for(int i = 0; i < TAM; i++) {
		vet[i] = rand() % 1000;
	}

	cout << "Vetor fora de ordem: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Aplicando o algoritmo de ordenacao mergesort" << endl;
	mergeSort(vet, 0, TAM-1);
	cout << "Vetor ordenado: ";
	for(int i = 0; i < TAM; i++) {
		cout << vet[i] << " "; 
	}
	cout << endl;
	cout << endl;

	quickSort(vet, 0, 9);
}