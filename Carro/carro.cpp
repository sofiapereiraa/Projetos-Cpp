#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

void pausar();
void limparTela();
struct Carro
{
    string modelo;
    string nome;
    int ano;
    float preco;
    int Id;
};

void Cadastro(vector<Carro> &carros, int &proximoId);
void MostrarDados(vector<Carro> &carros);
void Listar(vector<Carro> &carros);
void Editor(vector<Carro> &carros);
void Remover(vector<Carro> &carros);

bool validarNome(string nome);
bool validarModelo(string modelo);
bool validarAno(int ano);
bool validarPreco(float preco);
void Busca(vector<Carro> &carros);

int main()
{
    vector<Carro> carros;
    int status = 1;
    int op;
    int proximoId = 1;

    while (status)
    {

        cout << "\n=== Concessionaria ===\n";
        cout << "\n";
        cout << "1- Cadastrar carro\n";
        cout << "2- Listar carro\n";
        cout << "3- Buscar carro\n";
        cout << "4- Alterar carro\n";
        cout << "5- Remover carro\n";
        cout << "6- Sair\n";
        cout << "Alternativa: ";
        cin >> op;

        switch (op)
        {
        case 1:
        {
            limparTela();
            Cadastro(carros, proximoId);
            limparTela();
            break;
        }
        case 2:
        {
            limparTela();
            Listar(carros);
            pausar();
            limparTela();
            break;
        }
        case 3:
        {
            limparTela();
            Busca(carros);
            pausar ();
            limparTela();
            break;
        }
        case 4:
        {
            limparTela();
            Editor(carros);
            pausar();
            limparTela();
            break;
        }
        case 5:{
            limparTela();
            Remover(carros);
            limparTela ();
            break;
        }
        case 6:{
             limparTela ();
            cout << "Obrigado por usar nosso sistema !";
            status = 0;
            break;
        }
        default:{
              limparTela();
              cout << "-------------------";
              cout << "\nInvalido";
              cout << "\n-------------------\n";
              cout << "\nInsira um valor de menu valido !\n";
              pausar ();
              limparTela();
              break;
        }
        }
    }
}

void Cadastro(vector<Carro> &carros, int &proximoId)
{
    Carro novoCarro;
    novoCarro.Id = proximoId;
    cout << "\n=== Cadastro de Carros ===\n";
    cout << "\n--------------------\n";
    cout << "\nCarro ID: " << novoCarro.Id << "\n";

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    do
    {
        cout << "Nome: ";
        getline(cin, novoCarro.nome);

        if (!validarNome(novoCarro.nome))
        {
            cout << "Nome invalido! Digite apenas letras e espacos.\n";
        }

    } while (!validarNome(novoCarro.nome));

    do
    {
        cout << "Modelo: ";
        getline(cin, novoCarro.modelo);

        if (!validarModelo(novoCarro.modelo))
        {
            cout << "Modelo invalido! Digite apenas letras e espacos.\n";
        }

    } while (!validarModelo(novoCarro.modelo));

    do
    {
        cout << "Ano: ";
        cin >> novoCarro.ano;

        if (!validarAno(novoCarro.ano))
        {
            cout << "Ano invalido!\n";
        }

    } while (!validarAno(novoCarro.ano));

    do
    {
        cout << "Preco: ";
        cin >> novoCarro.preco;

        if (!validarPreco(novoCarro.preco))
        {
            cout << "Preco invalido!\n";
        }

    } while (!validarPreco(novoCarro.preco));

    carros.push_back(novoCarro);

    proximoId++;

    cout << "\nCarro cadastrado com sucesso!\n";

    pausar();
}

void Listar(vector<Carro> &carros)
{

    cout << "\n=== Lista de Carros Cadastrados ===\n";
    cout << "\n";
    MostrarDados(carros);
}

void Busca(vector<Carro> &carros)
{

    int idBusca;
    cout << "\n=== Busca ===\n";
    cout << "\n";

    cout << "\nDigite o ID do carro: ";
    cin >> idBusca;

    for (size_t i = 0; i < carros.size(); i++)
    {
        if (carros[i].Id == idBusca)
        {
            cout << "\n=== Carro encontrado ===\n";
            cout << "ID: " << carros[i].Id << "\n";
            cout << "Nome: " << carros[i].nome << "\n";
            cout << "Modelo: " << carros[i].modelo << "\n";
            cout << "Ano: " << carros[i].ano << "\n";
            cout << "Preco: " << carros[i].preco << " R$" << "\n";
            return;
        }
    }
       cout << "\nCarro nao encontrado!\n";
}

void MostrarDados(vector<Carro> &carros)
{
    for (size_t i = 0; i < carros.size(); i++)
    {
        cout << "\n=== Carro ===\n";
        cout << "ID: " << carros[i].Id << "\n";
        cout << "Nome: " << carros[i].nome << "\n";
        cout << "Modelo: " << carros[i].modelo << "\n";
        cout << "Ano: " << carros[i].ano << "\n";
        cout << "Preco: " << carros[i].preco << " R$" << "\n";
        cout << "\n--------------------\n";
    }
    if (carros.size () ==0 )
    {
        cout << "-------------------";
        cout << "\nInvalido";
        cout << "\n-------------------\n";
        cout  << "Nenhum carro cadastrado!\n";
    }
   
}

void Editor(vector<Carro> &carros)
{
    int idBusca;
    int editor;
    cout << "\n=== Editor ===\n";
    cout << "\nDigite o ID do carro: ";
    cin >> idBusca;

    for (size_t i = 0; i < carros.size(); i++)
    {
        if (carros[i].Id == idBusca)
        {
            cout << "\n=== Carro encontrado ===\n";
            cout << "ID: " << carros[i].Id << "\n";
            cout << "Nome: " << carros[i].nome << "\n";
            cout << "Modelo: " << carros[i].modelo << "\n";
            cout << "Ano: " << carros[i].ano << "\n";
            cout << "Preco: " << carros[i].preco << "\n";
            pausar();
            limparTela();
            cout << "\nEscolha o que deve ser editado\n";
            cout << "1- Nome\n";
            cout << "2- Modelo\n";
            cout << "3- Ano\n";
            cout << "4- Preco\n";
            cout << "5- Sair\n";
            cout << "Alternativa: ";
            cin >> editor;

            switch (editor)
            {
            case 1:
            {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nEditor\n";
                cout << "\n-----------------\n";
                do
                {
                    cout << "Nome: ";
                    getline(cin, carros[i].nome);

                    if (!validarNome(carros[i].nome))
                    {
                        cout << "Nome invalido!\n";
                    }

                } while (!validarNome(carros[i].nome));
                break;
            }
            case 2:
            {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nEditor\n";
                cout << "\n-----------------\n";
                do
                {
                    cout << "Modelo: ";
                    getline(cin, carros[i].modelo);

                    if (!validarModelo(carros[i].modelo))
                    {
                        cout << "Modelo invalido! \n";
                    }

                } while (!validarModelo(carros[i].modelo));
                break;
            }
            case 3:
            {
                cout << "\nEditor\n";
                cout << "\n-----------------\n";
                do
                {
                    cout << "Ano: ";
                    cin >> carros[i].ano;

                    if (!validarAno(carros[i].ano))
                    {
                        cout << "\n Ano invalido !\n";
                    }

                } while (!validarAno(carros[i].ano));
                break;
            }

            case 4:
            {
                cout << "\nEditor\n";
                cout << "\n-----------------\n";
                do
                {
                    cout << "Preco: ";
                    cin >> carros[i].preco;

                    if (!validarPreco(carros[i].preco))
                    {
                        cout << "\nPreco invalido !\n";
                    }

                } while (!validarPreco(carros[i].preco));
                break;
            }
            case 5:
            {
                cout << "\nSaindo do editar.....\n";
                pausar();
                break;
            }

            default:
            {
                cout << "\nOpcao de menu invalida !\n";
                pausar();
                break;
            }
            }
            return;
        }
    }
    cout << "\nCarro nao encontrado!\n";
}

void Remover(vector<Carro> &carros)
{
    int idBusca;
    int remover;
    cout << "\n=== Remover ===\n";
    cout << "\nDigite o ID do carro: ";
    cin >> idBusca;

    for (size_t i = 0; i < carros.size(); i++)
    {
        if (carros[i].Id == idBusca)
        {
            cout << "\n=== Carro encontrado ===\n";
            cout << "ID: " << carros[i].Id << "\n";
            cout << "Nome: " << carros[i].nome << "\n";
            cout << "Modelo: " << carros[i].modelo << "\n";
            cout << "Ano: " << carros[i].ano << "\n";
            cout << "Preco: " << carros[i].preco << "\n";
            pausar();
            limparTela();
            cout << "\nDeseja realmente remover esse carro ?\n";
            cout << "1- Sim\n";
            cout << "2- Nao\n";
            cout << "Alternativa: ";
            cin >> remover;

            switch (remover)
            {
            case 1:
            {
                carros.erase(carros.begin() + i);
                cout << "\nCarro removido com sucesso!\n";
                pausar();
                return;
            }
            case 2:
            {
                cout << "\nSaindo do remover.....\n";
                pausar();
                return;
            }
            default:
            {
                cout << "\nOpcao de menu invalida !\n";
                pausar();
                return;
            }
            }
        }
    }
         cout << "\nCarro nao encontrado!\n";

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

bool validarAno(int ano)
{
    if (ano < 1 || ano > 2028)
    {
        return 0;
    }

    return 1;
}

bool validarPreco(float preco)
{
    if (preco < 1)
    {
        return 0;
    }

    return 1;
}

bool validarNome(string nome)
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
bool validarModelo(string modelo)
{
    if (modelo.length() < 3)
        return 0;
    return 1;
}
