#include <iostream>
#include <fstream>


using namespace std; 

const int taml = 21,       //O tamanho das linhas da matriz VIDA
          tamc = 79;       //O tamanho das colunas da mtriza VIDA

//Declaração das funções utilizadas no programa
//Declaração da função que copia e compara as gerações do mundo VIDA
void comparaGeracao (bool MUNDO[taml+1][tamc+1],bool MUNDO2[taml+1][tamc+1]){
    for(int l =0; l < taml; l++){
        for(int c = 0; c < tamc; c++){MUNDO2[l][c] = MUNDO[l][c];}
 }
}
//Declaração da função que mata ou revive as céluals 
void KIRA(bool MUNDO[taml+1][tamc+1]){
    bool MUNDO2[taml+1][tamc+1] = {};
    comparaGeracao (MUNDO, MUNDO2);
    for(int l = 1; l < taml; l++){
        for(int c = 1; c < tamc; c++){
            int vivo = 0;
        for(int d = -1; d < 2; d++){
            for(int e = -1; e < 2; e++){
                if(!(d == 0 && e == 0)){
                    if(MUNDO2[l+d][c+e]) {
                        
                        vivo++;
                        
                    }
  }
 }
}
            if(vivo < 2) {MUNDO[l][c] = false;}
            else if(vivo == 3){MUNDO[l][c] = true;}
            else if(vivo > 3){MUNDO[l][c] = false;}
  }
 }
}
//Função que  transforma os valores binários em "*" e " " para o usuário 
void interface(bool MUNDO[taml+1][tamc+1]){
    for(int l = 1; l < taml; l++){
        for(int c = 1; c < tamc; c++){
            if(MUNDO[l][c] == true){
                cout << " *";
            }
            else{
                cout << "  ";
            }
            if(c == tamc-1){
                cout << endl;
            }
  }
 }
}



int main() {

    bool VIDA [22][80];    //Matriz do mundo VIDA
    ofstream fout;         //Cria arquivo para receber a população inicial 
    
    fout.open("populacao_inicial.txt"); //Abre o arquivo 

    fout << 4 << "\n";     //Quantidade de células iniciais
    fout << 1 << "\n"; 
    fout << 1 << "\n"; 
    fout << 1 << "\n"; 
    fout << 1 << "\n"; 

    fout.close();          //Fecha o arquivo 

    ifstream fin;          //Abre arquivo para leitura 
    fin.open("populacao_inicial.txt");
      if(fin.is_open()){   //Verifica se o arquivo foi aberto corretamente 
      int x,n;

      fin >> n;            //Variável com a quantidade de células
       
       fin >> x;           //Seleciona qual elemento da matriz começará vivo ou morto
       if(x =='0'){
        VIDA [1][1] = 0;   
       }

         if(x =='1'){
        VIDA [1][1] = 1;   
       }

       fin >> x;
       if(x =='0'){
        VIDA [2][1] = 0;
       }

       if(x =='1'){
        VIDA [2][1] = 1;
       }

       fin >> x;
       if(x =='0'){
        VIDA [1][2] = 0;
       }

       if(x =='1'){
        VIDA [1][2] = 1;
       }

       fin >> x;
       if(x =='0'){
        VIDA [2][2] = 0;
       }

       if(x =='1'){
        VIDA [2][2] = 1;
       }
          
          

      }
      else{
            cout << "Houve um erro na abertura do arquivo" << endl;
      }

    

    char controle;         //Variavel que recebe um caractere do usuario para mudar de geração 
     

        while (true){     //Inicio do jogo da vida

        interface(VIDA);  //Coloca as variações da população na tela
        KIRA(VIDA);       //Julga quem vive ou morre 
        cin >> controle;  //Espera um caractere do usuario para mudar de geração

         


        }
    }


