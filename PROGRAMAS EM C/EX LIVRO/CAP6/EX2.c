//INCLUSÃO DE BIBLIOTECA
#include <stdio.h>

//FUNÇÃO PRINCIPAL
int main()
{
    //DECLARAÇÃO DE VARIÁVEIS
    int qtd[10],preco[10];
    int i=0;
    double comissao=0,vendido=0,total=0,vtotal=0;

    //ENTRADA DE DADOS DOS VETORES

    //VETOR DE PREÇO UNITARIO E QUANTIDADE
    for(i=0;i<10;i++){
        printf("Informe o preco unitario do produto:\n");
        scanf("%d",&preco[i]);

        printf("Informe a quantidade vendida:\n");
        scanf("%d",&qtd[i]);

        total+=preco[i]*qtd[i];
        vendido+=qtd[i];
        vtotal+=preco[i];
    }

    comissao+=total*(5/100);

    printf("Quantidade vendida:%.0lf\n",vendido);
    for(i=0;i<10;i++){
        printf("Produto %d: R$%d\nValor total:%d\n",i,preco[i],preco[i]*qtd[i]);
    }
    printf("Valor total das vendas:%lf\n",total);
    printf("Comissao a ser paga:%lf\n",comissao);

    return 0;
}

////////////////INCOMPLETO/////////////////////////////