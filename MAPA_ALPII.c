#include <stdio.h>
#include <string.h>
#include <locale.h>

// Todo o código fora criado e executado no Replit, então funções para limpar o buffer e limpar o console são diferentes do habitual.

struct cadastro {
  int codigo;
  char nome[100];
  char cpf[20];
  char vacina[20];
  char data[12];
  int lote;
};

int main() {
  setlocale (LC_ALL, "Portuguese");
  int n;
  int op;
  int x;
  char consultacpf[20];
  struct cadastro lista_vac[n];
  int i;
  do {
  printf("Programa de controle de aplicações: \n1 - Cadastrar Vacina \n2 - Listar Aplicações \n3 - Consultar por CPF \n4 - Sair \n");
    __fpurge(stdin);
    scanf("%d", &op);
    system("clear");
    switch (op)
      {
        case 1:{
          printf("Digite a quantidade de vacinas a serem cadastradas: \n");
          scanf("%d", &n);
          
          for (i = 0; i < n; i++){
            lista_vac[i].codigo = i;
            printf("Digite o nome da pessoa: \n");
            __fpurge(stdin);
            gets(lista_vac[i].nome);
            printf("Digite o CPF da pessoa: \n");
            __fpurge(stdin);
            scanf("%s", &lista_vac[i].cpf);
            printf("Digite o nome da vacina: \n");
            __fpurge(stdin);
            scanf("%s", &lista_vac[i].vacina);
            printf("Digite a data: \n");
            __fpurge(stdin);
            scanf("%s", &lista_vac[i].data);
            printf("Digite o número do lote: \n");
            __fpurge(stdin);
            scanf("%d", &lista_vac[i].lote);
            system("clear");           
            }
          break;
          }
        case 2: {
          int i;
          for (i = 0; i < n; i++){
            printf("Código: %d", (lista_vac[i].codigo + 1));
            printf("\n");
            printf("Nome: %s", lista_vac[i].nome);
            printf("\n");
            printf("CPF: %s", lista_vac[i].cpf);
            printf("\n");
            printf("Nome da vacina: %s", lista_vac[i].vacina);
            printf("\n");
            printf("Data: %s", lista_vac[i].data);
            printf("\n");
            printf("Lote da aplicação: %d", lista_vac[i].lote);
            printf("\n \n");
          }
          break;
          }
        case 3: {
          printf("Digite o CPF que seja buscar: \n");
          scanf("%s", &consultacpf);
          for (i = 0; i < n; i++){
           x = strcmp(lista_vac[i].cpf, consultacpf);
            if (x == 0){
              printf("Dados encontrados referentes ao CPF de %s", consultacpf);
              printf("Código: %d", (lista_vac[i].codigo + 1));
              printf("\n");
              printf("Nome: %s", lista_vac[i].nome);
              printf("\n");
              printf("Noma da vacina: %s", lista_vac[i].vacina);
              printf("\n");
              printf("Data: %s", lista_vac[i].data);
              printf("\n");
              printf("Lote da aplicação: %d", lista_vac[i].lote);
              printf("\n \n");
            }       
          }
          if (x != 0){
            system("clear");
            printf("CPF não encontrado.\n");
          }
          break;
          }
        case 4: {
          break;
        }
        default: {
          printf("Opção inválida. Certifique-se que tenha digitado corretamente.\n");
          break;
          system("pause");
          system("clear");
          }
      }
    } while (op != 4);
  return 0;
}
