#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

void limparTela();
void pausar();
void Suspeitos();
void Pistas();
void Interrogatorio();
void Culpado();
void pausarInicio();

int main()
{
    int opcao;
    int status = 1;
    cout << "\n=== Detetive === \n";
    cout << "\n";
    cout << "Uma casa isolada no lago." << "\n";
    cout << "Cinco corpos." << "\n";
    cout << "Quatro melhores amigos de infancia e a namorada de um deles." << "\n";
    cout << "Uma casa sem arrombamento e os investigadores afirmam que foi alguem da casa\n";
    cout << "\nBoa sorte detetive\n";
    pausarInicio();
    limparTela();

    while (status)
    {
        limparTela();
        cout << "=== ERROR 404 === ";
        cout << "\n";
        cout << "1- Suspeitos\n";
        cout << "2- Procurar pistas\n";
        cout << "3- Interrogar familia, amigos e vizinhos\n";
        cout << "4- Culpado\n";
        cout << "5- Historia\n";
        cout << "6- Sair\n";
        cout << "Alternativa: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        {
            limparTela();
            Suspeitos();
            pausar();
            limparTela();
            break;
        }
        case 2:
        {
            limparTela();
            Pistas();
            pausar();
            limparTela();
            break;
        }
        case 3:
        {
            limparTela();
            Interrogatorio();
            pausar();
            limparTela();
            break;
        }
        case 4:
        {
            limparTela();
            Culpado();
            pausar();
            limparTela();
            break;
        }

        case 5:
        {
            limparTela();
            cout << "\nRelembre A Historia\n";
            cout << "\n";
            cout << "-----------------\n";
            cout << "\nEm uma noite fria de inverno, cinco pessoas se reuniram em uma casa isolada no lago. Havia CINCO corpos, QUATRO melhores amigos de infancia e uma namorada de um deles.\nNenhum sinal de arrombamento, os detetives tinham a certeza que o crime foi cometido por alguem dentro da casa, por UM dos amigos.\n";
            cout << "\n-----------------\n";
            cout << "\n";
            pausar();
            limparTela();
            break;
        }
        case 6:
        {
            status = 0;
            limparTela();
            cout << "Obrigado por usar o sistema\n";
            cout << "\n";
            pausar();
            limparTela();
            break;
        }
        default:
        {
            limparTela();
            cout << "Insira o valor do menu corretamente !";
            cout << "\n";
            pausar();
            limparTela();
            break;
        }
        }
    }
}

void Suspeitos()
{
    limparTela ();
    cout << "\nSuspeitos\n";
    cout << "\n----------------------\n";

    cout << "Thiago\n";
    cout << "\n- A familia militar ensinou disciplina e manejo de armas.\n";
    cout << "\n- Pode ter discutido com uma das vitimas. \n ";
    cout << "\n- 17 anos, branco, loiro, familia militar. \n ";
    cout << "\n----------------------\n";

    cout << "Luisa\n";
    cout << "\n- Rica e extremamente dificil de lidar.\n";
    cout << "\n- Tinha conflitos com praticamente todo mundo.\n ";
    cout << "\n- Namorada de Marcos.\n ";
    cout << "\n- Pode estar escondendo alguma coisa sobre a noite.\n";
    cout << "\n- Rica, ruiva, baixa, personalidade dificil.\n";
    cout << "\n----------------------\n";

    cout << "Luca\n";
    cout << "\n- O mais quieto do grupo.\n";
    cout << "\n- Sabe mexer com computadores/eletronicos. \n ";
    cout << "\n- Descobre coisas que os outros nao sabiam. \n ";
    cout << "\n- Branco, baixo, nerd, timido e tem 17 anos.\n";
    cout << "\n----------------------\n";

    cout << "Curry \n";
    cout << "\n- Atleta e fisicamente forte.\n";
    cout << "\n- Pode ter sido visto discutindo com alguem. \n ";
    cout << "\n- Pardo, alto, atleta, cabelo cacheado preto, olhos verdes e tem 17 anos. \n ";
    cout << "\n----------------------\n";

    cout << "Marcos\n";
    cout << "\n-  Parece ser o mais 'normal' do grupo.\n";
    cout << "\n-  Classe media, familia complicada, namorado da Luisa. \n ";
    cout << "\n-  Marcos nao aceita um 'nao' como resposta.\n";
    cout << "\n- Japones, classe media, pais divorciados, irmaos.\n ";
}

void Pistas()
{
    limparTela ();
    int op = 1;
    while (op)
    {
        cout << "\n INVESTIGAR PISTAS \n";
        cout << "\n---------------------\n";
        cout << "1- Sala\n";
        cout << "2- Cozinha\n";
        cout << "3- Quarto 1\n";
        cout << "4- Quarto 2\n";
        cout << "5- Banheiro\n";
        cout << "6- Porao\n";
        cout << "7- Sair\n";
        cout << "Alternativa: ";
        cin >> op;

        switch (op)
        {
        case 1:
        {
            limparTela();
            cout << "\n=== Sala ===\n";
            cout << "\n------------------\n";
            cout << "\nA sala esta praticamente intacta. Nao ha sinais evidentes de arrombamento. Os moveis estao no lugar e as janelas estao fechadas.\nSobre a mesa de centro, ha um copo pela metade e outro vazio. Ao lado dos copos, ha um celular. A tela esta quebrada, mas o aparelho ainda funciona.\nO aparelho nao precisava de senha.\n";
            cout << "Desbloqueio o celular e abre automaticamente em uma conversa\n";
            cout << "MENSAGEM RECEBIDA: 23:47\n";
            cout << "\nLuca:'Voce tem certeza que foi descoberto?'\n ";
            cout << "\nMarcos:'Tenho.'\n";
            cout << "\nLuca:'Mas quem esta ameacando a gente?'\n ";
            cout << "\nMarcos:'Nao importa, mas nao conte para os outros.'\n";
            cout << "\nSaindo do celular e olhando em volta\n";
            cout << "\nOlhando mais perto do copo pela metade, ha uma marca de batom na borda.";
            cout << "\nO outro copo esta completamente vazio e exala um forte cheiro de produto quimico.";
            cout << "\nApos a pericia, foi constatado que havia veneno nos dois copos.";
            cout << "\nAs digitais encontradas pertencem a Luisa e Marcos.\n";
            pausar();
            break;
        }

        case 2:
        {
            limparTela();
            cout << "\n=== Cozinha ===\n";
            cout << "\n------------------\n";
            cout << "A cozinha esta em completo silencio. Ha sinais de desordem no ambiente. Tem algo atras da bancada UM corpo e uma grande mancha de sangue em volta da vitima.\n Sobre a pia, ha uma faca com sangue. Voce leva ao perito para a analise e ele retorna com a resposta.\n\nLuca.\n ";
            cout << "\n--------------\n";
            cout << "\nInvestigando o corpo\n ";
            cout << "Parece que Luca tentou se defender de alguem.\n";
            cout << "A vitima possui ferimentos nas maos.\n";
            cout << "Em uma das maos, ha pequenos fios de tecido presos aos dedos.\n";
            cout << "A cor e semelhante a uma roupa usada por Thiago.\n";
            pausar();
            limparTela();
            break;
        }
        case 3:
        {
            limparTela();
            cout << "\n=== Quarto 1 ===\n";
            cout << "\n------------------\n";
            cout << "\nO quarto esta baguncado.\n";
            cout << "No chao, voce encontra o corpo de Thiago.\n\n";
            cout << "Um espelho esta quebrado e ha dinheiro espalhado pelo chao.\n";
            cout << "Entre os fragmentos do espelho, voce encontra uma pequena mancha de sangue e um sapato de salto rosa cheio de sangue.\n\n";
            cout << "A cena parece indicar que houve uma briga antes da morte.\n";
            pausar();
            limparTela();
            break;
        }
        case 4:
        {
            limparTela();
            cout << "\n=== Quarto 2 ===\n";
            cout << "\n------------------\n";
            cout << "O quarto esta vazio e a porta esta entreaberta.\n";
            cout << "Ao entrar, voce percebe que algo esta errado.\n";
            cout << "Perto da janela, ha sinais de uma luta.\n";
            cout << "Uma cadeira esta derrubada e alguns objetos estao espalhados pelo chao.\n";
            cout << "Ao lado da cama, voce encontra o corpo de Curry.\n";
            cout << "Ele possui um ferimento na cabeca causado por uma coronhada.\n";
            cout << "Perto do corpo, ha um par de oculos quebrados.\n";
            cout << "Os oculos parecem pertencer a Luca.\n";
            cout << "Ao lado dos oculos, ha uma arma.\n";
            cout << "Ela parece ter sido deixada ali de proposito.\n";
            pausar();
            limparTela();
            break;
        }
        case 5:
        {
            limparTela();
            cout << "\n=== Banheiro ===\n";
            cout << "\n------------------\n";
            cout << "A porta esta entreaberta.\n";
            cout << "Dentro da banheira, voce encontra o corpo de Luisa.\n";
            cout << "Nao ha ferimentos aparentes no corpo.\n";
            cout << "O perito acredita que Luisa morreu afogada.\n\n";
            cout << "Ao lado da banheira, ha um celular com a tela quebrada.\n";
            cout << "A ultima conversa aberta chama sua atencao.\n";
            cout << "\nLuisa: 'Eu sei que voce contou para o Thiago.'\n";
            cout << "\nLuca: 'Voce nao deveria ter descoberto isso.'\n";
            cout << "\nLuisa: 'E o Marcos? Ele sabe que eu descobri?'\n";
            cout << "\nLuca: 'Ainda nao.'\n";
            cout << "A conversa termina por ai.\n";
            cout << "No chao, voce encontra uma pequena marca de tenis.\n";
            cout << "O tamanho parece ser semelhante ao que Curry usa.\n";
            pausar();
            limparTela();
            break;
        }
        case 6:
        {
            limparTela();
            cout << "\n=== Porao ===\n";
            cout << "\n------------------\n";
            cout << "O porao esta escuro e silencioso.\n";
            cout << "Ha sinais de uma briga pelo chao.\n\n";
            cout << "No canto do porao, voce encontra o corpo de Marcos.\n";
            cout << "Seus labios estao azulados e ha sinais de vomito proximo ao corpo.\n\n";
            cout << "Mas suas roupas possuem manchas de sangue.\n";
            cout << "Seus bracos tambem apresentam arranhoes, indicando que houve uma luta antes de sua morte.\n\n";
            cout << "Em suas maos, ha um notebook.\n\n";
            cout << "O notebook pertence a Luca.\n";
            cout << "A tela ainda esta ligada.\n";
            cout << "Uma conversa esta aberta na tela:\n";
            cout << "\nLuca: 'Eles ja sabem que nao existe assassino nenhum.'\n";
            cout << "\nMarcos: 'Entao voce descobriu.'\n";
            cout << "\nLuca: 'Eles precisam saber a verdade.'\n";
            cout << "\nMarcos: 'Voce nao deveria ter mexido nisso.'\n";
            cout << "\nLuca: 'Eu vou contar para todos.'";
            pausar();
            limparTela();
            break;
        }

        case 7:
        {
            limparTela();
            op = 0;
            limparTela();
            break;
        }
        default:
        {
            limparTela();
            cout << "Insira o valor do menu corretamente !";
            cout << "\n";
            pausar();
            limparTela();
            break;
        }
        }
    }
}

void Interrogatorio()
{
    limparTela();
    int inte = 1;

    while (inte)
    {

        cout << "\nINTERROGATORIO\n";
        cout << "\n";
        cout << "1- Familia de Thiago\n";
        cout << "2- Familia de Luca\n";
        cout << "3- Familia de Marcos\n";
        cout << "4- Familia de Luisa\n";
        cout << "5- Familia de Curry\n";
        cout << "6- Sair\n";
        cout << "Alternativa: ";
        cin >> inte;

        switch (inte)
        {

        case 1:
        {
            limparTela();
            cout << "\n=== Familia de Thiago ===\n";
            cout << "\n-A mae de Thiago parece nervosa durante o depoimento.\n";
            cout << "\n'Ele sempre foi muito disciplinado por causa da nossa familia.'\n";
            cout << "\n'Naquela noite, ele me ligou. Disse que tinha discutido com alguem, mas nao quis dizer quem.'\n";
            cout << "\n'Antes de desligar, ele disse que estava com medo de alguma coisa.'\n";
            pausar();
            limparTela();
            break;
        }
        case 2:
        {
            limparTela();
            cout << "\n=== Familia de Luca ===\n";
            cout << "\n-A mae de Luca parece bastante nervosa durante o depoimento.\n";
            cout << "\n'Eu sabia que ele e os amigos estavam envolvidos em alguma coisa, mas nunca imaginei que chegaria a esse ponto.'\n";
            cout << "\n'Eles aplicavam golpes juntos. Luca cuidava principalmente da parte envolvendo computadores.'\n";
            cout << "\n'Eu pedi varias vezes para ele parar, mas ele dizia que era apenas uma forma de ganhar dinheiro.'\n";
            cout << "\n'Nos ultimos dias, porem, ele parecia assustado. Dizia que alguem tinha descoberto o que eles estavam fazendo.'\n";
            pausar();
            limparTela();
            break;
        }
        case 3:
        {
            limparTela();
            cout << "\n=== Familia de Marcos ===\n";
            cout << "\n-A familia de Marcos parece abalada com a noticia.\n";
            cout << "\n'Marcos nunca teve uma vida muito facil. Nossos pais se separaram quando ele era pequeno.'\n";
            cout << "\n'Ele sempre precisou cuidar dos irmaos e aprendeu a resolver os problemas sozinho.'\n";
            cout << "\n'Ele pode ser teimoso, mas nunca imaginariamos que ele faria algo assim.'\n";
            cout << "\n'Na verdade, ele sempre teve dificuldade em aceitar quando alguem dizia nao para ele.'\n";
            pausar();
            limparTela();
            break;
        }
        case 4:
        {
            limparTela();
            cout << "\n=== Familia de Luisa ===\n";
            cout << "\n-A familia de Luisa demonstra muita preocupacao durante o depoimento.\n";
            cout << "\n'Luisa estava brigada com algumas pessoas do grupo.'\n";
            cout << "\n'Mas nos ultimos dias ela estava especialmente irritada com Marcos.'\n";
            cout << "\n'Ela chegou a dizer que Marcos estava escondendo alguma coisa dela.'\n";
            cout << "\n'Quando perguntamos o que era, ela simplesmente disse que ainda precisava descobrir a verdade.'\n";
            pausar();
            limparTela();
            break;
        }
        case 5:
        {
            limparTela();
            cout << "\n=== Familia de Curry ===\n";
            cout << "\n-A familia de Curry parece surpresa ao saber que ele estava sendo investigado\n";
            cout << "\n'Curry nunca foi de arrumar briga, apesar de ser bastante forte.'\n";
            cout << "\n'Mas naquela noite ele saiu de casa dizendo que precisava resolver um problema com os amigos.'\n";
            cout << "\n'Ele estava usando o mesmo tenis que costuma usar para treinar.'\n";
            pausar();
            limparTela();
            break;
        }
        case 6:
        {
            inte = 0;
            limparTela();
            break;
        }
        default:
        {
            limparTela();
            cout << "Insira o valor do menu corretamente !";
            cout << "\n";
            pausar();
            limparTela();
            break;
        }
        }
    }
}

void Culpado()
{
    limparTela();
    string culpado;
    cout << "\n=== ACUSAR O CULPADO ===\n";
    cout << "\n------------------\n";
    cout << "Voce precisa decidir quem e o responsavel pelas mortes.\n\n";
    cout << "Digite o nome do culpado: ";
    cin >> culpado;

    if (culpado == "Marcos" or culpado == "marcos")
    {
        cout << "\nAcertou! O culpado era o Marcos.\n";
        cout << "Marcos e os amigos estavam envolvidos em golpes para ganhar dinheiro. Porem, Marcos queria ficar com todo o dinheiro para si. \nEle inventou que um maluco havia descoberto os golpes e estava ameacando o grupo.\nQuando Luca descobriu que tudo era mentira, Marcos decidiu eliminar todos e criar pistas para incriminar os outros.\nDepois de matar seus amigos, Marcos tomou o segundo copo envenenado e morreu no porao.\n\n O verdadeiro motivo? \n\nMarcos queria o dinheiro todo para ele.\n";
    }
    else
    {
        cout << "\nErrou! Tente desvendar novamente o crime.\n";
    }
}
void pausarInicio()
{
    cout << "\nPressione Enter para continuar...";
    cin.get();
}

void pausar()
{
    cout << "\nPressione Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
void limparTela()
{
    cout << "\033[2J\033[H";
}
