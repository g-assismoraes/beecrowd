//o uso de lista encadeada era obrigatorio pelo escopo do problema
#include <stdio.h>
#include <stdlib.h>

typedef struct listaPacientes{
    int hora;
    int minuto;
    int critico;
    struct listaPacientes *prox;
}ListaPacientes;

ListaPacientes* cria_lista(){
    return NULL;
}

void apaga_lista(ListaPacientes* l){
    ListaPacientes* p = l;

    while(p != NULL){
        ListaPacientes* preserva = p->prox;

        free(p);

        p = preserva;
    }
}

ListaPacientes* insere_fimLista(ListaPacientes* l, int h, int m, int c){
    ListaPacientes* p = l;
    ListaPacientes* novo = (ListaPacientes*) malloc(sizeof(ListaPacientes));
    novo->hora = h;
    novo->minuto = m;
    novo->critico = c;

    if(p == NULL){
        novo->prox = l;
        return novo;

    }else{
        while(p->prox != NULL){
            p = p->prox;
        }
        p->prox = novo;
        novo->prox = NULL;
        return l;
    }

}

void processa(ListaPacientes* l, int qtd_pacientes){
    int tempo_atendimento = 60*7; // primeiro atendimento pode ser as 7 da manha, em minutos seria 60*7
    int cont = 0;
    ListaPacientes* p = l;

    for(; qtd_pacientes != 0; qtd_pacientes--){
        int hora = p->hora, minuto = p->minuto, intervalo_max = p->critico;
        int tempo_chegada = hora*60 + minuto;

        // corrige o intervalo em relacao ao primeiro chega de fato, ou se ha um intervalo maior entre os atendimentos
        while(tempo_atendimento < tempo_chegada){
            tempo_atendimento += 30;
        }

        if(tempo_atendimento - tempo_chegada > intervalo_max)
            cont++;

        tempo_atendimento += 30; // proxima hora a se poder atender

        p = p->prox;
    }

    printf("%d\n", cont);
}

int main(){
    int qtd_pacientes;
    while(scanf("%d", &qtd_pacientes) != EOF){
        ListaPacientes* lista = cria_lista();
        for(int i = 0; i < qtd_pacientes; i++){
            int h = 0, m = 0, c = 0;
            scanf("%d%d%d", &h, &m, &c);

            lista = insere_fimLista(lista, h, m, c);
        }

        processa(lista, qtd_pacientes);

        apaga_lista(lista);
    }
    return 0;
}
