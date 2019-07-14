#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>


/**player rpg
*@author Jean Michel
*version 0.1
*@since 2019-06-02
*/


using namespace std;

class Player_rpg{
public:
	bool set_nome(char nnome[]);

	void set_forca(int nforca);
	void set_velocidade(int nvelocidade);
	void set_magia(int nmagia);
	void set_destreza(int ndestreza);
	void set_inteligencia(int ninteligencia);

	void set_hp(int hp);
	void set_mana(int mana);
/////////////////////////////////////////////////////////////////////////////////////////////
	void get_nome(char nome[]);
	
	int get_forca(void);
	int get_velocidade(void);
	int get_magia(void);
	int get_destreza(void);
	int get_inteligencia(void);

	int get_hp(void);
	int get_mana(void);


private:
	char nome[64];
	
	int forca;
	int velocidade;
	int magia;
	int destreza;
	int inteligencia;


	int hp;
	int mana;





};


void Player_rpg::get_nome(char nome[]) {
	strcpy(nome, this->nome);
}

int Player_rpg::get_forca(void) {
	return forca;
}
int Player_rpg::get_velocidade(void) {
	return velocidade;
}
int Player_rpg::get_magia(void) {
	return magia;
}
int Player_rpg::get_destreza(void) {
	return destreza;
}
int Player_rpg::get_inteligencia(void) {
	return inteligencia;
}

int Player_rpg::get_hp(void){
	return hp;
}

int Player_rpg::get_mana(void) {
	return mana;
}

//set

bool Player_rpg::set_nome(char nnome[])
{
	if (strlen(nnome) < 64) {
		strcpy(nome, nnome);
		return true;
	}
	else {
		return false;
	}
}

void Player_rpg::set_forca(int nforca)
{
	forca = nforca;
}

void Player_rpg::set_velocidade(int nvelocidade)
{
	velocidade = nvelocidade;
}

void Player_rpg::set_magia(int nmagia)
{
	magia = nmagia;
}

void Player_rpg::set_destreza(int ndestreza)
{
	destreza = ndestreza;
}

void Player_rpg::set_inteligencia(int ninteligencia)
{
	inteligencia = ninteligencia;
}

void Player_rpg::set_hp(int nhp)
{
	hp = nhp;
}

void Player_rpg::set_mana(int nmana)
{
	mana = nmana;
}

int main() {
	char nome[64];
	int i, op, op2, op3, escolha;//variaves operacionais

	Player_rpg player[10];
	
do{
	cout << "1-editar jogadores, 2-editar um status do jogador, 3-ver status dos jogadores, 4- acrecentar +1\n";
	cin >> op;
	switch(op){
		
		case 1:
			cout<<"escolha um espaco de 0 a 10: \n";
			cin >> i;
			fflush(stdin);
			cout << "escolha um nome: \n";
			gets(nome);
			player[i].set_nome(nome);
			
			cout << "escolha um forca: \n";
			cin >> escolha;
			player[i].set_forca(escolha);
			
			cout << "escolha um velocidade: \n";
			cin >> escolha;
			player[i].set_velocidade(escolha);
			
			cout << "escolha um magia: \n";
			cin >> escolha;
			player[i].set_magia(escolha);
			
			cout << "escolha um destreza: \n";
			cin >> escolha;
			player[i].set_destreza(escolha);
			
			cout << "escolha um inteligencia: \n";
			cin >> escolha;
			player[i].set_inteligencia(escolha);
			
			cout << "escolha um hp: \n";
			cin >> escolha;
			player[i].set_hp(escolha);
			
			cout << "escolha um mana: \n";
			cin >> escolha;
			player[i].set_mana(escolha);
			
			system("cls");
			
			break;
			
			
		case 2:
			cout<<"escolha um espaco de 0 a 10: \n";
			cin >> i;
			player[i].get_nome(nome);
			
			cout<<"qual atributo do  "<<nome<<" voce quer alterar"<<endl;
			cout<<"1-forca\n2-velocide\n3-magia\n4-destreza\n5-inteligencia\n6-HP\n7-mana";
			cin >> op2;
			switch(op2){
				case 1:
					cout << "escolha um forca: \n";
					cin >> escolha;
					player[i].set_forca(escolha);
					break;
					system("cls");
				
				
				case 2:
					cout << "escolha um velocidade: \n";
					cin >> escolha;
					player[i].set_velocidade(escolha);
					break;
					system("cls");
					
					
					
					
				case 3:
					cout << "escolha um magia: \n";
					cin >> escolha;
					player[i].set_magia(escolha);
					break;
					system("cls");
					
				case 4:
					cout << "escolha um destreza: \n";
					cin >> escolha;
					player[i].set_destreza(escolha);
					break;
					system("cls");
					
				case 5:
					cout << "escolha um inteligencia: \n";
					cin >> escolha;
					player[i].set_inteligencia(escolha);
					break;
					system("cls");
					
				case 6:
					cout << "escolha um hp: \n";
					cin >> escolha;
					player[i].set_hp(escolha);
					break;
					system("cls");
					
				case 7:
					cout << "escolha um mana: \n";
					cin >> escolha;
					player[i].set_mana(escolha);
					break;
					system("cls");
					
					
				default:
					break;
					system("cls");
			}
			break;
			
		case 3:
			do{
			
			cout<<"escolha um espaco de 0 a 10: \n";
			cin >> i;
			player[i].get_nome(nome);
			}while(i>10&&i<0);
			cout <<"nome: " << nome<<endl;
			
			cout <<"hp: " << player[i].get_hp() <<endl;
			cout <<"mana: " << player[i].get_mana() <<endl;
			
			
			cout <<"forca: " << player[i].get_forca()<<endl;
			cout <<"velocidade: " << player[i].get_velocidade()<<endl;
			cout <<"magia: " << player[i].get_magia() <<endl;
			cout <<"destreza: " << player[i].get_destreza() <<endl;
			cout <<"inteligencia: " << player[i].get_inteligencia() <<endl;
			break;
			
			case 4:
			cout<<"escolha um espaco de 0 a 10: \n";
			cin >> i;
			player[i].get_nome(nome);
			
			cout<<"qual atributo do jogador "<<nome<<" voce quer aumentar +1"<<endl;
			cout<<"1-forca\n2-velocide\n3-magia\n4-destreza\n5-inteligencia\n6-HP\n7-mana";
			cin >> op3;
			switch(op3){
				case 1:
					player[i].set_forca(player[i].get_forca()+1);
					cout <<"o atributo agora e: "<<player[i].get_forca()<<endl;
					break;
					system("cls");
					
				
				case 2:
					player[i].set_velocidade(player[i].get_velocidade()+1);
					cout <<"o atributo agora e: "<<player[i].get_velocidade()<<endl;
					break;
					system("cls");
					
					
					
					
				case 3:
					player[i].set_magia(player[i].get_magia()+1);
					cout <<"o atributo agora e: "<<player[i].get_magia()<<endl;
					break;
					system("cls");
					
				case 4:
					player[i].set_destreza(player[i].get_destreza()+1);
					cout <<"o atributo agora e: "<<player[i].get_destreza()<<endl;
					break;
					system("cls");
					
				case 5:
					player[i].set_inteligencia(player[i].get_inteligencia()+1);
					cout <<"o atributo agora e: "<<player[i].get_inteligencia()<<endl;
					break;
					system("cls");
					
				case 6:
					player[i].set_hp(player[i].get_hp()+1);
					cout <<"o atributo agora e: "<<player[i].get_hp()<<endl;
					break;
					system("cls");
					
				case 7:
					player[i].set_mana(player[i].get_mana()+1);
					cout <<"o atributo agora e: "<<player[i].get_mana()<<endl;
					break;
					system("cls");
					
					
				default:
					break;
					system("cls");
			}
			
			
		default:
			break;
			
	}
}while(op!=15);

	return 0;
}
