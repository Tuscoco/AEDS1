#include <iostream>

class pessoa{

    private:
        std::string nome;
        int idade;
        int codigo;

    public:
        void setNome(std::string);
        void setIdade(int);
        void setCodigo(int);
        std::string getNome();
        int getIdade();
        int getCodigo();
};

void pessoa::setNome(std::string nome){
    this->nome = nome;
}
void pessoa::setIdade(int idade){
    this->idade = idade;
}
void pessoa::setCodigo(int codigo){
    this->codigo = codigo;
}
std::string pessoa::getNome(){
    return nome;
}
int pessoa::getIdade(){
    return idade;
}
int pessoa::getCodigo(){
    return codigo;
}

class aluno:public pessoa{

    private:
        float nota;
        int faltas;

    public:
        aluno();
        void setNota(float);
        void setFaltas(int);
        void imprimirInfoAluno();
};

aluno::aluno(){
    setNome("Aluno");
    setIdade(0);
    setCodigo(0000);
    nota = 0.0;
    faltas = 0;
}
void aluno::setNota(float nota){
    this->nota = nota;
}
void aluno::setFaltas(int faltas){
    this->faltas = faltas;
}
void aluno::imprimirInfoAluno(){
    std::system("cls");
    std::cout << "===============ALUNO===============" << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Idade: " << getIdade() << std::endl;
    std::cout << "Codigo: " << getCodigo() << std::endl;
    std::cout << "Nota: " << nota << std::endl;
    std::cout << "Faltas: " << faltas << std::endl;
    std::cout << "===================================" << std::endl;
}

class professor:public pessoa{

    private:
        float salario;
        std::string disciplina;

    public:
        professor();
        void setSalario(float);
        void setDisciplina(std::string);
        void imprimirInfoProfessor();
};

professor::professor(){
    setNome("Professor");
    setIdade(0);
    setCodigo(0000);
    salario = 0.0;
    disciplina = "Null";
}
void professor::setSalario(float salario){
    this->salario = salario;
}
void professor::setDisciplina(std::string disciplina){
    this->disciplina = disciplina;
}
void professor::imprimirInfoProfessor(){
    std::system("cls");
    std::cout << "===============PROFESSOR===============" << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Idade: " << getIdade() << std::endl;
    std::cout << "Codigo: " << getCodigo() << std::endl;
    std::cout << "Salario: " << salario << std::endl;
    std::cout << "Disciplina: " << disciplina << std::endl;
    std::cout << "=======================================" << std::endl;
}

int main()
{
    aluno a1;
    professor p1;
    int op;
    char c;

    std::cout << "====================ESCOLA====================" << std::endl;
    std::cout << "Gostaria de iniciar o programa?(S ou N)" << std::endl;
    std::cout << "==============================================" << std::endl;
    std::cin >> c;

    if(c != 'S' && c != 's'){
        return 0;
    }

    std::system("cls");

    while(1)
    {
        std::cout << "==============================================" << std::endl;
        std::cout << "1 - Imprimir informacoes Aluno" << std::endl;
        std::cout << "2 - Imprimir informacoes Professor" << std::endl;
        std::cout << "3 - Cadastrar aluno" << std::endl;
        std::cout << "4 - Cadastrar professor" << std::endl;
        std::cout << "0 - Encerrar programa" << std::endl;
        std::cout << "==============================================" << std::endl;
        std::cin >> op;

        if(op == 0){
            break;
        }else if(op == 1){
            a1.imprimirInfoAluno();
        }else if(op == 2){
            p1.imprimirInfoProfessor();
        }else if(op == 3){
        }else if(op == 4){}
    }

    return 0;
}