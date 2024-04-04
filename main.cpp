
#include <iostream>
using namespace std;

int main()
{
    int escolha;
    int opcao;
    string personagem;
    string entidade;
    char interagir;
    
void apresentarPersonagem() {
    cout << "Apresentando o personagem:" << endl;
    cout << "Sou Kratos, o matador de Deuses e do bem." << endl;
    cout << "Estou aqui para interagir com você e ajudar na sua jornada!" << endl;
}


void apresentarEntidade() {
   
    cout << "Aqui está uma entidade filantrópica:" << endl;
    cout << "Nome: Rio Nilo" << endl;
    cout << "Missão do Kratos: Salvar o povo do Rio Nilo e enfrentar o Deus Rá." << endl;
}
void Interagir() {
    
    count<< "Vamos entrar na cidade e salvar o povo:" << endl;
    count<< "1- Matar o Deus Rá" << endl;
    count<< "2- Matar as múmias no vilarejo" << endl;
    count<< "3- Retornado para o vilarejo..." << endl;
    
    int escolha;
    cout << "Escolha uma opção: ";
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Você escolheu Matar o Deus Rá." << endl;
            break;
        case 2:
            cout << "Você escolheu Matar as múmias no vilarejo." << endl;
            break;
        case 3:
            cout << "Retornado para o vilarejo..." << endl;
            break;
        default:
            cout << "Opção inválida. Por favor, escolha novamente." << endl;
    }
}

int main() {
    while(true) {
        
        cout << "-- MENU --" << endl;
        cout << "1. Apresentar o personagem:" << endl;
        cout << "2. Apresentar a entidade filantrópica:" << endl;
        cout << "3. Interagir com a entidade:" << endl;
        cout << "4. Sair" << endl;

        int opcao;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                apresentarPersonagem();
                break;
            case 2:
                apresentarEntidade();
                break;
            case 3:
                interagir();
                break;
            case 4:
                cout << "Saindo do sistema" << endl;
                return 0;
            default:
                cout << "Opção inválida. Por favor, escolha novamente." << endl;
        }
    }

    return 0;
