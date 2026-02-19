#include <iostream>
int cambio_num(int& n){
    n=1;
    return n;
}
int main(){
    int num=0;
    std::cout<<"il numero e'"<<num<<std::endl;
    cambio_num(num);//<- mandiamo il puntatore
	std::cout<<num<<std::endl;
//	^^^^- libreria per usare funzione di essa
    return 0;
}
