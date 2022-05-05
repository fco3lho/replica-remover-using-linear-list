#include "list.hpp"

int main(){

    Lista l;
	Item name;
	string line;
	ifstream my_file;

	menu();

	FLVazia(&l);
	cout << "Lista criada.\n";

	readText(&l, name);
	Compare(&l);
	LImprime(&l);

	return 0;
}