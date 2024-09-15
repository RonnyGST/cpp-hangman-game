#include <iostream>//Biblioteca para entrada e saída de dados
#include <math.h>//Biblioteca para operacões matemáticas
#include <stdlib.h>//Biblioteca que possui a função de limpar o console
#include <cstdlib>//Biblioteca que possui a função de gerar um número aleatório
#include <ctime>//Biblioteca que pode pegar o horário atual da máquina

using namespace std;

//Macro que contém a função de limpar o console. Mais detalhes na função main()
#define clear (void)system("clear||cls");
#define space cout << endl;


char wordBank[10][5];//Banco de palavras que contém as palavras que serão utilizadas no jogo

void setWordBank(){
  wordBank[0][0] = 'p';
  wordBank[0][1] = 'o';
  wordBank[0][2] = 'd';
  wordBank[0][3] = 'e';
  wordBank[0][4] = 'r';

  wordBank[1][0] = 'n';
  wordBank[1][1] = 'o';
  wordBank[1][2] = 'b';
  wordBank[1][3] = 'r';
  wordBank[1][4] = 'e';

  wordBank[2][0] = 's';
  wordBank[2][1] = 'o';
  wordBank[2][2] = 'n';
  wordBank[2][3] = 'h';
  wordBank[2][4] = 'o';

  wordBank[3][0] = 'g';
  wordBank[3][1] = 'e';
  wordBank[3][2] = 'n';
  wordBank[3][3] = 'r';
  wordBank[3][4] = 'o';

  wordBank[4][0] = 'c';
  wordBank[4][1] = 'l';
  wordBank[4][2] = 'a';
  wordBank[4][3] = 'v';
  wordBank[4][4] = 'a';

  wordBank[5][0] = 'g';
  wordBank[5][1] = 't';
  wordBank[5][2] = 'a';
  wordBank[5][3] = 'v';
  wordBank[5][4] = 'i';

  wordBank[6][0] = 'p';
  wordBank[6][1] = 'i';
  wordBank[6][2] = 'z';
  wordBank[6][3] = 'z';
  wordBank[6][4] = 'a';

  wordBank[7][0] = 'a';
  wordBank[7][1] = 'r';
  wordBank[7][2] = 'e';
  wordBank[7][3] = 'i';
  wordBank[7][4] = 'a';

  wordBank[8][0] = 'n';
  wordBank[8][1] = 'a';
  wordBank[8][2] = 'r';
  wordBank[8][3] = 'i';
  wordBank[8][4] = 'z';

  wordBank[9][0] = 'c';
  wordBank[9][1] = 'o';
  wordBank[9][2] = 'b';
  wordBank[9][3] = 'r';
  wordBank[9][4] = 'a';
}

//Função que gera uma descrição da palavra sorteada de acordo com sua posição na matriz.
string setWordDescription(int x){
  string wordDescription;

  switch(x){
    case 0:
      wordDescription = "Verbo que significa a capacidade de fazer algo ou ter influencia sobre algo ou alguem.";
      break;

    case 1:
      wordDescription = "Classe social da idade media.";
      break;

    case 2:
      wordDescription = "Evento que acontece em nosso cerebro quando estamos em sono profundo.";
      break;

    case 3:
      wordDescription = "Pessoa cujo parentesco em uma familia seria marido da filha da sogra/sogro.";
      break;

    case 4:
      wordDescription = "Objeto usado na pre-historia para defesa ou obtencao de alimentos (tambem pode ser entendido como pedaco de madeira).";
      break;
        
    case 5:
      wordDescription = "Um dos melhores jogos de todos os tempos de mundo aberto que sera lancado em breve; que possui umas das franquias mais famosas.";
      break;

    case 6:
      wordDescription = "Alimento redondo que tem origem italiana.";
      break;

    case 7:
      wordDescription = "Encontrado em abundancia em praias.";
      break;

    case 8:
      wordDescription = "Responsavel por um dos 5 sentidos sensoriais do corpo humano.";
      break;

    case 9:
      wordDescription = "Reptil.";
      break;

    default:
      wordDescription = "Erro desconhecido: a palavra não foi gerada de maneira correta";
      break;
  }

  return wordDescription;
}

//Função que gera um número aleatório entre 0 e o número fornecido no parâmetro
int randomInt(int x){
  srand(time(nullptr));
  int result;

  result = rand() % x;

  return result;
}

//Faz o desenho de um boneco e a forca
void drawGame(int x){
  char draw[5][6];

  draw[0][0] = ' ';
  draw[0][1] = '_';
  draw[0][2] = '_';
  draw[0][3] = '_';
  draw[0][4] = '_';
  draw[0][5] = '_';

  draw[1][0] = '|';
  draw[1][1] = ' ';
  draw[1][2] = ' ';
  draw[1][3] = ' ';
  draw[1][4] = ' ';
  draw[1][5] = ' ';

  draw[2][0] = '|';
  draw[2][1] = ' ';
  draw[2][2] = ' ';
  draw[2][3] = ' ';
  draw[2][4] = ' ';
  draw[2][5] = ' ';

  draw[3][0] = '|';
  draw[3][1] = ' ';
  draw[3][2] = ' ';
  draw[3][3] = ' ';
  draw[3][4] = ' ';
  draw[3][5] = ' ';

  draw[4][0] = '|';
  draw[4][1] = '_';
  draw[4][2] = '_';
  draw[4][3] = '_';
  draw[4][4] = '_';
  draw[4][5] = '_';

  switch(x){
    case 0:
      break;

    case 1:
      draw[1][4] = 'O';
      break;

    case 2:
      draw[1][4] = 'O';
      draw[2][4] = '8';
      break;

    case 3:
      draw[1][4] = 'O';
      draw[2][4] = '8';
      draw[3][3] = '/';
      break;

    case 4:
      draw[1][4] = 'O';
      draw[2][4] = '8';
      draw[3][3] = '/';
      draw[3][5] = ')';
      break;

    case 5:
      draw[1][4] = 'O';
      draw[2][4] = '8';
      draw[3][3] = '/';
      draw[3][5] = ')';
      draw[2][3] = '/';
      break;

    case 6:
      draw[1][4] = 'O';
      draw[2][4] = '8';
      draw[3][3] = '/';
      draw[3][5] = ')';
      draw[2][3] = '/';
      draw[1][5] = '/';
      break;

    default:
      break;
  }



  //Desenhar a forma na tela
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 6; j++){
      cout << draw[i][j];
    }
    cout << endl;
  }
  space;
}


void game(){
  
  int randomNumber = randomInt(10);//Número aleatório que servirá para escolher uma palavra do banco de palavras
  int x = 1;//Variável que guarda a quantidade de acertos no jogo
  int y = 0;//Variável que guarda a quantidade de rodadas do jogo e é usada para colocar a tempLetter no index correto.
  int fails = 0;//Variável que guarda a quantidade de erros do jogador
  bool z = true;//Variável que guarda se o jogador digitou uma letra que não foi digitada anteriormente
  bool isFail = true;//Variável que guarda se o jogador errou a letra digitada. Ela já começa verdadeira até o jogador provar o contrário digitando uma letra certa.
  string wordDescription = setWordDescription(randomNumber);

  char word[5] = {};//Vetor que irá mostrar a palavra sendo formada. Com as chaves, eu já defino que os valores do vetor são vazios.


  char letter;//Letra digitada pelo usuário que será comparada com a letra da palavra sorteada.
  char* tempLetter = new char[ '_','_', '_', '_', '_', '_', '_', '_', '_', '_'];//Variável temporária que irá receber a letra digitada pelo usuário
  


  //Repita o jogo enquanto os acertos forem menor que a quantidade de letras da palavra sorteada e sua quantidade de falhas for menor do que 6
  while(x < 6 && fails < 6){
    do{
      space;

      drawGame(fails);
      //Mostrar a palavra formada
      for(int i= 0; i < 5; i++){
        cout << word[i] << " ";
      }
  
      cout << endl;
  
      for(int i = 0; i < 5; i++){
        cout << "_" << " ";
      }
      space;
      
      space;
      cout << wordDescription << endl;//Descrição da palavra sorteada.
      space;

      cin >> letter;//O usuário digita a letra que ele acha que está na palavra
      clear;
  
      //Veriica se a letra digitada pelo usuário já foi digitada anteriormente
      for(int i = 0; i < 10; i++){
        if(letter == tempLetter[i]){
          z = true;
          break;
        }else{
          z = false;
        }
      }

      if(z){
        cout << "A letra " << letter << " ja foi digitada anteriormente." << endl;
        space;
      }
    }while(z);
    

    //Verifica se a letra digitada está na palavra
    for(int i = 0; i < 6; i++){
      if(letter == wordBank[randomNumber][i] && z == false){
        word[i] = wordBank[randomNumber][i];//Se a letra aparecer duas vezes na palavra, então o if será true duas vezes.
        isFail = false;    
      }
    }
    //Verificar se o jogador errou a letra digitada e incrementar a variável de erros
    if(isFail){
      fails++;//Incrementa a variável de erros
    }

    isFail = true;//Volta a variável de verificação de erros para verdadeira para o jogador provar o contrário novamente.
    y++;//Incrementar y pois se passou uma rodada

    space;
    space;
    cout << "Letras que ja foram digitadas:\n";
    //Adicionar a letra digitada pelo usuário no vetor temporário e imprimir as letras que já foram digitadas
    tempLetter[y] = letter;
    cout << "[ ";
    for(int i = 0; i < 10; i++){
      cout << tempLetter[i];
    }
    cout << " ]";

    for(int i = 0; i < 6; i++){
      if(letter == wordBank[randomNumber][i] && z == false){
        x++;
      }
    }
    space;
  }
  drawGame(fails);
  space;

  delete [] tempLetter;//Após o jogo acabar, a variável temporária é apagada
  

  if(x >= 6){
    //Resetar x e y para poder reiniciar o jogo
    x = 1;
    y = 0;
    cout << "Parabens, voce acertou a palavra: \n";
    for(int i = 0; i < 5; i++){
      cout << word[i] << " ";
    }
    space;
  }else if(fails >= 6){
    //Resetar x e y para poder reiniciar o jogo
    x = 1;
    y = 0;
    cout << "Voce perdeu, a palavra era: \n";
    for(int i = 0; i < 5; i++){
      cout << wordBank[randomNumber][i] << " ";
    }
    space;
  }
}



int main(){
  clear;
  setWordBank();//Definir o banco de palavras possíveis
  game();//Iniciar o jogo
  
  int x;
  space;
  cout << "Play again? (1 = yes, 2 = no)\n";
  cin >> x;

  
  if(x == 1){
    clear;
    main();
  }

  return 0;
}