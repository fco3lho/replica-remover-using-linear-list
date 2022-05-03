#include "list.hpp"

void Swap(Item *a, Item *b){
	Item aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
}

void FLVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		cout << "Lista cheia!" << endl;
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void LRemove(Lista *l, Item d){
	bool ok = false;

	if(l->first == l->last)
		cout << "Lista vazia!" << endl;
	else{
		for(int i=l->first; i<l->last; i++)
			if(l->vet[i].nome == d.nome){
				Swap(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
	
		if(ok)
			l->last --;
	}
}

void Compara(Lista *l){
	for(int i = l->first; i < l->last; i++){
		for(int j = l->first; j < l->last; j++){
			if((j != i) && (l->vet[i].nome == l->vet[j].nome)){
				l->vet[j].analisador = 1;
				l->vet[i].contador += 1;
			}
		}

		//for(int k = l->first; i < l->last; i++){
		// 	if(l->vet[k].analisador == 1){
		// 		l->vet[k].nome = "\0";
		// 	}
		//}

		//if(l->vet[i].nome != "\0"){
		// 		
		//}
	}

	for(int i=l->first; i<l->last; i++)
		cout << l->vet[i].contador << endl;
	cout << endl;	

	// cout << l->vet[i].nome << ": "<< l->vet[i].contador << endl;		DÁ ERRO
}

void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++)
		cout << l->vet[i].nome << endl;
	cout << endl;
}

void menu(){
	cout << "\tMENU\n\n";
	cout << "1 - Insere na lista\n";
	cout << "2 - Remove da lista\n";
	cout << "3 - Imprime a lista\n";
	cout << "0 - Finaliza programa\n\n"; 
}