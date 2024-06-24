#include <iostream>

class pessoa{

    public:
        std::string nome;
        int idade;
        int codigo;

    private:
        void setNome(std::string);
        void setIdade(int);
        void setCodigo(int);
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

class aluno:public pessoa{

    public:
        float nota;
        int faltas;

    private:
        aluno();
        void setNota(float);
        void setFaltas(int);
        void imprimirInfoAluno();
};

aluno::aluno(){
    nome = "Aluno";
    idade = 0;
    codigo = 0000;
    nota = 0.0;
    faltas = 0;
}
void aluno::setNota(float nota){
    this->nota = nota;
}
void aluno::setFaltas(int faltas){
    this->faltas = faltas;
}
void aluno::imprimirInfoAluno(){}

class professor:public pessoa{

    public:
        float salario;
        std::string disciplina;

    private:
        professor();
        void setSalario(float);
        void setDisciplina(std::string);
};

professor::professor(){
    nome = "Professor";
    idade = 0;
    codigo = 0000;
    salario = 0.0;
    disciplina = "Null";
}
void professor::setSalario(float salario){
    this->salario = salario;
}
void professor::setDisciplina(std::string disciplina){
    this->disciplina = disciplina;
}