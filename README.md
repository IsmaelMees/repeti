Implementar um sistema que usuário entre com 6 valore em um array, depois entre com mais 6 valores e mostre um array com as posições dinamicas de numeros unicos no merge dos arrays.

Instale o Dev++; Sistema operacional windows; Desenvolvido em C++ Autor: Ismael Data: 10-12-2021

  Classe e variaveis
      class valores{
      int i, j, k=0;
      int arrayA[6], arrayB[6], arrayC[12], *arrayD;
      bool rept;
      public:
      junta(int *arrayD);
 
 Entrada de valores
    for (i=0;i<6;i++){
    cout << "Digite o primeiro array: " << i << endl;
        cin >> arrayA[i];
 
 Preenchimento de valores
   for (i=0; i<6; i++){
    arrayC[i] = arrayA[i];}
 
 Encontra valores repetidos 
    for (i=6; i<12; i++){
    vet2[i] = vet1[i-6];}
    for (i=0; i<12; i++){
        Reptt = false;
        for (j=0; j<i;j++){
            if(vet2[i] == vet2[j]){
                Reptt = true;
                break;
 
 Criar um array dinamico
    if(!Reptt){
    vet3[p] = vet2[i];
    p++;}

Printar o array dinamico
  for(i=0; i<p; i++){
    cout << vet3[i] << " ";}
