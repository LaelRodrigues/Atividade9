/**
 * @file	buscaseq.h
 * @brief	Definicao e implementacao das funçães de busca 
 *			sequencia em sua versao iterativa e recursiva
 * @author	LaelRodrigues (laelrodrigues7@gmail.com)
 * @since	20/06/2017
 * @date	20/06/2017
 */	

#ifndef BUSCASEQ_H
#define BUSCASEQ_H

namespace edb1 {

	/**
	 * @brief Funcao de busca sequencial que verifica de maneira 
	 *        iterativa se um elemento esta presente no vetor 	 
 	 * @param vetor Sequencia onde o elemento sera buscado
 	 * @param tam Tamanho do vetor
 	 * @param chave Elemento a ser buscado 
 	 * @return True se o elemento estiver no vetor ou false caso contrario
 	 */
 	template <typename T>
	bool sequencialIte(T *vetor, int tam, T chave){

		if(tam <= 0) {
			return false;
		}

		for(int i = 0; i < tam; i++) {
			if(vetor[i] == chave) {
				return true;
			}
		}
		return false;	
	}

	/**
	 * @brief Funcao de busca sequencial que verifica de maneira 
	 *        recursiva se um elemento esta presente no vetor 	 
 	 * @param vetor Sequencia onde o elemento sera buscado
 	 * @param tam Tamanho do vetor
 	 * @param chave Elemento a ser buscado 
 	 * @return True se o elemento estiver no vetor ou false caso contrario
 	 */
	template <typename T> 
	bool sequencialRec(T *vetor, int tam, T chave){

		if(tam <= 0) {
			return false;
		}

		if(vetor[0] == chave) {
			return true;
		}

		return sequencialRec(vetor+1, tam-1, chave);
	}
}

#endif