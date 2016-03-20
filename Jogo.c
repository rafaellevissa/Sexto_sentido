#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

//Declaração das funções:
int nome(void); //logo inicial do jogo;
int menu(void);//Menu para o usuário escolher opções;
int introducao(void); //introdução personagens:Laura;
int introducao1(void); //introdução personagens:Rita;
int introducao2(void); //introdução personagens:Maria;
int introducao3(void); //introdução personagens;
int introducao4(void); //introdução personagens;
int introducao5(void); //introdução personagens;
int parte1(void);
int parte2(void);
int parte3(void);
int parte4(void);
int parte5(void);
int continuar(void); //Função para limpar a tela e continuar ou não;
int a; //variável para guardar valor para limpar a tela;
int b; //variável para pegar decisão do usuário;

//Bloco de funções:
int nome(void){
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
int menu(void){
	printf("Selecione:\n\n");
	printf("\t Para tomar decisão 1, digite 1 \t\t");
	printf("Para tomar decisão 2, digite 2 \t\t");
	printf("Para sair do jogo, qlqr caracter \t\n");
	cin >> b;
	}
int introducao(void){
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
	printf("60% dos moradores de Xamy eram seus empregados. Dona do maior parque eólico da região. Assim passou a ser conhecida como\n");
	printf("“A garota dos ventos”, e aos 36 anos já é uma milionária. Com todo esse sucesso, ela ainda se sente frustrada, gostaria de \n");
	printf("engravidar antes dos 40 anos. Apesar de ser uma grande empreendedora, Laura não consegue ter o mesmo desempenho quando \n");
	printf("o assunto é relacionamento pessoal. Está solteira e nunca teve relacionamentos duradouros. Laura sempre atribui seu fracasso\n");
	printf("ao fato de se dedicar inteiramente ao trabalho. Mas isso não é tudo. Ele teme ser enganada por algum homem,\n");
	printf("se aproveitando de sua condição financeira. Fato passível de ocorrer.\n\n");	
	}
int introducao1(void){
	printf("\nPersonagem: Rita\n\n");	
	printf("Rita, 52 anos, atualmente divorciada.  Conheceu seu ex-marido no jardim de infância. Tiveram um casamento que durou 30 anos,\n");
	printf("deste relacionamento tiveram uma filha. Por ter vivido um único relacionamento, não tem segurança para aconselhar as suas amigas,\n");
	printf("mas é uma boa ouvinte. Praticou artes maciais durante 05 anos. Com o seu divórcio, foi convidada por\n");
	printf("Laura para trabalhar na sua empresa, quando passou a dividir o apartamento com Maria.\n");
	}
int introducao2(void){
	printf("\nPersonagem: Maria\n\n");	
	printf("Maria, embora nunca tenha saído da cidade onde nasceu, apresenta características nada típica daquele lugar, \n");
	printf("formada em Teatro, é uma excelente atriz, mas sua profissão não lhe garantiu grandes benefícios, \n");
	printf("uma vez que suas oportunidades foram bastantes parcas. Seu gosto por baladas, a mantem pouco \n");
	printf("distante do tipo de homem que gosta de se relacionar, pois os mesmos normalmente estão na faixa dos 50 anos. \n");
	printf("De todas as suas amigas, ela costuma se irritar com Ana Lucia, que sempre faz questão de lembrá-la que vive em uma vida de sonhos.\n");
	}
int introducao3(void){
	printf("\nPersonagem: Ana Lúcia\n\n");
	printf("Considerada a primeira dama da cidade, por ser herdeira de umas das famílias tradicionais de Xamy, \n");
	printf("Ana Lucia, esbanja sua riqueza de todas as formas possíveis. Muito carinhosa, essa sua característica a \n");
	printf("faz ser a mais próxima de todos as amigas, que embora não possam compartilhar ou ostentar dos mesmos \n");
	printf("privilégios e gostos, amam a sua presença. Tem um namorado e um filho, órfã de pai, \n");
	printf("deseja que sua amiga Carolina seja madrinha de seu filho. Carol como é conhecida, rejeita tal ideia.\n");
	}
int introducao4(void){
	printf("\nPersonagem: Carolina\n\n");	
	printf("Principal amiga de Ana Lucia, Carolina ama tecnologia, foi a principal articuladora da implantação tecnológica \n");
	printf("do Parque Eólico, gerido pela empresa de Laura. Tem 42 anos, cresceu no único orfanato da cidade, \n");
	printf("costuma afirmar que não gosta de crianças, mesmo diante da insistência de Ana Lucia para que \n");
	printf("batize o seu filho. Costuma se relacionar com rapazes mais jovens no máximo 24 anos. Seu culto ao corpo, \n");
	printf("ultrapassa o limite da razão, pratica musculação todos os dias da semana e sempre imagina acima do peso ideal.\n");
	}
int parte1(void){	
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
int continuar(void){
	printf("\nDigite 1 para continuar ou qualquer outro valor para sair do jogo\n");
	cin >> a;
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
	nome();
	continuar();
    introducao();
    continuar();
    introducao1();
    introducao2();
    continuar();
    introducao3();
    introducao4();
    continuar();
    parte1();
    continuar();
    menu();
       return 0;
}
