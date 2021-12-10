#include <iostream>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class uniao{
 
 int i,j, p=0;
	
	int vet[6]; 
	int vet1[6];
	int vet2 [12];
	int *vet3;
	
	bool Reptt;
public:  
 	junta(int *vet3);
};

	//vetor = (int*) malloc( sizeof(int*) * tam );
	int uniao::junta(int *vet3){

    vet3 = (int *) malloc(sizeof(int));

for (i=0;i<6;i++){
    cout << "Digite o primeiro array: " << i << endl;
    cin >> vet[i];
}
for (i=0;i<6;i++){
   cout << "Digite o segundo array: " << i << endl;
    cin >> vet1[i];
}
 
for (i=0;i<6;i++){
    vet2[i] = vet[i];
}
 for (i=6; i<12; i++){
    vet2[i] = vet1[i-6];}
    
    for (i=0; i<12; i++){
        Reptt = false;
        for (j=0; j<i;j++){
            if(vet2[i] == vet2[j]){
                Reptt = true;
                break;
		}
    }

 if(!Reptt){
    vet3[p] = vet2[i];
    p++;}

    }

for(i=0; i<p; i++){
    cout << vet3[i] << " ";}
	}


    int main(){

        int *vet3;

        vet3 = (int *) malloc(sizeof(int));

        uniao posicao;
        posicao.junta(vet3);

    }
