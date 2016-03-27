#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


//Declaração das funções:
void nome_jogo(void); //logo inicial do jogo;
void menu_principal(void);//Menu para o usuário escolher opções;
void introducao(void); //introdução personagens:Laura;
void introducao1(void); //introdução personagens:Rita;
void introducao2(void); //introdução personagens:Maria;
void introducao3(void); //introdução personagens;
void introducao4(void); //introdução personagens;
void introducao5(void); //introdução personagens;
void parte1(void);
void parte2(void);
void parte3(void);
void parte4(void);
void parte5(void);
void continuar(void); //Função para limpar a tela e continuar ou não;
int a; //variável para guardar valor para limpar a tela;
int b; //variável para pegar decisão do usuário;

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
    printf("1- PLAY \n");
    printf("2- OPTIONS  \n");
    printf("3- EXIT \n");
    scanf("%d",&op);
    }
void introducao(void){
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
    printf("60 dos moradores de Xamy eram seus empregados. Dona do maior parque eólico da região. Assim passou a ser conhecida como\n");
    printf("“A garota dos ventos”, e aos 36 anos já é uma milionária. Com todo esse sucesso, ela ainda se sente frustrada, gostaria de \n");
    printf("engravidar antes dos 40 anos. Apesar de ser uma grande empreendedora, Laura não consegue ter o mesmo desempenho quando \n");
    printf("o assunto é relacionamento pessoal. Está solteira e nunca teve relacionamentos duradouros. Laura sempre atribui seu fracasso\n");
    printf("ao fato de se dedicar inteiramente ao trabalho. Mas isso não é tudo. Ele teme ser enganada por algum homem,\n");
    printf("se aproveitando de sua condição financeira. Fato passível de ocorrer.\n\n");
    }
void introducao1(void){
    printf("\nPersonagem: Rita\n\n");
    printf("Rita, 52 anos, atualmente divorciada.  Conheceu seu ex-marido no jardim de infância. Tiveram um casamento que durou 30 anos,\n");
    printf("deste relacionamento tiveram uma filha. Por ter vivido um único relacionamento, não tem segurança para aconselhar as suas amigas,\n");
    printf("mas é uma boa ouvinte. Praticou artes maciais durante 05 anos. Com o seu divórcio, foi convidada por\n");
    printf("Laura para trabalhar na sua empresa, quando passou a dividir o apartamento com Maria.\n");
    }
void introducao2(void){
    printf("\nPersonagem: Maria\n\n");
    printf("Maria, embora nunca tenha saído da cidade onde nasceu, apresenta características nada típica daquele lugar, \n");
    printf("formada em Teatro, é uma excelente atriz, mas sua profissão não lhe garantiu grandes benefícios, \n");
    printf("uma vez que suas oportunidades foram bastantes parcas. Seu gosto por baladas, a mantem pouco \n");
    printf("distante do tipo de homem que gosta de se relacionar, pois os mesmos normalmente estão na faixa dos 50 anos. \n");
    printf("De todas as suas amigas, ela costuma se irritar com Ana Lucia, que sempre faz questão de lembrá-la que vive em uma vida de sonhos.\n");
    }
void introducao3(void){
    printf("\nPersonagem: Ana Lúcia\n\n");
    printf("Considerada a primeira dama da cidade, por ser herdeira de umas das famílias tradicionais de Xamy, \n");
    printf("Ana Lucia, esbanja sua riqueza de todas as formas possíveis. Muito carinhosa, essa sua característica a \n");
    printf("faz ser a mais próxima de todos as amigas, que embora não possam compartilhar ou ostentar dos mesmos \n");
    printf("privilégios e gostos, amam a sua presença. Tem um namorado e um filho, órfã de pai, \n");
    printf("deseja que sua amiga Carolina seja madrinha de seu filho. Carol como é conhecida, rejeita tal ideia.\n");
    }
void introducao4(void){
    printf("\nPersonagem: Carolina\n\n");
    printf("Principal amiga de Ana Lucia, Carolina ama tecnologia, foi a principal articuladora da implantação tecnológica \n");
    printf("do Parque Eólico, gerido pela empresa de Laura. Tem 42 anos, cresceu no único orfanato da cidade, \n");
    printf("costuma afirmar que não gosta de crianças, mesmo diante da insistência de Ana Lucia para que \n");
    printf("batize o seu filho. Costuma se relacionar com rapazes mais jovens no máximo 24 anos. Seu culto ao corpo, \n");
    printf("ultrapassa o limite da razão, pratica musculação todos os dias da semana e sempre imagina acima do peso ideal.\n");
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
    printf("abismada pois a ultima visualização dela foi a duas horas atrás, o que não é normal para Ana Lúcia.\n");
    }
void continuar(void){
    int x;
    printf("\nDigite 1 para continuar ou qualquer outro valor para sair do jogo\n");
    scanf("%d",&x);
    if(a==1){
        system("cls");
    }
    else{
        exit(0);
        }
    }

//INÍCIO DO PROGRAMA
int main()
{
    nome_jogo();
    /*continuar();
    introducao();
    continuar();
    introducao1();
    introducao2();
    continuar();
    introducao3();
    introducao4();
    continuar();
    parte1();
    continuar();*/
    menu_principal();
       return 0;
       Laura, mulher pouco comum, em relação ao tipo que estamos acostumados. Ingressou na faculdade de administração aos 16 anos, no segundo ano de faculdade já era presidente de uma empresa júnior de importação e exportação de produtos baratos produzido no Oriente. Na realidade Laura introduziu o conceito da loja R$ 1,99. Aos 20 anos   resolveu sair da casa dos seus pais, queria investir seu talento e conhecimento se aventurando numa grande Metrópole, foi então quando se mudou para São Paulo, cidade grande com milhões de habitantes.  Em Sampa fez seu MBA em In Comerc e Energia Sustentável. No seu primeiro emprego como trainee conheceu Rita, uma secretária executiva, que passou a ser sua melhor amiga.
Aos 25 anos, Laura resolve se mudar para uma pequena cidade turística, conhecida pelas suas maravilhosas estancias, a cidade de Xamy, localizada no Nordeste brasileiro e muito visitada no verão. Ela queria investir em um novo produto genuinamente, o vento.  Ela sentia que aquele seria um bom momento e o fez.  Montou um parque de energia eólica.
Dez anos depois Laura já era presidente de uma companhia de médio porte com mais de duzentos empregados, 60% dos moradores de Xamy eram seus empregados. Dona do maior parque eólico da região. Assim passou a ser conhecida como “A garota dos ventos”, e aos 36 anos já é uma milionária.
Sua vida de executiva  era perfeita se não fosse o fato de não ter um homem a quem pudesse compartilhar as horas no conforto do seu lar. Muito menos, filhos que pudessem fazê-la experimentar o ato de padecer no paraíso. Desejava apenas o que muitas mulheres com mais de trinta desejam... Uma família. Afinal, muita coisa este estilo que escolheu para viver lhe negara. Sua vida atual de longe a fazia lembrar a infância pobre vivida no subúrbio de uma cidadezinha do interior.
Com todo esse sucesso, ela ainda se sente frustrada, gostaria de engravidar antes dos 40 anos. Apesar de ser uma grande empreendedora, Laura não consegue ter o mesmo desempenho quando o assunto é relacionamento pessoal. Está solteira e nunca teve relacionamentos duradouros. Laura sempre atribui seu fracasso ao fato de se dedicar inteiramente ao trabalho. Mas isso não é tudo. Ele teme ser enganada por algum homem, se aproveitando de sua condição financeira. Fato passível de ocorrer. 
Rita, 52 anos, atualmente divorciada.  Conheceu seu ex-marido no jardim de infância. Tiveram um casamento que durou 30 anos, deste relacionamento tiveram uma filha. Por ter vivido um único relacionamento, não tem segurança para aconselhar as suas amigas, mas é uma boa ouvinte. Praticou artes maciais durante 05 anos. Com o seu divórcio, foi convidada por Laura para trabalhar na sua empresa, quando passou a dividir o apartamento com Maria.
Maria, embora nunca tenha saído da cidade onde nasceu, apresenta características nada típica daquele lugar, formada em Teatro, é uma excelente atriz, mas sua profissão não lhe garantiu grandes benefícios, uma vez que suas oportunidades foram bastantes parcas. Seu gosto por baladas, a mantem pouco distante do tipo de homem que gosta de se relacionar, pois os mesmos normalmente estão na faixa dos 50 anos. De todas as suas amigas, ela costuma se irritar com Ana Lucia, que sempre faz questão de lembrá-la que vive em uma vida de sonhos.
Considerada a primeira dama da cidade, por ser herdeira de umas das famílias tradicionais de Xamy, Ana Lucia, esbanja sua riqueza de todas as formas possíveis. Muito carinhosa, essa sua característica a faz ser a mais próxima de todos as amigas, que embora não possam compartilhar ou ostentar dos mesmos privilégios e gostos, amam a sua presença. Tem um namorado e um filho, órfã de pai, deseja que sua amiga Carolina seja madrinha de seu filho. Carol como é conhecida, rejeita tal ideia.
Principal amiga de Ana Lucia, Carolina ama tecnologia, foi a principal articuladora da implantação tecnológica do Parque Eólico, gerido pela empresa de Laura. Tem 42 anos, cresceu no único orfanato da cidade, costuma afirmar que não gosta de crianças, mesmo diante da insistência de Ana Lucia para que batize o seu filho. Costuma se relacionar com rapazes mais jovens no máximo 24 anos. Seu culto ao corpo, ultrapassa o limite da razão, pratica musculação todos os dias da semana e sempre imagina acima do peso ideal.


Enredo Principal:
As cinco são amigas e estão na cidade de Xamy, conhecida por ser uma cidade turística.Esta localizado no Nordeste brasileiro, com uma população de 350 mil habitantes.Realizam encontros ao menos uma vez por mês. Sempre se encontram no mesmo bar, pois gostam da caipitequila. Sempre conversam sobre a vida, seus medos e suas aventuras. Carolina e Ana Lúcia são amigas desde a infância, e andam sempre juntas além dos encontros mensais.
Uma mensagem atípica de marcação do encontro no grupo do Whatsapp foi enviado por alguma das amigas, e elas aceitaram o convite.
No dia marcado, após meia hora, Carolina mandou uma mensagem no grupo perguntando por ela.
Após 15 minutos, Carolina impaciente mandou uma mensagem no privado e ficou abismada pois a ultima visualização dela foi a duas horas atrás, o que não é normal para Ana Lúcia.

1. Ligar? Laura logo percebe que a situação é atípica e olha firmemente para seu telefone e inconformada com o clina ruim que logo se estabelece, resolveu ligar.
1.1 De imediato o clima poderia mudar de vez e o mistério do desaparecimento de Ana seria solucionado se:  ao atender ao telefone uma voz masculina nervosa, dizendo que foi engano, não tivesse aumentado ainda mais a angustia das moças. As amigas acham que pode ser o namorado, que Ana Lúcia havia comentado em um dos encontros.
1.1.1Sendo assim Carol pede para que Laura ligue novamente e se propôs a interrogar a pessoa que atendesse do outro lado da linha. Mas ao ligar novamente, e perguntar “quem está falando?” Ouve...
		1.1.1.1 “Alô quem está falando aqui é o Jonh, eu já falei que a senhora ligou errado. Por favor não me incomode;
1.1.1.1.1 Animada  Laura reconhece o nome John e disse ser o novo affair de Ana Lucia. Contudo se esquece de um detalhe muito importante relatado por Carol.
1.1.1.1.2 Carolina disse que Ana Lúcia chama qualquer affair de John, costumes de amigas. Com isso a possibilidade de que o sujeito não estivesse falando a verdade estava pairando no ar.
		1.1.1.2 Atende e ouvi um som ambiente que não entende o que é; Entre gritos e sussurros, sua imaginação a colocou num ambiente de terrou. Imaginava que do outro lado da linha estivesse um matador em séria. Inescrupuloso, que provavelmente teria cortado o corpoda sua amiga em pequenos pedaço. Colocando-a em sacos de lixo preto, com as bocas amarradas com cipós de capim dourados, típicos da região.

	1.1.2 Pede para Maria ligar com número privado, que tem um celular de última geração.
		1.1.2.1 Maria ligou mas gaguejou e não soube dizer o que aconteceu
1.1.1.1.1 Não sei se era realmente maluquice das nossas cabeças ou se nós ouvimos uma voz do tipo mal assombrada, afirma Maria. Carolina lembra que quando estava no ensino médio, a casa foi até tema de redação. “Foi um desafio escrever sobre algo que nos amedronta,” afirmou ela. A professora disse que o exercício seria ótimo para vencermos o medo... Mas confesso meninas que guardo dentro de mim esse medo até hoje. E então acho melhor irmos embora.
1.1.1.1.2 
		1.1.2.2 Rita se acha responsável pela turma e prontamente decide ligar no lugar de Maria

1.2 Caiu na caixa. Rita tentou ligar novamente para a amiga, mas o celular não funcionava, o tempo parecia ter parado, nuvens negras no céu e uma grande tempestade se formou. As janelas e as portas da casa se abriam e fechavam com muita força, mas ninguém parecia perceber ou não ligavam para os estranhos acontecimentos, e Rita e Maria continuavam conversando e sorrindo. Um comportamento muito estranho para aquele momento tão tenso.
	1.2.1 Ir na casa
		1.2.1.1 Encontra a porta semiaberta. 
Maria entrou sem demonstrar nenhum sinal de medo e o portão se fechou sozinho logo atrás dela, a luz se apagou e ela gritou sem parar. 

			1.2.1.1.1 Entra
 Carolina nunca teve coragem de entrar na casa da sua melhor amiga, um lugar sombrio e muito cheio de mistérios, mas Laura, era o oposto dela, a coragem em pessoa e logo depois do receio subiu as escadas que dava num portão e, surpreendentemente, encontrou o grande cadeado aberto.

				1.2.1.1.1.1 Dentro do muro
Laura encostou o ouvido na porta e ouviu que havia mais uma pessoa na sala, passos de uma pessoa usando botas molhadas correndo. Ela desceu assustada para pedir ajuda e todas pareciam não entender ou escutar o que ela dizia. Entrou em desespero.
	1.2.1.1.1.2 

			1.2.1.1.2 Liga para um amigo da polícia 
				1.2.1.1.1.1  Marcos o policial informou que a policia só poderia entrar no caso se o desaparecimento fosse registrado após 72 horas.
				1.2.1.1.1.2  Prontamente o policial Marcos prometeu ajudar, mas tinha que fazer uma diligência antes de se deslocar para a casa de Ana Lucia. 
		1.2.1.2 Bate na porta e ninguém atende 
			1.2.1.2.1  Encontram uma janela aberta
1.2.1.2.1.1 
				1.2.1.2.1.2 

			1.2.1.2.2  Pergunta aos vizinhos
	1.2.2 Ir para item 2.1
2. Continuam bebendo e ...
2.1 Ligar novamente
	2.1.1 Ir opção 1.1(Atende uma voz masculina nervosa, dizendo que foi engano. As amigas acham que pode ser o namorado, que Ana Lúcia havia comentado em um dos encontros.)
2.2 Decidem ir mais tarde para a casa da amiga
	2.2.1 Encontram um sapato preferido dela na porta de casa
		2.2.1.1 Tocar na companhia
			2.2.1.1.1 Ninguém atende
				2.2.1.1.1.1 Fala com os vizinhos
				2.2.1.1.1.1 Ir para 1.2.1.1.2 (Liga para o amigo policial)
			2.2.1.1.2 Um homem atende a porta e diz boa noite 
2.2.1.1.2.1 Pergunta o nome dele
2.2.1.1.2.2 Empurram ele e entram na casa. Laura olhava para os lados pedindo ajuda e nada, nem ninguém se movia. Ela estava tendo um daqueles surtos mediúnicos. Laura um  correndor longo e escuro com uma porta no final e vai até lá. Lá chegando a porta tinha sumido, havia apenas uma parede escura no mesmo local e a única pista da daquele mistério mistério era o enorme cadeado quebrado no chão. Laura ficou ainda mais assustada, sem saber o que fazer para salvar a amiga que tinha sumido, justamente, como aquela porta. 


		2.2.1.2 Olhar pela janela fechada
2.2.1.2.1 As amigas naquele momento estavam com muito medo muito, muito medo mesmo. Na cidade corriam histórias sobre a região onde Ana Lúcia mora. Algumas pessoas evitavam passar perto da grande casa de madeira antiga, cujos os portões que viviam trancados com enormes cadeados pretos, eram abertos apenas pela dona do local. A casa fora herdada de seus milionários e excêntricos avós. Assim Ana a mantinha, Bastante original.
2.2.1.2.2 Na porta da casa ninguém ousava abri-la. Ouvía-se sons diferentes ruídos  vindos de lá e, olhando-se  elas diziam que era coisa da imaginação. As amigas sentiam arrepios quando decidiram invadir a tal casa. Assim que invadiram o portão, os barulhos estranhos aumentaram.

	2.2.2 Ir opção 1.2.1.1 (Encontra a porta semiaberta)
Dentro da casa, as mãos de Laura passeiam vagarosamente sobre uma penteadeira, encontram um pente de largos dentes que posteriormente poderiam entranhar por seu cabelo duro, tipo pixaim. Era assim que ela gostava de apresentá-los, na sua forma original. Não alisava os cabelos, mas era extremamente vaidosa. Mais um mistério... Ana Lúcia jamais usaria aquele tipo de artefato nas suas madeixas loiras. Todas estavam se perguntando a quem aquele pente pertencia?
Todas juntas agora percebem na cabeceira da cama, vários chumaços de algodão, como se alguém tivesse retirado suavemente do rosto os excessos de cremes colocados antes de dormir.  Uma toalha no chão exibia um rosto que possuía uma simetria única, com carnudos lábios. Mas bem que podiam ser de Ana Lúcia. Ela fazia tratamento com Botox.
Maria caminha para o closet, abre sem esforço a porta de correr, dá de cara com sua primeira dúvida: “qual é o vestido que Ana Lucia estaria usando quando saiu de casa?”.  
Carol considera tal indagação irrelevante. Mas Maria explica se descobrissem a roupa, poderia saber o destino.
O sol já esbanja sua luz laranja dourada sobre o orvalho da manhã.  O jardim daquela casa parecia mais bonito. Estavam bem dispostas ao amanhecer daquele lindo dia. Apesar de passarem a noite tentando desvendar o que estava acontecendo. E ainda se perguntavam: Será que Ana Lúcia saiu a bordo do seu Volkswagen conversível, abrindo o portão da garagem e partiu para mais uma de seus aventuras sem avisar a ninguém?
Na casa havia um  espaçoso escritório  e as meninas olhavam, sem pressa, os ponteiros do relógio anunciando o mais um amanhecer. Para elas, a sexta feira era um dia já superado e não foi um dia qualquer como os outros, o fato das suas amigas estarem  esperando uma resposta  para aquele mistério.
Se Lúcia não houvesse sumido, aquele seria mais um descontraído encontro, onde celebrariam o início de um novo final de semana. Mas um detalhe se tornaria muito incômodo neste encontro, todas as  amigas eram solteiras e nestas ocasiões se lançavam a caça, mas Ana Lucia iria apresentar o tal namorado Jhon. Elas  não simpatizava muito com a ideia.
Lucia resolve ir na sua empresa. Da forma como começou aquele dia, algo inesperado iria lhe acontecer. Na entrada do escritório pega o elevador que após subir dois andares,  para. La de fora, correndo apressadamente um jovem tenta alcançá-los, deixando cair um caderno e dois livros. Seus  olhos azuis pareciam pedir piedade ao perceber que aquelas portas poderiam se fechar. De fato, elas se fecharam sem que o belo jovem de corpo esquelético, nada atlético adentrasse naquele recinto.
Aquele rosto era conhecido, não era um dos seus empregados. Estática ela observou a luta do garoto de cabelos dourado sem esboçar  alguma reação; só ela e apenas ela poderia ter aliviado um pouco daquela aflição com um simples toque no botão. Mas não, até um pouco de sorriso sarcástico poderia ser registrado no canto da sua boca.
 O elevador seguiu parando num andar mais acima. Para sua surpresa o jovem alto de cabelos dourados aguardava do lado de fora. Desta vez o rapaz entra sem pressa no elevador, enquanto ela se contorcia para esconder o rosto, tamanha era sua vergonha por não ter ajudado o garoto no andar abaixo.
Sem acreditar na força produzida por um olhar, ela o olha bem nos olhos o suficiente para ele se sentir magnetizado, enquanto uma força estranha lhe impedia de desviar o olhar. Alguma coisa estranha havia naqueles olhares. Seria ali um momento propicio de amor a primeira vista? Para o amor chegar não há dia, não há hora e nem momento marcado para acontecer. Mas a identidade daquele rapaz trazia consigo outro mistério...
 




		 





}
