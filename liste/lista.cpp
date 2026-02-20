#include <vector>
#include <iostream>
int main(){
	std::vector<int> v;
	v.push_back(22);
	v.push_back(10);
	v.push_back(30);

	v.pop_back();          // rimuovi l'ultimo  → [22, 10]

	std::cout<<v[0];     // accesso per indice → 10
	std::cout<<" lunghezza lista "<<v.size(); // numero elementi    → 2	
}