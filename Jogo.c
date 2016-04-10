#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


//Declaração das funções e variáveis:
void nome_jogo(void); //logo inicial do jogo;
void menu_principal(void);//Menu para o usuário escolher opções;
void introducao(void); //introdução personagens:Laura;
void introducao1(void); //introdução personagens:Rita;
void introducao2(void); //introdução personagens:Maria;
void introducao3(void); //introdução personagens;
void introducao4(void); //introdução personagens;
void introducao5(void); //introdução personagens;
void parte1(void);
void options(void);
void capitulo1(void);
void capitulo1_1(void);
void capitulo1_2(void);
void capitulo1_2_1_2(void);
void capitulo2(void);
void capitulo2_1(void);
void capitulo2_2(void);
void capitulo1_2_3(void);
void capitulo2_1_1_1_2(void);
void capitulo2_1_1_1(void);
void capitulo2_1_1_1_1(void);
void capitulo1_2_1_1(void);
void capitulo1_2_1(void);
void capitulo2_1_1(void);
void continuar(void); //Função para limpar a tela e continuar ou não;
int a; //variável para guardar valor para limpar a tela;
int b; //variável para pegar decisão do usuário;
char l;
int x;
int score;
//gerador de numero aleatorio
int random_number(int min_num, int max_num)
{
    int result=0,low_num=0,hi_num=0;
    if(min_num<max_num)
    {
        low_num=min_num;
        hi_num=max_num+1; // this is done to include max_num in output.
    }else{
        low_num=max_num+1;// this is done to include max_num in output.
        hi_num=min_num;
    }
    srand(time(NULL));
    result = (rand()%(hi_num-low_num))+low_num;
    return result;
}

//options
void options(void){
    system("clear");

    printf("OPTIONS:\n");
    printf("Sexto sentido é um RPG investigativo que conta a história de um grupo de mulheres e seu cotidiano em um dia atípico que irá revelar segredos e um grande mistério.\n");
    printf("Tutorial\n");
    printf("Audio: \n");
    printf("Tamanho da fonte: \n");
    printf("Cor da fonte: \n");
    printf("cor do plano de fundo: \n");

}


//Bloco de funções:
void nome_jogo(void){
    printf("                                  * * ****\n");
    printf("                                *       ***                               *\n");
    printf("                               *         **                              **\n");
    printf("                               **        *                               **\n");
    printf("                                ***                     ***    ***     ********    ****\n");
    printf("                               ** ***           ***    * ***  **** *  ********    * ***  *\n");
    printf("                                *** ***        * ***      *** *****      **      *   ****\n");
    printf("                                  *** ***     *   ***      ***  **       **     **    **\n");
    printf("                                    *** ***  **    ***      ***          **     **    **\n");
    printf("                                      ** *** ********      * ***         **     **    **\n");
    printf("                                       ** ** *******      *   ***        **     **    **\n");
    printf("                                        * *  **          *     ***       **     **    **\n");
    printf("                              ***        *   ****    *  *       *** *    **      ******\n");
    printf("                             *  *********     *******  *         ***      **      ****\n");
    printf("                            *     *****        *****\n");
    printf("                            *\n");
    printf("                             **\n");
    printf("\n");
    printf("\n");
    printf("                          *******                                                  **\n");
    printf("                        *       ***                             *       *           **\n");
    printf("                       *         **                            **      ***          **\n");
    printf("                       **        *                             **       *           **\n");
    printf("                        ***                                  ********               **      ****\n");
    printf("                       ** ***           ***    ***  ****    ********  ***       *** **     * ***  *\n");
    printf("                        *** ***        * ***    **** **** *    **      ***     *********  *   ****\n");
    printf("                          *** ***     *   ***    **   ****     **       **    **   ****  **    **\n");
    printf("                            *** ***  **    ***   **    **      **       **    **    **   **    **\n");
    printf("                              ** *** ********    **    **      **       **    **    **   **    **\n");
    printf("                               ** ** *******     **    **      **       **    **    **   **    **\n");
    printf("                                * *  **          **    **      **       **    **    **   **    **\n");
    printf("                      ***        *   ****    *   **    **      **       **    **    **    ******\n");
    printf("                     *  *********     *******    ***   ***      **      *** *  *****       ****\n");
    printf("                    *     *****        *****      ***   ***              ***    ***\n");
    printf("                    *\n");
    printf("                     **\n");
    puts("\a\a");
    }
void menu_principal(void){
    int op;
    printf("Bem vindo ao jogo:\n\n");
    printf("Selecione:\n\n");
    printf("1- PLAY \t");
    printf("2- OPTIONS  \t");
    printf("3- EXIT \t");
    scanf("%d",&op);
    if (op==1){

        introducao();
    }else if(op==2){
        options();
    }else if(op==3){
        system("clear");
        printf("Obrigado!");
        exit(0);
    }
}
void introducao(void){
    system("clear");
    printf("\nPersonagem: Laura\n\n");
    printf("Laura, mulher pouco comum, em relacao ao tipo que estamos acostumados.\n");
    printf("Ingressou na faculdade de administração aos 16 anos, no segundo ano de faculdade já era presidente de uma\n");
    printf("empresa júnior de importação e exportação de produtos baratos produzido no Oriente. Na realidade Laura\n");
    printf("introduziu o conceito da loja R$ 1,99. Aos 20 anos resolveu sair da casa dos seus pais, queria investir\n");
    printf("seu talento e conhecimento se aventurando numa grande Metrópole, foi então quando se mudou para São Paulo,\n");
    printf("cidade grande com milhões de habitantes. Em Sampa fez seu MBA em In Comerc e energia sustentável.\n");
    printf("No seu primeiro emprego como trainee conheceu Rita, uma secretária executiva, que passou a ser sua melhor amiga.\n");
    printf("As 25 anos, Laura resolve se mudar para uma pequena cidade turística, conhecida pelas suas maravilhosas estancias, a cidade de Xamy, \n");
    printf("localizada no Nordeste brasileiro e muito visitada no verão. Ela queria investir em um produto genuinamente novo, o vento.  \n");
    printf("Ela sentia que aquele seria um bom momento e o fez. Montou um parque de energia eólica.\n");
    printf("Dez anos depois Laura já era presidente de uma companhia de médio porte com mais de duzentos empregados, \n");
    printf("60 por cento dos moradores de Xamy eram seus empregados. Dona do maior parque eólico da região. Assim passou a ser conhecida como\n");
    printf("“A garota dos ventos”, e aos 36 anos já é uma milionária. Com todo esse sucesso, ela ainda se sente frustrada, gostaria de \n");
    printf("engravidar antes dos 40 anos. Apesar de ser uma grande empreendedora, Laura não consegue ter o mesmo desempenho quando \n");
    printf("o assunto é relacionamento pessoal. Está solteira e nunca teve relacionamentos duradouros. Laura sempre atribui seu fracasso\n");
    printf("ao fato de se dedicar inteiramente ao trabalho. Mas isso não é tudo. Ele teme ser enganada por algum homem,\n");
    printf("se aproveitando de sua condição financeira. Fato passível de ocorrer.\n\n");
    printf("Pressione qualquer tecla para continuar (x para pular a introdução)\n");
    scanf("%c", &l);
    scanf("%c", &l);
    system("clear");
    if (l=='x'){
        parte1();
    }
    introducao1();
    }
void introducao1(void){

    printf("\nPersonagem: Rita\n\n");
    printf("Rita, 52 anos, atualmente divorciada.  Conheceu seu ex-marido no jardim de infância. Tiveram um casamento que durou 30 anos,\n");
    printf("deste relacionamento tiveram uma filha. Por ter vivido um único relacionamento, não tem segurança para aconselhar as suas amigas,\n");
    printf("mas é uma boa ouvinte. Praticou artes maciais durante 05 anos. Com o seu divórcio, foi convidada por\n");
    printf("Laura para trabalhar na sua empresa, quando passou a dividir o apartamento com Maria.\n");
    printf("Pressione qualquer tecla para continuar (x para pular a introdução)\n");
    scanf("%c", &l);
    system("clear");
    if (l=='x'){
        parte1();
    }
    introducao2();
    }
void introducao2(void){
    printf("\nPersonagem: Maria\n\n");
    printf("Maria, embora nunca tenha saído da cidade onde nasceu, apresenta características nada típica daquele lugar, \n");
    printf("formada em Teatro, é uma excelente atriz, mas sua profissão não lhe garantiu grandes benefícios, \n");
    printf("uma vez que suas oportunidades foram bastantes fracas. Seu gosto por baladas, a mantem pouco \n");
    printf("distante do tipo de homem que gosta de se relacionar, pois os mesmos normalmente estão na faixa dos 50 anos. \n");
    printf("De todas as suas amigas, ela costuma se irritar com Ana Lucia, que sempre faz questão de lembrá-la que vive em uma vida de sonhos.\n");
    printf("Pressione qualquer tecla para continuar (x para pular a introdução)\n");
    scanf("%c", &l);
    system("clear");
    if (l=='x'){
        parte1();
    }
    introducao3();
}
void introducao3(void){
    printf("\nPersonagem: Ana Lúcia\n\n");
    printf("Considerada a primeira dama da cidade, por ser herdeira de umas das famílias tradicionais de Xamy, \n");
    printf("Ana Lucia, esbanja sua riqueza de todas as formas possíveis. Muito carinhosa, essa sua característica a \n");
    printf("faz ser a mais próxima de todos as amigas, que embora não possam compartilhar ou ostentar dos mesmos \n");
    printf("privilégios e gostos, amam a sua presença. Tem um namorado e um filho, órfã de pai, \n");
    printf("deseja que sua amiga Carolina seja madrinha de seu filho. Mais conhecida como Carol, ela rejeita tal ideia.\n");
    printf("Pressione qualquer tecla para continuar (x para pular a introdução)\n");
    scanf("%c", &l);
    system("clear");
    if (l=='x'){
        parte1();
    }
    introducao4();
}
void introducao4(void){
    printf("\nPersonagem: Carolina\n\n");
    printf("Principal amiga de Ana Lucia, Carolina ama tecnologia, foi a principal articuladora da implantação tecnológica \n");
    printf("do Parque Eólico, gerido pela empresa de Laura. Tem 42 anos, cresceu no único orfanato da cidade, \n");
    printf("costuma afirmar que não gosta de crianças, mesmo diante da insistência de Ana Lucia para que \n");
    printf("batize o seu filho. Costuma se relacionar com rapazes mais jovens, de no máximo 24 anos. Seu culto ao corpo, \n");
    printf("ultrapassa o limite da razão, pratica musculação todos os dias da semana e sempre se imagina acima do peso ideal.\n");
    printf("Pressione qualquer tecla para continuar (x para pular a introdução)\n");
    scanf("%c", &l);
    system("clear");
    if (l=='x'){
        parte1();
    }
    parte1();
}

void parte1(void){
    printf("\nAs cinco são amigas e estão na cidade de Xamy, conhecida por ser uma cidade turística.\n");
    printf("Realizam encontros ao menos uma vez por mês.\n");
    printf("Sempre se encontram no mesmo bar, pois gostam da caipitequila.\n");
    printf("Sempre conversam sobre a vida, seus medos e suas aventuras.\n");
    printf("Carolina e Ana Lúcia são amigas desde a infância, e andam sempre juntas além dos encontros mensais.\n");
    printf("Uma mensagem atípica de marcação do encontro no grupo do Whatsapp foi enviado por alguma das amigas,\n");
    printf("e elas aceitaram o convite. No dia marcado, após meia hora, Carolina mandou uma mensagem no grupo\n");
    printf("perguntando por ela. Após 15 minutos, Carolina impaciente mandou uma mensagem no privado e ficou \n");
    printf("abismada pois a ultima visualização dela foi a duas horas atrás, o que não é normal para Ana Lúcia....\n");
    printf("pressione qualquer tecla para começar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Ligar para Ana \n");
    printf("2. Continuar bebendo \n");
    scanf("%c",&l);
    if (l=='1'){
        system("clear");
        printf("XP: %d\n",score);
        printf("Laura logo percebe que a situação é atípica e olha firmemente para seu telefone e inconformada com o clima ruim que logo se estabelece, resolveu ligar.\n");
        capitulo1();
    }else if(l=='2'){
        system("clear");
        printf("XP: %d\n",score);
        printf("vocês decidem beber mais ... seus sentidos ficam mais abalados!\n");
        capitulo2();
    }else{
        scanf("%c",&l);
        parte1();
    }
}


void continuar(void){
    int x;
    printf("\nDigite 1 para continuar ou qualquer outro valor para sair do jogo\n");
    scanf("%d",&x);
    if(x==1){
        system("clear");
        printf("XP: %d\n",score);
    }
    else{
        exit(0);
        }
    }

//capitulo1
void capitulo1(void){
    int x,y;
    printf("capitulo 1\n");
    x=random_number(1,2);
     if (x==1){
         printf("Atende uma voz masculina\n");
         printf("De imediato o clima poderia mudar de vez e o mistério do desaparecimento de Ana seria solucionado.\n ");
         printf("Se ao atender ao telefone uma voz masculina nervosa, dizendo que foi engano, não tivesse aumentado ainda mais a angustia das moças.\n");
         printf("As amigas acham que pode ser o namorado, que Ana Lucia havia comentado em um dos encontros.\n");
         printf("e a ligação acaba!\n");
         printf("pressione qualquer tecla para continuar...");
         scanf("%c",&l);
         system("clear");
         printf("XP: %d\n",score);
         y=random_number(1,2);
         if (y==1){
             capitulo1_1(); //homem se identifica
         }else if(y==2){
             capitulo1_2(); //não atende
         }
     }else if(x==2){
        capitulo1_2(); //não atende
     }
}

//capitulo1.1
void capitulo1_1(void){
    printf("capitulo 1.1\n");
    printf("Liga novamente e um homem se identifica\n");
    printf("Sendo assim Carol pede para que Laura ligue novamente e se propôs a interrogar a pessoa que atendesse do outro lado da linha. Mas ao ligar novamente, e perguntar “quem está falando?” Escutou...\n");
    printf("-Alô quem está falando aqui é o John, eu já falei que a senhora ligou errado. Por favor não me incomode.\n");
    printf("Animada Laura reconhece o nome John e disse ser o novo affair de Ana Lucia. Contudo se esquece de um detalhe muito importante relatado por Carol.\n");
    printf("Carol disse que Ana Lúcia chama qualquer affair de John, costumes de amigas. Com isso a possibilidade de que o sujeito não estivesse falando a verdade estava pairando no ar.\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. completar \n");
    printf("2. completar \n");
    scanf("%c",&l);
    /*if (l=='1'){

    }else if(l='2'){

    }*/

}
//capitulo1.2
void capitulo1_2(void){
    printf("capitulo 1.2\n");
    printf("Liga novamente e cai na caixa\n");
    printf("Rita tentou ligar novamente para a amiga, mas o celular não funcionava, o tempo parecia ter parado, nuvens negras no céu e uma grande tempestade se formou.\n");
    printf("As janelas e as portas do bar se abriam e fechavam com muita força, mas ninguém parecia perceber ou não ligavam para os estranhos acontecimentos, Rita e Maria continuavam conversando e sorrindo. \n");
    printf("Um comportamento muito estranho para aquele momento tão tenso.\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Ir à casa de Ana Lúcia\n");
    printf("2. Ligar para Ana Lúcia de um celular de número privado\n");
    scanf("%c",&l);
    if (l=='1'){
        capitulo1_2_1();
    }else if(l=='2'){
        capitulo1_2_3();
    }
}

//capitulo 1.2.1
void capitulo1_2_1(void){
    printf("capitulo 1.2.1\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    int x;
    x=random_number(1,2);
     if (x==1){
        printf("Entre olhares intrigantes as amigas percebem que há algo errado.  Corações acelerados  e bocas ofegantes, o cenário de desespero, antes constituído de alegrias , era agora a própria desilusão. Iniciaram uma calorosa discussão envolvendo diversas especulações e uma pergunta que não queria calar: Por que um celular de uma pessoa que supostamente estaria sumida , ainda estava chamando? Laura chama atenção sobre o que elas deveriam fazer diante daquela situação?\n");
        printf("e elas chegam na casa de Ana Lúcia\n");        
        printf("Encontra a porta semiaberta.\n");
        printf("escolha uma das opções:\n");
        printf("1. Entrar\n");
        printf("2. Ligar para o amigo policial \n");
        scanf("%c",&l);
        if (l=='1'){
            capitulo1_2_1_3();
        }else if(l=='2'){
            z=capitulo1_2_1_2();
            if(z==0){
                capitulo1_2_1();
            }else if(z==1){
                printf("completar");
            }
        }
     }else if(x==2){
         printf("encontra a porta fechada e ouve algo estranho lá dentro\n");
         printf("escolha uma das opções:\n");
         printf("1. bater a porta\n");
         printf("2. tentar ouvir, encostando o ouvido na porta \n");
         scanf("%c",&l);
         if (l=='1'){
            printf("bateram à porta mas ninguém atendeu\n");
            capitulo1_2_1_1();
         }else if(l=='2'){
            printf("Laura encostou o ouvido na porta e ouviu que havia mais uma pessoa na sala, passos de uma pessoa usando botas molhadas correndo. Ela desceu assustada para pedir ajuda e todas pareciam não entender ou escutar o que ela dizia. Entrou em desespero.\n");
            capitulo1_2_1_3();
         }
     }

}

//capitulo1_2_1_3()
void capitulo1_2_1_3(void){
    printf("Laura encostou o ouvido na porta  da frente, quando  ouviu  mais de uma pessoa na sala, passos de uma pessoa usando botas molhadas correndo. Ela desceu assustada para pedir ajuda e todas pareciam não entender ou escutar o que ela dizia. Entrou em desespero.");
    printf("pressione qualquer tecla para continuar.\n");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. ligar para o amigo policial\n");
    printf("2. bater na porta\n");
    scanf("%c",&l);
    if (l=='1'){
        z=capitulo1_2_1_2();
        if(z==0){
            capitulo1_2_1_3();
        }else if(z==1){
            printf("completar");
        }
    }else if(l=='2'){
        capitulo1_2_1_3_1();
    }
}

//capitulo1_2_1_3_1()
void capitulo1_2_1_3_1(void){
    printf("ninguem atende...\n");
    printf("Mesmo tendo escutado mais de uma pessoa conversando na sala, Laura desconfia, pois ninguém atende a porta");
    printf("Conversando com Maria , Laura decide...");
    printf("pressione qualquer tecla para continuar.\n");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Ligar para o amigo policial\n");
    printf("2. Decidem olhar ao redor da casa\n");
    scanf("%c",&l);
    if (l=='1'){
        z=capitulo1_2_1_2();
        if(z==0){
            capitulo1_2_1_3_1();
        }else if(z==1){
            printf("completar");
        }
    }else if(l=='2'){
        capitulo1_2_1_3_1_2();
    }
}

//capitulo1_2_1_3_1_2()
void capitulo1_2_1_3_1_2(void){
    printf("encontram uma janela aberta\n");
    printf("pressione qualquer tecla para continuar.\n");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. entrar na casa pela janela\n");
    printf("2. ligar para o amigo policial\n");
    scanf("%c",&l);
    if (l=='1'){
        capitulo1_2_1_3();
    }else if(l=='2'){
        z=capitulo1_2_1_2();
        if(z==0){
            capitulo1_2_1_3_1_2();
        }else if(z==1){
            printf("completar");
        }
    }
}

//capitulo1_2_1_3
void capitulo1_2_1_3(void){
    printf("Carolina nunca teve coragem de entrar na casa da sua melhor amiga, para ela, ");
    printf("era um lugar sombrio e muito cheio de mistérios, mas Laura, era o oposto, a coragem");
    printf("em pessoa e logo depois do receio entrou. \n");
    printf("Maria entrou logo depois de Laura, sem demonstrar nenhum sinal de medo, em seguida");
    printf(" a luz se apagou e ela gritou sem parar...");
    printf("Laura pediu que ela ficasse calma, pois poderia chamar a atenção");
    printf("pressione qualquer tecla para continuar.\n");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. ligar a luz\n");
    printf("2. ligar lanterna do celular\n");
    scanf("%c",&l);
    if (l=='1'){
        capitulo1_2_1_3_1();
    }else if(l=='2'){
        capitulo1_2_1_3_1();
    }
}

//capitulo1_2_1_3_1
void capitulo1_2_1_3_1(void){
   printf("elas encontram um quarto aberto\n");
   printf("As mãos de Laura passeiam vagarosamente sobre uma penteadeira, encontrando um pente de largos dentes, utilizado por pessoas do cabelo crespo, na sua forma  original, . Mais um mistério... Ana Lúcia jamais usaria aquele tipo de artefato nas suas madeixas loiras. Todas estavam se perguntando a quem aquele pente pertencia?");
   printf("pressione qualquer tecla para continuar.\n");
   scanf("%c",&l);
   system("clear");
   printf("XP: %d\n",score);
   printf("escolha uma das opções:\n");
   printf("1. Mostrar o pente às amigas\n");
   printf("2. Esconder o pente\n");
   scanf("%c",&l);
   if (l=='1'){
       capitulo1_2_1_3_1_1();
   }else if(l=='2'){
       capitulo1_2_1_3_1_2();
   }
}

//capitulo1_2_1_3_1_1()
void capitulo1_2_1_3_1_1(void){
    printf("Ao mostrar o pente para as amigas, percebesse muitas dúvidas e insegurança no ar, aquele pente seria um sinal de que algo estava errado");
    printf("pressione qualquer tecla para continuar.\n");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. completar\n");
    printf("2. completar\n");
    scanf("%c",&l);
    if (l=='1'){
        printf("completar");
    }else if(l=='2'){
        printf("completar");
    }

}

//capitulo1_2_1_3_1_1_1()
void capitulo1_2_1_3_1_1_1(void){
    printf("Carolina ver o pente e argumenta com Laura");
    printf("Carolina pergunta a Laura porque ela não mostrou o pente para as meninas . Laura argumenta que não quer deixa as meninas ainda mais apavorada, que ela sabe o que está fazendo. Mas Carolina não concorda , e pedi para Laura contar sobre o pente");
    capitulo1_2_1_3_1_1();
}

//capitulo1_2_1_3_1_2();
void capitulo1_2_1_3_1_2(void){
    printf("Por que será que Laura não mostrou o pente as amigas ? Será que ela imagino que mostrando o pente  as amigas ficariam mais nervosas e preocupadas com Ana Lúcia!");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    int x;
    x=random_number(1,2);
    if (x==1){
        capitulo1_2_1_3_1_1_1();
    }else if(x==2){
        printf("completar");
    }

}

//capitulo1_2_3();
void capitulo1_2_3(void){
    printf("completar");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Ir à casa de Ana Lúcia\n");
    printf("2. COMPLETAR\n");
    scanf("%c",&l);
    if (l=='1'){
        capitulo1_2_1();
    }else if(l=='2'){

    }
}



//capitulo1.2.1.1:
void capitulo1_2_1_1(void){
    printf("capitulo 1.2.1.1\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Perguntar aos vizinhos\n");
    printf("2. Bater à porta novamente \n");
    scanf("%c",&l);
    if (l=='1'){
        printf("completar...");
    }else if(l=='2'){
        capitulo2_1_1_1();
    }
}

//capitulo1_2_1_2
int capitulo1_2_1_2(void){
    printf("capitulo 1.2.1.2\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    int x;
    x=random_number(1,2);
     if (x==1){
        printf("Marcos o policial informou que a policia só poderia entrar no caso se o desaparecimento fosse registrado após 72 horas.\n");
        return 0;
    }else if(x==2){
         printf("Prontamente o policial Marcos prometeu ajudar, mas tinha que fazer uma diligência antes de se deslocar para a casa de Ana Lucia.\n");
         return 1;
     }

}


//capitulo2
void capitulo2(void){

    printf("capitulo 2\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Ir à casa de Ana Lúcia\n");
    printf("2. Ligar para Ana Lúcia \n");
    scanf("%c",&l);
    if (l=='1'){
        system("clear");
        printf("XP: %d\n",score);
        capitulo2_1();
    }else if(l=='2'){
        system("clear");
        printf("XP: %d\n",score);
        capitulo2_2();
    }

}

//capitulo 2.1
void capitulo2_1(void){
    printf("capitulo 2.1\n");
    int x;
    x=random_number(1,2);
     if (x==1){
         printf("Encontram um sapato preferido dela na porta de casa\n");
         capitulo2_1_1();
     }else if(x==2){
         printf("Encontram a porta semiaberta\n");
         printf("Dentro da casa, as mãos de Laura passeiam vagarosamente sobre uma penteadeira, encontram um pente de largos dentes que posteriormente poderiam entranhar por seu cabelo duro, tipo pixaim. Era assim que ela gostava de apresentá-los, na sua forma original. Não alisava os cabelos, mas era extremamente vaidosa. Mais um mistério... Ana Lúcia jamais usaria aquele tipo de artefato nas suas madeixas loiras. Todas estavam se perguntando a quem aquele pente pertencia?\n");
         printf("Todas juntas agora percebem na cabeceira da cama, vários chumaços de algodão, como se alguém tivesse retirado suavemente do rosto os excessos de cremes colocados antes de dormir.  Uma toalha no chão exibia um rosto que possuía uma simetria única, com carnudos lábios. Mas bem que podiam ser de Ana Lúcia. Ela fazia tratamento com Botox.\n");
         printf("Maria caminha para o closet, abre sem esforço a porta de correr, dá de cara com sua primeira dúvida: “qual é o vestido que Ana Lucia estaria usando quando saiu de casa?\n");
         printf("Carol considera tal indagação irrelevante. Mas Maria explica se descobrissem a roupa, poderia saber o destino.\n");
         printf("O sol já esbanja sua luz laranja dourada sobre o orvalho da manhã.  O jardim daquela casa parecia mais bonito. Estavam bem dispostas ao amanhecer daquele lindo dia. Apesar de passarem a noite tentando desvendar o que estava acontecendo. E ainda se perguntavam: Será que Ana Lúcia saiu a bordo do seu Volkswagen conversível, abrindo o portão da garagem e partiu para mais uma de seus aventuras sem avisar a ninguém?\n");
         printf("Na casa havia um  espaçoso escritório  e as meninas olhavam, sem pressa, os ponteiros do relógio anunciando o mais um amanhecer. Para elas, a sexta feira era um dia já superado e não foi um dia qualquer como os outros, o fato das suas amigas estarem  esperando uma resposta  para aquele mistério.\n");
         printf("Se Lúcia não houvesse sumido, aquele seria mais um descontraído encontro, onde celebrariam o início de um novo final de semana. Mas um detalhe se tornaria muito incômodo neste encontro, todas as  amigas eram solteiras e nestas ocasiões se lançavam a caça, mas Ana Lucia iria apresentar o tal namorado Jhon. Elas  não simpatizava muito com a ideia.\n");
         printf("Lucia resolve ir na sua empresa. Da forma como começou aquele dia, algo inesperado iria lhe acontecer. Na entrada do escritório pega o elevador que após subir dois andares,  para. La de fora, correndo apressadamente um jovem tenta alcançá-los, deixando cair um caderno e dois livros. Seus  olhos azuis pareciam pedir piedade ao perceber que aquelas portas poderiam se fechar. De fato, elas se fecharam sem que o belo jovem de corpo esquelético, nada atlético adentrasse naquele recinto.\n");
         printf("Aquele rosto era conhecido, não era um dos seus empregados. Estática ela observou a luta do garoto de cabelos dourado sem esboçar  alguma reação; só ela e apenas ela poderia ter aliviado um pouco daquela aflição com um simples toque no botão. Mas não, até um pouco de sorriso sarcástico poderia ser registrado no canto da sua boca.\n");
         printf("O elevador seguiu parando num andar mais acima. Para sua surpresa o jovem alto de cabelos dourados aguardava do lado de fora. Desta vez o rapaz entra sem pressa no elevador, enquanto ela se contorcia para esconder o rosto, tamanha era sua vergonha por não ter ajudado o garoto no andar abaixo.\n");
         printf("Sem acreditar na força produzida por um olhar, ela o olha bem nos olhos o suficiente para ele se sentir magnetizado, enquanto uma força estranha lhe impedia de desviar o olhar. Alguma coisa estranha havia naqueles olhares. Seria ali um momento propicio de amor a primeira vista? Para o amor chegar não há dia, não há hora e nem momento marcado para acontecer. Mas a identidade daquele rapaz trazia consigo outro mistério...\n");

         //Ir opção 1.2.1.1
     }

}
//capitulo2.1.1:
void capitulo2_1_1(void){
    printf("capitulo 2.1.1:\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Tocar na companhia\n");
    printf("2. Olhar pela janela fechada \n");
    scanf("%c",&l);
    if (l=='1'){
            capitulo2_1_1_1();
    }else if(l=='2'){
        printf("As amigas naquele momento estavam com muito medo muito, muito medo mesmo. Na cidade corriam histórias sobre a região onde Ana Lúcia mora. Algumas pessoas evitavam passar perto da grande casa de madeira antiga, cujos os portões que viviam trancados com enormes cadeados pretos, eram abertos apenas pela dona do local. A casa fora herdada de seus milionários e excêntricos avós. Assim Ana a mantinha, Bastante original.\n");
        printf("Na porta da casa ninguém ousava abri-la. Ouvía-se sons diferentes ruídos  vindos de lá e, olhando-se  elas diziam que era coisa da imaginação. As amigas sentiam arrepios quando decidiram invadir a tal casa. Assim que invadiram o portão, os barulhos estranhos aumentaram.\n");
        printf("completar...");
    }
}

//capitulo 2.1.1.1:
void capitulo2_1_1_1(void){
    int x;
    x=random_number(1,2);
     if (x==1){
        printf("Ninguém atende\n");
        capitulo2_1_1_1_1();
     }else if(x==2){
        printf("Um homem atende a porta e diz boa noite\n");
        capitulo2_1_1_1_2();
     }
}

//capitulo2_1_1_1_1
void capitulo2_1_1_1_1(void){
    printf("capitulo 2.1.1.1.1:\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Falar com os vizinhos\n");
    printf("2. Ligar para o amigo policial \n");
    scanf("%c",&l);
    if (l=='1'){
        printf("completar...");
    }else if(l=='2'){
        z=capitulo1_2_1_2();
        if(z==0){
            capitulo2_1_1_1_1();
        }else if(z==1){
            printf("completar");
        }
    }
}

//capitulo2_1_1_1_2
void capitulo2_1_1_1_2(void){
    printf("capitulo 2.1.1.1.2:\n");
    printf("pressione qualquer tecla para continuar...");
    scanf("%c",&l);
    system("clear");
    printf("XP: %d\n",score);
    printf("escolha uma das opções:\n");
    printf("1. Pergunta o nome dele\n");
    printf("2. Empurra ele e entrar \n");
    scanf("%c",&l);
    if (l=='1'){
        printf("completar...");
    }else if(l=='2'){
        printf("Empurram ele e entram na casa. Laura olhava para os lados pedindo ajuda e nada, nem ninguém se movia. Ela estava tendo um daqueles surtos mediúnicos. Laura um  correndor longo e escuro com uma porta no final e vai até lá. Lá chegando a porta tinha sumido, havia apenas uma parede escura no mesmo local e a única pista da daquele mistério mistério era o enorme cadeado quebrado no chão. Laura ficou ainda mais assustada, sem saber o que fazer para salvar a amiga que tinha sumido, justamente, como aquela porta.\n");
        printf("completar...");
    }

}


//capitulo 2.2
void capitulo2_2(void){
    printf("capitulo 2.2\n");
    system("clear");
    printf("XP: %d\n",score);
    capitulo1_1();

}

//INÍCIO DO PROGRAMA
int main()
{
    score=0;
    nome_jogo();
    menu_principal();

    return 0;
}
