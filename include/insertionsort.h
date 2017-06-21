/**
 * @file	insertionsort.h
 * @brief	Definicao e implementacao do algoritmo de 
 *			ordenacao insertionsort
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

namespace edb1 {

	template<typename T>
	void insertionSort(T *vetor, int tam) {
		
		int pos; 
		T temp;
    	for (int i = 1; i < tam; i++) {
        	pos = i;
       		temp = vetor[i]; 
       		while (pos > 0 && vetor[pos-1] > vetor[pos]) {
            	temp = vetor[pos];
            	vetor[pos] = vetor[pos-1];
            	vetor[pos-1] = temp;
            	pos--;
        	}
    	}
	}
}

#endif