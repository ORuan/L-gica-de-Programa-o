#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

char prod[10][15],cliente[10][20];
int quant[5],id,valid,x,qunt,i;
float pre[5],caixa;

void logar(){
    system("clear");
    carregarEstoque();
    carregarClientes();
    char nome[20],senha[20],resultado[2];
    printf("\n---------LOGIN------------");
    printf("\nDigite seu nome :");
    scanf("%s", &nome);

    printf("\ndigite sua senha :");
    scanf("%s", &senha);
    
    if((strcmp(nome,"admin")==0) && (strcmp(senha,"123")==0)){
        Menu();
    }else {
        printf("\nNão Ok");
        printf("\nDeseja continuar ? s ou n");
        scanf("%s", &resultado);
        if(strcmp(resultado,"s")==0){
            logar();
        }
    }
}

void Menu(){
    int opcao;
    system("clear");
    printf("\n- - - - - - M E N U - - - - - -\n");
    printf("1 - Mostrar produtos em Estoque\n");
    printf("2 - Mostrar clientes  \n");
    printf("3 - Cadastrar Novo Cliente \n");
    printf("4 - Mostrar dinheiro em Caixa\n");
    printf("5 - Vender Produtos\n");
    printf("6 - Limpar tela\n");
    printf("7 - Sair\n");
    printf("- - - - - - - - - - - - - - - -\n");
    printf("O que você deseja fazer? Escolha:\n");
    scanf("%d", &opcao);

    switch (opcao) {

    case 1:
        listarProdutos();
        break;
    case 2:
        listarClientes();
        break;
    case 3:
        novoCliente();
        break;
    case 4:
        mostrarCaixa();
        break;
    case 5:
        venderProduto();
        break;
    case 6:
        system("clear");
        Menu();
    case 7:
        break;
    default:
        printf("Opção inválida");
        Menu();
    }
}

void carregarEstoque(){

    strcpy( prod[0],"Feijão");
    strcpy( prod[1],"Arroz");
    strcpy( prod[2],"Macarrão");
    strcpy( prod[3],"Café");
    strcpy( prod[4],"Tapioca");

    pre[0]= 2.25;
    pre[1]= 1.5;
    pre[2]= 2.35;
    pre[3]= 2.15;
    pre[4]= 2.45;
    
    quant[0]=40;    
    quant[1]=45;
    quant[2]=60;
    quant[3]=48;
    quant[4]=50;
    
}

void carregarClientes(){
    strcpy( cliente[0],"Marcos");
    strcpy( cliente[1],"Pedro");
    strcpy( cliente[2],"Joao");
    strcpy( cliente[3],"Carol");
    strcpy( cliente[4],"Carlos");
}

void listarProdutos(){
    
    printf("--------------------------------------------------------------");
    for (int i=0;i<5;i++){
        printf("\n");
        printf("ID: %d Produto: %s - Preço: %.2f - Quantidade em Estoque:%d\n",i, prod[i], pre[i], quant[i]);
        
    }    
    irpara();
    system("clear");
}

void listarClientes(){
    system("clear");
    carregarClientes();
    for(int i=0;i<10;i++){
        printf("ID : %d - Cliente = %s", i , cliente[i]);
        printf("\n");
    }   
    irpara();
}
void irpara(){
    char escol[2];
    printf("\n------------------------");
    printf("\nDeseja ir para o menu ? s - n");
    scanf("%s", escol);
    if (strcmp(escol,"s")==0){
        Menu();
    }
}
void mostrarCaixa(){
    system("clear");
    printf("\n----------------------------------\n");
    printf("\nVocê tem : %.3f em caixa.", caixa);
    irpara();
}

void venderProduto(){
    double total;
    char escolha[2], continuar[2];
    carregarClientes();
    carregarEstoque();
    system("clear");
    printf("------------------------------------");
    printf("\nInforme o ID do produto que deseja comprar : ");
    scanf("%d", &id);
    if (id>5){
        printf("\nProduto inválido");
        Menu();
    }
    printf("\nQual a quantidade que deseja comprar ?");
    scanf("%d", &qunt);
    while(qunt > quant[id]){
        printf("\nQuantidade inválida, só temos %d de %s no estoque", quant[id], prod[id]);
        printf("\nInforme outra quantidade");
        scanf("%d", &qunt);
    }
    if(qunt < quant[id]){
        printf("\n-----------Cálculo------------");
        printf("\nProduto : %s", prod[id]);
        printf("\nQuantidade a pagar: %d", qunt);
        total = pre[id]*qunt;
        printf("\nO preço da unidade é %.3f :",pre[id]);
        printf("\nTotal a pagar %.3f", total);
        printf("\nDeseja concluir a compra ? s ou n");
        scanf("%s", escolha);
        if (strcmp(escolha,"s")==0){
            printf("\nDigite o código válido do usuário");
            scanf("%d", &valid);
            if (valid < 7 && valid >0){
                quant[id] = quant[id] - qunt;
                caixa = caixa + total;
            }
        }
        printf("\nDeseja realizar outra compra ? s - n");
        scanf("%s", continuar);
            if (strcmp(continuar,"s")==0){
                system("clear");
                venderProduto();
            }else{
                system("clear");
                Menu();
            }
    }
}


void novoCliente(){
    int i=0;
    int proximo=0;
    while (i<10){
        if (strlen(cliente[i])==0){
            proximo = i;
        }
        i++;
    }
    system("clear");
    printf("----------Cadastro----------\n");
    printf("\nInforme o novo nome :");
    scanf("%s", cliente[proximo]);

    if (strlen(cliente[proximo])==0){
        printf("\nCadastro falhou, tente novamente\n");
        novoCliente();
    }else{
        printf("\nCadastro foi realizado com sucesso\n");
        irpara();
    }
}

main(){
    for (int i=0;i<5;i++)  {
        pre[i]=0;
    }   
    logar();
}