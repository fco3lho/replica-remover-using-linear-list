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

void readText(Lista l, Item d){
	string line;
	ifstream my_file;

	my_file.open("Names2.txt");

	if(my_file.is_open()){
		while(! my_file.eof()){
			getline(my_file, line);
			d.nome = line;
			LInsert(&l, d);
		}
		my_file.close();
		cout << "\n";
	}

	else{
		cout << "Arquivo não abriu.\n";
	} 
}

void Compare(Lista *l){
	for(int i = l->first; i < l->last; i++){
		for(int j = l->first; j < l->last - 1; j++){
			if((i != j) && (l->vet[i].nome == l->vet[j].nome)){
				l->vet[j].nome = "\0";
				l->vet[i].contador += 1;
			}
		}
	}

	cout << "Comparação feita.\n\n";
}

void LImprime(Lista *l){
	cout << "____________________________________" << endl;
	cout << "\tIMPRESSÃO DA LISTA\n\n";
	for(int i=l->first; i<l->last; i++)
		cout << i << " - " << l->vet[i].nome << endl;
	cout << endl;
}

void menu(){
	cout << "\tMENU\n\n";
	cout << "1 - Insere na lista\n";
	cout << "2 - Remove da lista\n";
	cout << "3 - Imprime a lista\n";
	cout << "0 - Finaliza programa\n\n"; 
}