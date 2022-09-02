#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	int a = 0;
	int i,b, contador, n, nchar, e1, e2, e3, e4, e5, certo, animacao, animacao2;
 char frase[100], resposta[100],tentativa, confirmar, continuar,opcao;

 do {

	printf("\nษออออออออออออออออออออออออออออออป");
	printf("\nบ       JOGO DA FORCA          บ");
	printf("\nฬออออออออออออออออออออออออออออออน");
	printf("\nบ 1- 1 Jogador                 บ");
	printf("\nบ 2- 2 Jogadores               บ");
	printf("\nบ 3- Dicas                     บ");
    printf("\nศออออออออออออออออออออออออออออออผ");
	printf("\n Escolha uma opcao:");
	scanf("%i", &a);
	if(a==1){

	FILE *file;
	srand(time(NULL));
	int n = rand() % 100;

	file = fopen("palavras.txt","r"); //abrindo o arquivo que fica as palavras que serใo usadas durante o jogo...

	while(n--)
		fscanf(file ,"%s", frase);
		do{


	system("cls");
	printf("                              1 JOGADOR \n\n");

	 printf("___________   \n|         |   \n|        _|_\n|         O   Jogo da Forca por Alisson \n|        /|\\    \n|        / \\ \n| \n| \n| \n");


          confirmar = 'n';
  while(confirmar != 'S')
    {
      certo = 0;
      nchar=0;
      n = 0;
      i=0;
      contador = 0;
      e1 = ' ';
      e2 = ' ';
      e3 = ' ';
      e4 = ' ';
      e5 = ' ';
	strcpy(resposta,frase);//copia a string de origem para a de destino....
	b = strlen(frase);// retorna o tamanho da string...

	{

	printf("%c",frase[i]);//armazena a palavra sorteada mais acima...

		}

	printf("\n\n\n ");
	 printf("Confirmar? (digite 's' para confirmar e 'n' para digitar novamente: ", frase);
      fflush(stdin);
      scanf("%c", &confirmar);
      switch(confirmar)//la็o da confirma็ใo pra iniciar o jogo...
      {
          case 's':0
          printf("O jogo sera iniciado...\n");
          system("PAUSE");
          system("CLS");
          for(i = 0; i < 100; i++)
            {
              resposta[i]='_';
            }//la็o que substitui as letras da palavra sorteada por '_'...
          while(contador < 6)
            {
              n=0;
              certo=0;
              switch(contador)//la็o que mostrarแ a situa็ใo do jogador de acordo com suas tentativas e junto a isso desenhar o bonequinho...
                {
                  case 0: printf("___________   \n|         |   \n|        _|_\n|          \n|         \n|         \n| \n| \n| \n\n");
                          break;

                  case 1: printf("___________   \n|         |   \n|        _|_\n|         O    \n|         \n|       \n| \n| \n| \n\n");
                          break;

                  case 2: printf("___________   \n|         |   \n|        _|_\n|         O    \n|         |    \n|         \n| \n| \n| \n\n");
                          break;

                  case 3: printf("___________   \n|         |   \n|        _|_\n|         O    \n|        /|    \n|         \n| \n| \n| \n\n");
                          break;

                  case 4: printf("___________   \n|         |   \n|        _|_\n|         O    \n|        /|\\    \n|         \n| \n| \n| \n\n");
                          break;

                  case 5: printf("___________   \n|         |   \n|        _|_\n|         O    \n|        /|\\    \n|        /  \n| \n| \n| \n\n");
                          break;
                }
              for(i=0; i < 100; i++)//la็o pra testar se a letra digitada cont้m na palavra sorteada...
                {
                  if(frase[i]=='\0')
                    {
                      nchar = i;
                      break;
                    }
                  else
                    {
                      if(frase[i]==' ')
                        {
                          resposta[i]=' ';
                          printf("%c", resposta[i]);
                        }
                      else
                        {
                          if(frase[i]==tentativa)
                            {
                              resposta[i]=frase[i];
                            }
                        }
                    }
                  printf("%c ", resposta[i]);
                }
              printf("\n\n%c %c %c %c %c\n", e1, e2, e3, e4, e5);
              switch(contador)//esse la็o dentro do la็o while, serve pra controlar e imprimir na tela quantas tentativas ainda resta.
                {
                  case 0: puts("\n\nVoce pode errar 6 vezes");
                          break;
                  case 1: puts("\n\nVoce pode errar 5 vezes");
                          break;
                  case 2: puts("\n\nVoce pode errar 4 vezes");
                          break;
                  case 3: puts("\n\nVoce pode errar 3 vezes");
                          break;
                  case 4: puts("\n\nVoce pode errar 2 vezes");
                          break;
                  case 5: puts("\n\nSe errar agora morre! HAHhahahAHaHhahahaHa!!!");
                }
                for(i = 0; i <= nchar; i++)
                {
                 if(tentativa!=' ')
                   {
                    if(resposta[i]!='_')
                      {
                        certo++;
                        if(certo==nchar)
                          {
                            contador=7;
                            break;
                          }
                      }
                   }
                }
              if(certo!=nchar)
              {
              printf("\n\nDigite uma letra: ");
              fflush(stdin);
              scanf("%c", &tentativa);
              tentativa = tolower(tentativa);//converter em min๚scula...
              }
              for(i = 0; i < nchar; i++)//imprimir a situa็ใo da palavra de acordo com as tentativas...
                {
                  if(tentativa!=frase[i])//la็o que controla as tentativas,isso ้,se a letra nใo tiver na palavra, ela reduz uma tentativa...
                    {
                      n++;
                      if(n==nchar)
                        {
                          contador++;
                          if(contador==1)
                            {
                              e1 = tentativa;
                            }
                          if(contador==2)
                            {
                              e2 = tentativa;
                            }
                          if(contador==3)
                            {
                              e3 = tentativa;
                            }
                          if(contador==4)
                            {
                              e4 = tentativa;
                            }
                          if(contador==5)
                            {
                              e5 = tentativa;
                            }
                        }
                    }
              }
              system("cls");
            }
          default: confirmar = 'n';
        }
        if(contador==6)//caso o jogador tenha erradp todas as vezes permitida, esse la็o serve pra revelar a palavra certa e imprimir que a pessoa perdeu...
        {
          printf("___________   \n|         |   \n|        _|_\n|         O    \n|        /|\\    \n|        / \\ \n| \n| \n| \n\n");
          for(i = 0; i < nchar; i++)
            {
              if(resposta[i]==frase[i])
                {
                  printf("%c ", resposta[i]);
                }
              else
                {
                  printf("(%c) ", frase[i]);
                }
            }
          printf("\n\n%c %c %c %c %c %c\n", e1, e2, e3, e4, e5, tentativa);
          printf("\n\n\nVOCE PERDEU!!!!\n");
          system("PAUSE");
        }
        if(contador==7)//este la็o ้ se o jogador tiver acertado a palavra, entใo ele gera a anima็ใo da vit๓ria...
        {
          for(animacao=0;animacao<7;animacao++)
            {
              for(animacao2=0;animacao2<5;animacao2++)
              {
                system("cls");
                printf("Parabens!! Voce Venceu!!\n");
                printf("___________ \n|         | \n|        _|_\n|\n|\n|         O \n|        /|\\ \n|        / \\\n|\n\n");
              }
              for(animacao2=0;animacao2<5;animacao2++)
              {
                system("cls");
                printf("Parabens!! Voce Venceu!!\n");
                printf("___________ \n|         | \n|        _|_\n|\n|\n|\n|        _O_\n|         | \n|        / \\\n\n");
              }
              for(animacao2=0;animacao2<5;animacao2++)
              {
                system("cls");
                printf("Parabens!! Voce Venceu!!\n");
                printf("___________ \n|         | \n|        _|_\n|\n|\n|        \\O/\n|         | \n|        / \\\n|\n\n");
              }
            }
          system("cls");
          printf("Parabens!! Voce Venceu!!\n");
          printf("___________ \n|         | \n|        _|_\n|\n|\n|\n|        \\O/\n|         | \n|        / \\\n\n");
          tentativa='_';
        }
      confirmar = 'S';
      printf("Deseja jogar novamente (S/N)? ");//se o jogador deseja jogar novamente... caso a resposta seja sim ele irแ rodar denovo....
      fflush(stdin);
      continuar = toupper(getchar());
	}
		}while(continuar=='S');
system("PAUSE");
}
else
if(a == 2){
      	do{
           system("cls");
           printf("                              2 JOGADORES \n\n");
  printf("___________   \n|         |   \n|        _|_\n|         O   Jogo da Forca por Alisson \n|        /|\\    \n|        / \\ \n| \n| \n| \n");
  confirmar = 'n';

  while(confirmar != 'S')
    {
      certo = 0;
      nchar=0;
      n = 0;
      i=0;
      contador = 0;
      e1 = ' ';
      e2 = ' ';
      e3 = ' ';
      e4 = ' ';
      e5 = ' ';
      printf("\nCertifique-se que o outro jogador nao veja e digite a palavra ou a frase desejada: ");
      fflush(stdin);
      gets (frase);//armazena a palavra digitada numa strig 's'...
      printf("%s, confirmar? (digite 's' para confirmar e 'n' para digitar novamente: ", frase);
      fflush(stdin);
      scanf("%c", &confirmar);
      switch(confirmar)
        {
          case 's':
          printf("O jogo sera iniciado...\n");
          system("PAUSE");
          system("CLS");
          for(i = 0; i < 100; i++)
            {
              resposta[i]='_';
            }
          while(contador < 6)
            {
              n=0;
              certo=0;
              switch(contador)
                {
                  case 0: printf("___________   \n|         |   \n|        _|_\n|          \n|         \n|         \n| \n| \n| \n\n");
                          break;

                  case 1: printf("___________   \n|         |   \n|        _|_\n|         O    \n|         \n|       \n| \n| \n| \n\n");
                          break;

                  case 2: printf("___________   \n|         |   \n|        _|_\n|         O    \n|         |    \n|         \n| \n| \n| \n\n");
                          break;

                  case 3: printf("___________   \n|         |   \n|        _|_\n|         O    \n|        /|    \n|         \n| \n| \n| \n\n");
                          break;

                  case 4: printf("___________   \n|         |   \n|        _|_\n|         O    \n|        /|\\    \n|         \n| \n| \n| \n\n");
                          break;

                  case 5: printf("___________   \n|         |   \n|        _|_\n|         O    \n|        /|\\    \n|        /  \n| \n| \n| \n\n");
                          break;
                }
              for(i=0; i < 100; i++)
                {
                  if(frase[i]=='\0')
                    {
                      nchar = i;
                      break;
                    }
                  else
                    {
                      if(frase[i]==' ')
                        {
                          resposta[i]=' ';
                          printf("%c", resposta[i]);
                        }
                      else
                        {
                          if(frase[i]==tentativa)
                            {
                              resposta[i]=frase[i];
                            }
                        }
                    }
                  printf("%c ", resposta[i]);
                }
              printf("\n\n%c %c %c %c %c\n", e1, e2, e3, e4, e5);
              switch(contador)
                {
                  case 0: puts("\n\nVoce pode errar 5 vezes");
                          break;
                  case 1: puts("\n\nVoce pode errar 4 vezes");
                          break;
                  case 2: puts("\n\nVoce pode errar 3 vezes");
                          break;
                  case 3: puts("\n\nVoce pode errar 2 vezes");
                          break;
                  case 4: puts("\n\nVoce pode errar apenas mais uma vez");
                          break;
                  case 5: puts("\n\nSe errar agora morre! MuahAHAHhahahAHaHhahahaHa!!!");
                }
                for(i = 0; i <= nchar; i++)
                {
                 if(tentativa!=' ')
                   {
                    if(resposta[i]!='_')
                      {
                        certo++;
                        if(certo==nchar)
                          {
                            contador=7;
                            break;
                          }
                      }
                   }
                }
              if(certo!=nchar)
              {
              printf("\n\nDigite uma letra: ");
              fflush(stdin);
              scanf("%c", &tentativa);
              tentativa = tolower(tentativa);
              }
              for(i = 0; i < nchar; i++)
                {
                  if(tentativa!=frase[i])
                    {
                      n++;
                      if(n==nchar)
                        {
                          contador++;
                          if(contador==1)
                            {
                              e1 = tentativa;
                            }
                          if(contador==2)
                            {
                              e2 = tentativa;
                            }
                          if(contador==3)
                            {
                              e3 = tentativa;
                            }
                          if(contador==4)
                            {
                              e4 = tentativa;
                            }
                          if(contador==5)
                            {
                              e5 = tentativa;
                            }
                        }
                    }
              }
              system("cls");
            }
          default: confirmar = 'n';
        }
      if(contador==6)
        {
          printf("___________   \n|         |   \n|        _|_\n|         O    \n|        /|\\    \n|        / \\ \n| \n| \n| \n\n");
          for(i = 0; i < nchar; i++)
            {
              if(resposta[i]==frase[i])
                {
                  printf("%c ", resposta[i]);
                }
              else
                {
                  printf("(%c) ", frase[i]);
                }
            }
          printf("\n\n%c %c %c %c %c %c\n", e1, e2, e3, e4, e5, tentativa);
          printf("\n\nVOCE PERDEU!\n");
          system("PAUSE");
        }
      if(contador==7)
        {
          for(animacao=0;animacao<7;animacao++) //la็o pra fazer o bonequiho se mover
            {
              for(animacao2=0;animacao2<5;animacao2++)
              {
                system("cls");
                printf("Parabens!! Voce Venceu!!\n");
                printf("___________ \n|         | \n|        _|_\n|\n|\n|         O \n|        /|\\ \n|        / \\\n|\n\n");
              }
              for(animacao2=0;animacao2<5;animacao2++)
              {
                system("cls");
                printf("Parabens!! Voce Venceu!!\n");
                printf("___________ \n|         | \n|        _|_\n|\n|\n|\n|        _O_\n|         | \n|        / \\\n\n");
              }
              for(animacao2=0;animacao2<5;animacao2++)
              {
                system("cls");
                printf("Parabens!! Voce Venceu!!\n");
                printf("___________ \n|         | \n|        _|_\n|\n|\n|        \\O/\n|         | \n|        / \\\n|\n\n");
              }
            }
          system("cls");
          printf("Parabens!! Voce Venceu!!\n");
          printf("___________ \n|         | \n|        _|_\n|\n|\n|\n|        \\O/\n|         | \n|        / \\\n\n");
          tentativa='_';
          system("cls");
          printf("Parabens!! Voce Venceu!!\n");
          printf("___________ \n|         | \n|        _|_\n|\n|\n|\n|        \\O/\n|         | \n|        / \\\n\n");
          tentativa='_';
        }
      confirmar = 'S';
      printf("Deseja jogar novamente (S/N)? ");
      fflush(stdin);
      continuar = toupper(getchar());
    }

 } while(continuar=='S');
}
 else if(a== 3){
system("cls");
printf("Intrucoes 1 jogador: O computador seleicona uma palavra aleatoria, na qual o jogador tera que acertar com no maximo 6 chances \n\n\n" );
  	printf("Instrucoes para dois jogadores: esse moodo e para ser jogado de duas pessoas da seguinte forma: a primeira pessoa digita uma palavra ou frase e a segunda tenta advinhar o que foi digitado.\n");
}

} while(a==3);
}

