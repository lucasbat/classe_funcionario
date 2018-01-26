/*

Programa que implementa uma classe chamada Funcionario para calcular
salario do funcionario, gerente e diretor.

*/

#include<iostream>
#include<string>
using namespace std;
class Funcionario{
	private:
		string nome;
		float vextra, sal, qextra;
	public:
		Funcionario(){
			vextra=0;
			sal=0;
			qextra=0;
		}
		~Funcionario(){}
		void set_dados(){
			cout<<"\nNome: "; getline(cin,nome);
			cout<<"\nValor hora extra: "; cin>>vextra;
			cout<<"\nSalario: "; cin>>sal;
			cout<<"\nQtd hora extra: "; cin>>qextra;
			cin.ignore();
		}
		void print_dados(){
			cout<<"\nNome: "<<nome;
			cout<<"\nValor hora extra: "<<vextra;
			cout<<"\nSalario: "<<sal;
			cout<<"\nQtd hora extra: "<<qextra;
		}
		float salario(){
			float sa;
			sa=(sal+(qextra*vextra));
			return sa;
		}
};
class Gerente:public Funcionario{
	public:
		float salario(){
			float salg;
			salg=Funcionario::salario();
			return salg*1.2;
		}
};
class Diretor:public Funcionario{
	public:
		float salario(){
			float sald;
			sald=Funcionario::salario();
			return sald*1.4;
		}
};
int main(){
	Funcionario X;
	Gerente Y;
	Diretor Z;
	X.set_dados();
	X.print_dados();
	cout<<"\nSalario R$ "<< X.salario();
	cout<<"\n\n";
	Y.set_dados();
	Y.print_dados();
	cout<<"\nSalario R$ "<< Y.salario();
	cout<<"\n\n";
	Z.set_dados();
	Z.print_dados();
	cout<<"\nSalario R$ "<< Z.salario();

	cout<<"\n\n";
	return 0;
}
