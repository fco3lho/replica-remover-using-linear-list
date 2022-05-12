#include "list.hpp"

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

void readText(Lista *l, Item d){
	string line;
	ifstream my_file;

	my_file.open("Names.txt");

	if(my_file.is_open()){
		while(! my_file.eof()){
			getline(my_file, line);
			d.nome = line;
			LInsert(l, d);
		}
		my_file.close();
		cout << "\n";
	}

	else{
		cout << "Arquivo não abriu.\n";
	} 
}

void Compare(Lista *l){
	for(int i = l->first; i < l->last - 1; i++){
		for(int j = i+1; j < l->last; j++){
			if(l->vet[i].nome == l->vet[j].nome){
				l->vet[j].nome = "\0";
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
