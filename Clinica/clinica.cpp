#include <iostream>
#include <queue>
#include <limits>
#include <string>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

int validarIdade(int idade);
int validarCpf(string cpf);
int validarNome(string nome);

void limparTela();
void pausar();

struct Paciente
{
    string nome;
    int idade;
    int prioridade;
    string cpf;
};

struct Chamada
{
    Paciente paciente;
    Chamada *proximo;
};

void cadastro(Chamada *&inicio, queue<Chamada *> &fila);
void lista(Chamada *&inicio);
void Chamar(Chamada *&inicio, queue<Chamada *> &fila);
void inserirFila(queue<Chamada *> &fila, Chamada *novo);

int main()
{
    Chamada *inicio = nullptr;
    int opcao;
    int status = 1;
    queue<Chamada *> fila;

    while (status)
    {
        cout << "\n===Clinica===\n";
        cout << "1- Cadastrar paciente\n";
        cout << "2- Listar Paciente\n";
        cout << "3- Chamar proximo paciente\n";
        cout << "4- Sair\n";
        cout << "Alternativa: ";
        cin >> opcao;

        switch (opcao)
        {

        case 1:
        {
            limparTela();
            cadastro(inicio, fila);
            pausar();
            limparTela();
            break;
        }

        case 2:
        {
            limparTela();
            lista(inicio);
            pausar();
            limparTela();
            break;
        }

        case 3:
        {
            limparTela();
            Chamar(inicio, fila);
            pausar();
            limparTela();
            break;
        }
        case 4:
        {
            limparTela();
            printf("Obrigado por usar o sistema!\n");
            status = 0;
            break;
        }
        default:
        {
            limparTela();
            printf("Opcao invalida. Tente novamente.\n");
            pausar();
            limparTela();
            break;
        }
        }
    }
    return 0;
}

void cadastro(Chamada *&inicio, queue<Chamada *> &fila)
{

    int op;
    Paciente paciente;
    cout << "\n === Cadastro de Paciente ===\n";
    bool cadastroValido = false;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    do
    {
        cout << "Nome: ";
        getline(cin, paciente.nome);

        if (!validarNome(paciente.nome))
        {
            cout << "Nome invalido! Digite apenas letras e espacos.\n";
        }

    } while (!validarNome(paciente.nome));

    do
    {
        cout << "Idade: ";
        cin >> paciente.idade;

        if (!validarIdade(paciente.idade))
        {
            cout << "Idade invalida! Digite um valor entre 1 e 119.\n";
        }

    } while (!validarIdade(paciente.idade));

    do
    {
        cout << "CPF: ";
        cin >> paciente.cpf;

        if (!validarCpf(paciente.cpf))
        {
            cout << "CPF invalido! Digite 11 numeros.\n";
        }

    } while (!validarCpf(paciente.cpf));

    pausar();
    limparTela();
    cout << "\n=== Prioridades ===\n";
    cout << "1- Idoso\n";
    cout << "2- Crianca\n";
    cout << "3- Deficiente\n";
    cout << "4- Gestante\n";
    cout << "5- Obesos\n";
    cout << "6- Sem prioridade\n";
    cout << "Alternativa: ";
    cin >> op;

    switch (op)
    {
    case 1:
    {
        if (paciente.idade >= 60)
        {
            paciente.prioridade = op;
            cadastroValido = true;
            cout << "Concluido";
        }
        else
        {
            cout << "Nao e prioridade";
        }
        break;
    }
    case 2:
    {
        if (paciente.idade <= 12)
        {
            paciente.prioridade = op;
            cadastroValido = true;
            cout << "Concluido";
        }
        else
        {
            cout << "Nao e criança";
        }
        break;
    }
    case 3:
    {
        cout << "Concluido";
        cadastroValido = true;
        paciente.prioridade = op;
        break;
    }
    case 4:
    {
        cout << "Concluido";
        cadastroValido = true;
        paciente.prioridade = op;
        break;
    }
    case 5:
    {
        cout << "Concluido";
        cadastroValido = true;
        paciente.prioridade = op;
        break;
    }
    case 6:
    {
        cout << "Concluido";
        cadastroValido = true;
        paciente.prioridade = op;
        break;
    }
    default:
    {
        printf("Opcao invalida.\n");
        break;
    }
    }
    if (cadastroValido)
    {
        Chamada *novo_paciente = new Chamada;
        novo_paciente->paciente = paciente;
        novo_paciente->proximo = inicio;
        inicio = novo_paciente;
        inserirFila(fila, novo_paciente);
    }
}

void lista(Chamada *&inicio)
{
    cout << "\n LISTA DE PACIENTES \n";
    cout << "\n";
    cout << "Pacientes: ";
    cout << "\n--------------\n";

    if (inicio == nullptr)
    {
        cout << "Nenhum paciente cadastrado.\n";
        return;
    }

    Chamada *novo_paciente = inicio;

    while (novo_paciente != nullptr)
    {
        cout << "Nome: " << novo_paciente->paciente.nome << "\n";
        cout << "Prioridade: " << novo_paciente->paciente.prioridade << "\n";
        cout << "\n-----------\n";
        novo_paciente = novo_paciente->proximo;
    }
}

void Chamar(Chamada *&inicio, queue<Chamada *> &fila)
{
    cout << "\n=== Pacientes Aguardando ===\n";

    if (fila.empty())
    {
        cout << "Nao ha pacientes aguardando.\n";
        return;
    }

    Chamada *paciente = fila.front();

    cout << "Paciente chamado: "
         << paciente->paciente.nome << endl;

    fila.pop();

    if (inicio == paciente)
    {
        inicio = inicio->proximo;
    }
    else
    {
        Chamada *atual = inicio;

        while (atual != nullptr && atual->proximo != paciente)
        {
            atual = atual->proximo;
        }

        if (atual != nullptr)
        {
            atual->proximo = paciente->proximo;
        }
    }

    delete paciente;

    cout << "\nPaciente removido da lista e da fila.\n";

    if (!fila.empty())
    {
        cout << "Proximo paciente: "
             << fila.front()->paciente.nome << endl;
    }
    else
    {
        cout << "Nao ha mais pacientes na fila." << endl;
    }

    cout << "Tamanho da fila: " << fila.size() << endl;
}
void inserirFila(queue<Chamada *> &fila, Chamada *novo)
{
    queue<Chamada *> auxiliar;

    while (!fila.empty() &&
           fila.front()->paciente.prioridade <= novo->paciente.prioridade)
    {
        auxiliar.push(fila.front());
        fila.pop();
    }

    auxiliar.push(novo);

    while (!fila.empty())
    {
        auxiliar.push(fila.front());
        fila.pop();
    }

    fila = auxiliar;
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

int validarIdade(int idade)
{
    if (idade < 1 || idade > 119)
    {
        return 0;
    }

    return 1;
}

int validarNome(string nome)
{
    if (nome.length() < 3)
        return 0;

    for (int i = 0; nome[i] != '\0'; i++)
    {
        if (!(isalpha((unsigned char)nome[i]) || nome[i] == ' '))
        {
            return 0;
        }
    }

    return 1;
}

int validarCpf(string cpf)
{
    if (cpf.length() != 11)
    {
        return 0;
    }

    for (int i = 0; cpf[i] != '\0'; i++)
    {
        if (!isdigit((unsigned char)cpf[i]))
        {
            return 0;
        }
    }

    return 1;
}
