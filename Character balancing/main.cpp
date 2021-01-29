#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <ctime>

struct character {
	float hp = 0;
	float attack = 0.0f;
	float defense = 0.0f;
	int stamina = 0;
	float speed = 0.0f;
	std::string name;
	unsigned int id = 0;
}Bermudi_lvl_1, Laena_lvl_1, Joseph_lvl_1, Enemy_teleporter_lvl_1, Enemy_psychic_lvl_1, Enemy_runner_lvl_1, Enemy_electromaster_lvl_1,
Bermudi_lvl_5, Laena_lvl_5, Joseph_lvl_5, Enemy_teleporter_lvl_5, Enemy_psychic_lvl_5, Enemy_runner_lvl_5, Enemy_electromaster_lvl_5,
Bermudi_lvl_10, Laena_lvl_10, Joseph_lvl_10, Enemy_teleporter_lvl_10, Enemy_psychic_lvl_10, Enemy_runner_lvl_10, Enemy_electromaster_lvl_10,
Bermudi_lvl_15, Laena_lvl_15, Joseph_lvl_15, Enemy_teleporter_lvl_15, Enemy_psychic_lvl_15, Enemy_runner_lvl_15, Enemy_electromaster_lvl_15,
Chungus;

void reset_parameters() {

	//Bermudi lvl 1
	Bermudi_lvl_1.hp = 100;
	Bermudi_lvl_1.attack = 40.0f;
	Bermudi_lvl_1.defense = 90.0f;
	Bermudi_lvl_1.stamina = 90;
	Bermudi_lvl_1.speed = log(80.0f);
	Bermudi_lvl_1.name = "Bermudi Lvl 1";
	Bermudi_lvl_1.id = 1;

	//Laena lvl 1
	Laena_lvl_1.hp = 100.0f;
	Laena_lvl_1.attack = 40.0f;
	Laena_lvl_1.defense = 90.0f;
	Laena_lvl_1.stamina = 120;
	Laena_lvl_1.speed = log(50.0f);
	Laena_lvl_1.name = "Laena Lvl 1";
	Laena_lvl_1.id = 2;

	//Joseph lvl 1
	Joseph_lvl_1.hp = 110.0f;
	Joseph_lvl_1.attack = 45.0f;
	Joseph_lvl_1.defense = 80.0f;
	Joseph_lvl_1.stamina = 90;
	Joseph_lvl_1.speed = log(100.0f);
	Joseph_lvl_1.name = "Joseph Lvl 1";
	Joseph_lvl_1.id = 3;

	//Enemy teleporter lvl 1
	Enemy_teleporter_lvl_1.hp = 90.0f;
	Enemy_teleporter_lvl_1.attack = 36.0f;
	Enemy_teleporter_lvl_1.defense = 81.0f;
	Enemy_teleporter_lvl_1.stamina = 81;
	Enemy_teleporter_lvl_1.speed = log(72.0f);
	Enemy_teleporter_lvl_1.name = "Teleporter Lvl 1";
	Enemy_teleporter_lvl_1.id = 1;

	//Enemy psychic lvl 1
	Enemy_psychic_lvl_1.hp = 90.0f;
	Enemy_psychic_lvl_1.attack = 36.0f;
	Enemy_psychic_lvl_1.defense = 72.0f;
	Enemy_psychic_lvl_1.stamina = 108;
	Enemy_psychic_lvl_1.speed = log(45.0f);
	Enemy_psychic_lvl_1.name = "Psychic Lvl 1";
	Enemy_psychic_lvl_1.id = 2;

	//Enemy runner lvl 1
	Enemy_runner_lvl_1.hp = 99.0f;
	Enemy_runner_lvl_1.attack = 40.0f;
	Enemy_runner_lvl_1.defense = 72.0f;
	Enemy_runner_lvl_1.stamina = 81;
	Enemy_runner_lvl_1.speed = log(90.0f);
	Enemy_runner_lvl_1.name = "Runner Lvl 1";
	Enemy_runner_lvl_1.id = 3;

	//Enemy electromaster lvl 1
	Enemy_electromaster_lvl_1.hp = 108.0f;
	Enemy_electromaster_lvl_1.attack = 45.0f;
	Enemy_electromaster_lvl_1.defense = 63.0f;
	Enemy_electromaster_lvl_1.stamina = 99;
	Enemy_electromaster_lvl_1.speed = log(54.0f);
	Enemy_electromaster_lvl_1.name = "Electromaster Lvl 1";
	Enemy_electromaster_lvl_1.id = 4;

	//Bermudi lvl 5
	Bermudi_lvl_5.hp = 150.0f;
	Bermudi_lvl_5.attack = 60.0f;
	Bermudi_lvl_5.defense = 122.0f;
	Bermudi_lvl_5.stamina = 100;
	Bermudi_lvl_5.speed = log(106.0f);
	Bermudi_lvl_5.name = "Bermudi Lvl 5";
	Bermudi_lvl_5.id = 5;

	//Laena lvl 5
	Laena_lvl_5.hp = 150.0f;
	Laena_lvl_5.attack = 60.0f;
	Laena_lvl_5.defense = 99.0f;
	Laena_lvl_5.stamina = 140;
	Laena_lvl_5.speed = log(67.0f);
	Laena_lvl_5.name = "Laena Lvl 5";
	Laena_lvl_5.id = 6;

	//Joseph lvl 5
	Joseph_lvl_5.hp = 110.0f;
	Joseph_lvl_5.attack = 66.0f;
	Joseph_lvl_5.defense = 99.0f;
	Joseph_lvl_5.stamina = 100;
	Joseph_lvl_5.speed = log(137.0f);
	Joseph_lvl_5.name = "Joseph Lvl 5";
	Joseph_lvl_5.id = 7;

	//Enemy teleporter lvl 5
	Enemy_teleporter_lvl_5.hp = 135.0f;
	Enemy_teleporter_lvl_5.attack = 52.0f;
	Enemy_teleporter_lvl_5.defense = 109.0f;
	Enemy_teleporter_lvl_5.stamina = 90;
	Enemy_teleporter_lvl_5.speed = log(95.0f);
	Enemy_teleporter_lvl_5.name = "Teleporter Lvl 5";
	Enemy_teleporter_lvl_5.id = 5;

	//Enemy psychic lvl 5
	Enemy_psychic_lvl_5.hp = 135.0f;
	Enemy_psychic_lvl_5.attack = 52.0f;
	Enemy_psychic_lvl_5.defense = 93.0f;
	Enemy_psychic_lvl_5.stamina = 126;
	Enemy_psychic_lvl_5.speed = log(59.0f);
	Enemy_psychic_lvl_5.name = "Psychic Lvl 5";
	Enemy_psychic_lvl_5.id = 6;

	//Enemy runner lvl 5
	Enemy_runner_lvl_5.hp = 144.0f;
	Enemy_runner_lvl_5.attack = 58.0f;
	Enemy_runner_lvl_5.defense = 88.0f;
	Enemy_runner_lvl_5.stamina = 90;
	Enemy_runner_lvl_5.speed = log(123.0f);
	Enemy_runner_lvl_5.name = "Runner Lvl 5";
	Enemy_runner_lvl_5.id = 7;

	//Enemy electromaster lvl 5
	Enemy_electromaster_lvl_5.hp = 153.0f;
	Enemy_electromaster_lvl_5.attack = 64.0f;
	Enemy_electromaster_lvl_5.defense = 79.0f;
	Enemy_electromaster_lvl_5.stamina = 108;
	Enemy_electromaster_lvl_5.speed = log(71.0f);
	Enemy_electromaster_lvl_5.name = "Electromaster Lvl 5";
	Enemy_electromaster_lvl_5.id = 8;

	//Bermudi lvl 10
	Bermudi_lvl_10.hp = 210.0f;
	Bermudi_lvl_10.attack = 81.0f;
	Bermudi_lvl_10.defense = 156.0f;
	Bermudi_lvl_10.stamina = 110;
	Bermudi_lvl_10.speed = log(135.0f);
	Bermudi_lvl_10.name = "Bermudi Lvl 10";
	Bermudi_lvl_10.id = 9;

	//Laena lvl 10
	Laena_lvl_10.hp = 210.0f;
	Laena_lvl_10.attack = 81.0f;
	Laena_lvl_10.defense = 124.0f;
	Laena_lvl_10.stamina = 160;
	Laena_lvl_10.speed = log(87.0f);
	Laena_lvl_10.name = "Laena Lvl 10";
	Laena_lvl_10.id = 10;

	//Joseph lvl 10
	Joseph_lvl_10.hp = 190.0f;
	Joseph_lvl_10.attack = 89.0f;
	Joseph_lvl_10.defense = 120.0f;
	Joseph_lvl_10.stamina = 110;
	Joseph_lvl_10.speed = log(181.0f);
	Joseph_lvl_10.name = "Joseph Lvl 10";
	Joseph_lvl_10.id = 11;

	//Enemy teleporter lvl 10
	Enemy_teleporter_lvl_10.hp = 189.0f;
	Enemy_teleporter_lvl_10.attack = 69.0f;
	Enemy_teleporter_lvl_10.defense = 138.0f;
	Enemy_teleporter_lvl_10.stamina = 99;
	Enemy_teleporter_lvl_10.speed = log(120.0f);
	Enemy_teleporter_lvl_10.name = "Teleporter Lvl 10";
	Enemy_teleporter_lvl_10.id = 9;

	//Enemy psychic lvl 10
	Enemy_psychic_lvl_10.hp = 189.0f;
	Enemy_psychic_lvl_10.attack = 69.0f;
	Enemy_psychic_lvl_10.defense = 115.0f;
	Enemy_psychic_lvl_10.stamina = 144;
	Enemy_psychic_lvl_10.speed = log(76.0f);
	Enemy_psychic_lvl_10.name = "Psychic Lvl 10";
	Enemy_psychic_lvl_10.id = 10;

	//Enemy runner lvl 10
	Enemy_runner_lvl_10.hp = 198.0f;
	Enemy_runner_lvl_10.attack = 87.0f;
	Enemy_runner_lvl_10.defense = 105.0f;
	Enemy_runner_lvl_10.stamina = 99;
	Enemy_runner_lvl_10.speed = log(161.0f);
	Enemy_runner_lvl_10.name = "Runner Lvl 10";
	Enemy_runner_lvl_10.id = 11;

	//Enemy electromaster lvl 10
	Enemy_electromaster_lvl_10.hp = 207.0f;
	Enemy_electromaster_lvl_10.attack = 85.0f;
	Enemy_electromaster_lvl_10.defense = 96.0f;
	Enemy_electromaster_lvl_10.stamina = 117;
	Enemy_electromaster_lvl_10.speed = log(90.0f);
	Enemy_electromaster_lvl_10.name = "Electromaster  Lvl 10";
	Enemy_electromaster_lvl_10.id = 12;

	//Bermudi lvl 15
	Bermudi_lvl_15.hp = 265.0f;
	Bermudi_lvl_15.attack = 97.0f;
	Bermudi_lvl_15.defense = 180.0f;
	Bermudi_lvl_15.stamina = 115;
	Bermudi_lvl_15.speed = log(159.0f);
	Bermudi_lvl_15.name = "Bermudi Lvl 15";
	Bermudi_lvl_15.id = 13;

	//Laena lvl 15
	Laena_lvl_15.hp = 265.0f;
	Laena_lvl_15.attack = 97.0f;
	Laena_lvl_15.defense = 144.0f;
	Laena_lvl_15.stamina = 175;
	Laena_lvl_15.speed = log(102.0f);
	Laena_lvl_15.name = "Laena Lvl 15";
	Laena_lvl_15.id = 14;

	//Joseph lvl 15
	Joseph_lvl_15.hp = 145.0f;
	Joseph_lvl_15.attack = 107.0f;
	Joseph_lvl_15.defense = 136.0f;
	Joseph_lvl_15.stamina = 115;
	Joseph_lvl_15.speed = log(215.0f);
	Joseph_lvl_15.name = "Joseph Lvl 15";
	Joseph_lvl_15.id = 15;

	//Enemy teleporter lvl 15
	Enemy_teleporter_lvl_15.hp = 238.0f;
	Enemy_teleporter_lvl_15.attack = 82.0f;
	Enemy_teleporter_lvl_15.defense = 158.0f;
	Enemy_teleporter_lvl_15.stamina = 103;
	Enemy_teleporter_lvl_15.speed = log(141.0f);
	Enemy_teleporter_lvl_15.name = "Teleporter Lvl 15";
	Enemy_teleporter_lvl_15.id = 13;

	//Enemy psychic lvl 15
	Enemy_psychic_lvl_15.hp = 238.0f;
	Enemy_psychic_lvl_15.attack = 82.0f;
	Enemy_psychic_lvl_15.defense = 133.0f;
	Enemy_psychic_lvl_15.stamina = 157;
	Enemy_psychic_lvl_15.speed = log(88.0f);
	Enemy_psychic_lvl_15.name = "Psychic Lvl 15";
	Enemy_psychic_lvl_15.id = 14;

	//Enemy runner lvl 15
	Enemy_runner_lvl_15.hp = 247.0f;
	Enemy_runner_lvl_15.attack = 102.0f;
	Enemy_runner_lvl_15.defense = 118.0f;
	Enemy_runner_lvl_15.stamina = 103;
	Enemy_runner_lvl_15.speed = log(190.0f);
	Enemy_runner_lvl_15.name = "Runner Lvl 15";
	Enemy_runner_lvl_15.id = 15;

	//Enemy electromaster lvl 15
	Enemy_electromaster_lvl_15.hp = 256.0f;
	Enemy_electromaster_lvl_15.attack = 102.0f;
	Enemy_electromaster_lvl_15.defense = 109.0f;
	Enemy_electromaster_lvl_15.stamina = 121;
	Enemy_electromaster_lvl_15.speed = log(104.0f);
	Enemy_electromaster_lvl_15.name = "Electromaster Lvl 15";
	Enemy_electromaster_lvl_15.id = 16;

	//Chungus
	Chungus.hp = 4000.0f;
	Chungus.attack = 75.0f;
	Chungus.defense = 100.0f;
	Chungus.stamina = 400;
	Chungus.speed = log(50.0f);
	Chungus.name = "Chungus";
	Chungus.id = 17;
}

unsigned int char1Wins = 0;
unsigned int char2Wins = 0;

void fight1v1(character char1, character char2) {
		srand(time(0));
		float char1MaxHP = char1.hp;
		float char2MaxHP = char2.hp;
		int char1MaxStamina = char2.stamina;
		int char2MaxStamina = char2.stamina;
		float char1AttackTurn = 0.0f;
		float char2AttackTurn = 0.0f;
		float damage;
		int randomNumber = 0;
		bool decisionTaken = false;

		while (char1.hp > 0 && char2.hp > 0) {
			while (char1AttackTurn < 100.0f && char2AttackTurn < 100.0f) {
				char1AttackTurn += char1.speed;
				char2AttackTurn += char2.speed;
			}
			if (char1AttackTurn >= 100.0f) {
				char1AttackTurn = 0.0f;
				randomNumber = rand() % 3;

				if (randomNumber == 0 && char1.id != 17) {
					while (decisionTaken == false) {
						randomNumber = rand() % 4;

						switch (randomNumber) {
						case 0:
						{
							if (char1.hp == char1MaxHP) {
								break;
							}
							else
							{
								char1.hp += (char1.hp + ((char1.hp / 100.0f) * 40.0f));
								if (char1.hp > char1MaxHP) {
									char1.hp = char1MaxHP;
								}
								std::cout << char1.name << " has consumed an elixir" << std::endl;
								decisionTaken = true;
								break;
							}
						}
						case 1:
						{
							char1.defense = (char1.defense + ((char1.defense / 100.0f) * 40.0f));
							std::cout << char1.name << " has consumed a vaccine" << std::endl;
							decisionTaken = true;
							break;
						}
						case 2:
						{
							if (char1.stamina == char1MaxStamina) {
								break;
							}
							else
							{
								char1.stamina += (char1.stamina + ((char1.stamina / 100.0f) * 50.0f));
								if (char1.stamina > char1MaxStamina) {
									char1.stamina = char1MaxStamina;
								}
								std::cout << char1.name << " has consumed a soda" << std::endl;
								decisionTaken = true;
								break;
							}
						}
						case 3:
						{
							char1.attack = (char1.attack + ((char1.attack / 100.0f) * 20.0f));
							std::cout << char1.name << " has consumed a pill" << std::endl;
							decisionTaken = true;
							break;
						}
						case 4:
						{
							char1.speed = (char1.speed + ((char1.speed / 100.0f) * 20.0f));
							std::cout << char1.name << " has consumed an adrenaline injection" << std::endl;
							decisionTaken = true;
							break;
						}
						}
					}
					decisionTaken = false;
				}
				else if (randomNumber > 0 || char1.id == 17) {
					while (decisionTaken == false) {
						if (char1.id == 1) {
							randomNumber = rand() % 1;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 20) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 20;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 2) {
							randomNumber = rand() % 1;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((10 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((10 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((10 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 20) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 20;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((25 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((25 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((25 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 3) {
							randomNumber = rand() % 1;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((10 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((10 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((10 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 20) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 20;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((40 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((40 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((40 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 4) {
							randomNumber = rand() % 1;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 25) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 25;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 25;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 25;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 25;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 5) {
							randomNumber = rand() % 2;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 20) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 20;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char1.stamina >= 35) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 35;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((45 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 35;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((45 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 35;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((45 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 35;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 6) {
							randomNumber = rand() % 2;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((10 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((10 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((10 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 20) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 20;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((25 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((25 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((25 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char1.stamina >= 30) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 30;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((40 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 30;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((40 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 30;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((40 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 30;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 7 || char1.id == 11 || char1.id == 15) {
							randomNumber = rand() % 2;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 20) { 
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 20;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((40 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((40 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((40 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char1.stamina >= 35) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 45;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((50 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (quick blade) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 45;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((50 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (quick blade) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 45;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((50 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (quick blade) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 45;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 8 || char1.id == 12 || char1.id == 16) {
							randomNumber = rand() % 2;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 25) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 25;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 25;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 25;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 25;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char1.stamina >= 55) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 55;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((70 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (railgun) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 55;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((70 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (railgun) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 55;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((70 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (railgun) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 55;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 9 || char1.id == 13) {
							randomNumber = rand() % 3;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 20) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 20;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char1.stamina >= 35) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 35;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((45 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 35;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((45 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 35;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((45 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 35;
										decisionTaken = true;
										break;
									}
								}
							}
							case 3:
							{
								if (char1.stamina >= 45) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 45;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((65 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (seismic toss) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 45;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((65 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (seismic toss) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 45;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((65 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (seismic toss) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 45;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 10 || char1.id == 14) {
							randomNumber = rand() % 3;

							switch (randomNumber) {
							case 0:
							{
								if (char2.id == 11 || char2.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char2.name << " dodged the attack" << std::endl;
										char1.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((10 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
										char1.stamina += 10;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char2.id == 12 || char2.id == 16) {
									damage = ((10 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((10 + char1.attack) * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char1.stamina += 10;
									if (char1.stamina > char1MaxStamina) {
										char1.stamina = char1MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char1.stamina >= 20) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 20;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((25 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((25 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((25 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char1.stamina >= 30) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 30;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((40 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 30;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((40 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 30;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((40 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 30;
										decisionTaken = true;
										break;
									}
								}
							}
							case 3:
							{
								if (char1.stamina >= 40) {
									if (char2.id == 11 || char2.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char1.stamina -= 40;
											std::cout << char2.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((60 + char1.attack) * (100 / (100 + char2.defense)));
											char2.hp -= damage;
											std::cout << char1.name << " attacks (upside down) and deals " << damage << " damage" << std::endl;
											char1.stamina -= 40;
											decisionTaken = true;
											break;
										}
									}
									else if (char2.id == 12 || char2.id == 16) {
										damage = ((60 + char1.attack) * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (upside down) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 40;
										if (char1.stamina > char1MaxStamina) {
											char1.stamina = char1MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((60 + char1.attack) * (100 / (100 + char2.defense)));
										char2.hp -= damage;
										std::cout << char1.name << " attacks (upside down) and deals " << damage << " damage" << std::endl;
										char1.stamina -= 40;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char1.id == 17) {
							if (char2.id == 11 || char2.id == 15) {
								randomNumber = rand() % 9;
								if (randomNumber == 0) {
									std::cout << char2.name << " dodged the attack" << std::endl;
									decisionTaken = true;
									break;
								}
								else {
									damage = (char1.attack * (100 / (100 + char2.defense)));
									char2.hp -= damage;
									std::cout << char1.name << " attacks and deals " << damage << " damage" << std::endl;
									decisionTaken = true;
									break;
								}
							}
							else if (char2.id == 12 || char2.id == 16) {
								damage = (char1.attack * (100 / (100 + char2.defense + char2.defense / 100 * 25)));
								char2.hp -= damage;
								std::cout << char1.name << " attacks and deals " << damage << " damage" << std::endl;
								decisionTaken = true;
								break;
							}
							else {
								damage = (char1.attack * (100 / (100 + char2.defense)));
								char2.hp -= damage;
								std::cout << char1.name << " attacks and deals " << damage << " damage" << std::endl;
								decisionTaken = true;
								break;
							}
						}
					}
					decisionTaken = false;
				}
			}
			else if (char2AttackTurn >= 100.0f) {
				char2AttackTurn = 0.0f;
				randomNumber = rand() % 3;

				if (randomNumber == 0 && char2.id != 17) {
					while (decisionTaken == false) {
						randomNumber = rand() % 4;

						switch (randomNumber) {
						case 0:
						{
							if (char2.hp == char2MaxHP) {
								break;
							}
							else
							{
								char2.hp += (char2.hp + ((char2.hp / 100.0f) * 40.0f));
								if (char2.hp > char2MaxHP) {
									char2.hp = char2MaxHP;
								}
								std::cout << char2.name << " has consumed an elixir" << std::endl;
								decisionTaken = true;
								break;
							}
						}
						case 1:
						{
							char2.defense = (char2.defense + ((char2.defense / 100.0f) * 40.0f));
							std::cout << char2.name << " has consumed a vaccine" << std::endl;
							decisionTaken = true;
							break;
						}
						case 2:
						{
							if (char2.stamina == char2MaxStamina) {
								break;
							}
							else
							{
								char2.stamina += (char2.stamina + ((char2.stamina / 100.0f) * 50.0f));
								if (char2.stamina > char2MaxStamina) {
									char2.stamina = char2MaxStamina;
								}
								std::cout << char2.name << " has consumed a soda" << std::endl;
								decisionTaken = true;
								break;
							}
						}
						case 3:
						{
							char2.attack = (char2.attack + ((char2.attack / 100.0f) * 20.0f));
							std::cout << char2.name << " has consumed a pill" << std::endl;
							decisionTaken = true;
							break;
						}
						case 4:
						{
							char2.speed = (char2.speed + ((char2.speed / 100.0f) * 20.0f));
							std::cout << char2.name << " has consumed an adrenaline injection" << std::endl;
							decisionTaken = true;
							break;
						}
						}
					}
					decisionTaken = false;
				}
				else if (randomNumber > 0 || char2.id ==17) {
					while (decisionTaken == false) {
						if (char2.id == 1) {
							randomNumber = rand() % 1;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 20) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 20;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 2) {
							randomNumber = rand() % 1;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((10 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((10 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((10 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 20) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 20;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((25 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((25 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((25 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 3) {
							randomNumber = rand() % 1;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((10 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((10 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((10 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 20) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 20;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((40 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((40 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((40 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 4) {
							randomNumber = rand() % 1;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 25) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 25;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 25;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 25;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 25;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 5) {
							randomNumber = rand() % 2;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 20) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 20;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char2.stamina >= 35) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 35;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((45 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 35;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((45 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 35;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((45 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 35;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 6) {
							randomNumber = rand() % 2;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((10 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((10 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((10 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 20) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 20;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((25 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((25 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((25 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char2.stamina >= 30) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 30;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((40 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 30;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((40 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 30;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((40 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 30;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 7 || char2.id == 11 || char2.id == 15) {
							randomNumber = rand() % 2;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (tackle) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 20) { 
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 20;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((40 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((40 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((40 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (fast crash) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char2.stamina >= 35) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 45;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((50 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (quick blade) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 45;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((50 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (quick blade) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 45;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((50 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (quick blade) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 45;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 8 || char2.id == 12 || char2.id == 16) {
							randomNumber = rand() % 2;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (punch) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 25) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 25;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 25;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 25;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (spark) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 25;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char2.stamina >= 55) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 55;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((70 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (railgun) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 55;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((70 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (railgun) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 55;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((70 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (railgun) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 55;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 9 || char2.id == 13) {
							randomNumber = rand() % 3;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((15 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (kick) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 20) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 20;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((30 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (kick barrage) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char2.stamina >= 35) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 35;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((45 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 35;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((45 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 35;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((45 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (stone rain) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 35;
										decisionTaken = true;
										break;
									}
								}
							}
							case 3:
							{
								if (char2.stamina >= 45) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 45;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((65 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (seismic toss) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 45;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((65 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (seismic toss) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 45;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((65 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (seismic toss) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 45;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 10 || char2.id == 14) {
							randomNumber = rand() % 3;

							switch (randomNumber) {
							case 0:
							{
								if (char1.id == 11 || char1.id == 15) {
									randomNumber = rand() % 9;
									if (randomNumber == 0) {
										std::cout << char1.name << " dodged the attack" << std::endl;
										char2.stamina += 10;
										decisionTaken = true;
										break;
									}
									else {
										damage = ((10 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
										char2.stamina += 10;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
								}
								else if (char1.id == 12 || char1.id == 16) {
									damage = ((10 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
								else {
									damage = ((10 + char2.attack) * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks (slingshot) and deals " << damage << " damage" << std::endl;
									char2.stamina += 10;
									if (char2.stamina > char2MaxStamina) {
										char2.stamina = char2MaxStamina;
									}
									decisionTaken = true;
									break;
								}
							}
							case 1:
							{
								if (char2.stamina >= 20) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 20;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((25 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 20;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((25 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((25 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (ball thrower) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 20;
										decisionTaken = true;
										break;
									}
								}
							}
							case 2:
							{
								if (char2.stamina >= 30) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 30;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((40 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 30;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((40 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 30;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((40 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (stamp rain) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 30;
										decisionTaken = true;
										break;
									}
								}
							}
							case 3:
							{
								if (char2.stamina >= 40) {
									if (char1.id == 11 || char1.id == 15) {
										randomNumber = rand() % 9;
										if (randomNumber == 0) {
											char2.stamina -= 40;
											std::cout << char1.name << " dodged the attack" << std::endl;
											decisionTaken = true;
											break;
										}
										else {
											damage = ((60 + char2.attack) * (100 / (100 + char1.defense)));
											char1.hp -= damage;
											std::cout << char2.name << " attacks (upside down) and deals " << damage << " damage" << std::endl;
											char2.stamina -= 40;
											decisionTaken = true;
											break;
										}
									}
									else if (char1.id == 12 || char1.id == 16) {
										damage = ((60 + char2.attack) * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (upside down) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 40;
										if (char2.stamina > char2MaxStamina) {
											char2.stamina = char2MaxStamina;
										}
										decisionTaken = true;
										break;
									}
									else {
										damage = ((60 + char2.attack) * (100 / (100 + char1.defense)));
										char1.hp -= damage;
										std::cout << char2.name << " attacks (upside down) and deals " << damage << " damage" << std::endl;
										char2.stamina -= 40;
										decisionTaken = true;
										break;
									}
								}
							}
							}
						}
						else if (char2.id == 17) {
							if (char1.id == 11 || char1.id == 15) {
								randomNumber = rand() % 9;
								if (randomNumber == 0) {
									std::cout << char1.name << " dodged the attack" << std::endl;
									decisionTaken = true;
									break;
								}
								else {
									damage = (char2.attack * (100 / (100 + char1.defense)));
									char1.hp -= damage;
									std::cout << char2.name << " attacks and deals " << damage << " damage" << std::endl;
									decisionTaken = true;
									break;
								}
							}
							else if (char1.id == 12 || char1.id == 16) {
								damage = (char2.attack * (100 / (100 + char1.defense + char1.defense / 100 * 25)));
								char1.hp -= damage;
								std::cout << char2.name << " attacks and deals " << damage << " damage" << std::endl;
								decisionTaken = true;
								break;
							}
							else {
								damage = (char2.attack * (100 / (100 + char1.defense)));
								char1.hp -= damage;
								std::cout << char2.name << " attacks and deals " << damage << " damage" << std::endl;
								decisionTaken = true;
								break;
							}
						}
					}
					decisionTaken = false;
				}
			}
			damage = 0;
			std::cout << char1.name << " has " << char1.hp << "HP" << std::endl;
			std::cout << char2.name << " has " << char2.hp << "HP" << std::endl;
			std::cout << std::endl;

			if (char1.hp <= 0) {
				char2Wins++;
				std::cout << char2.name << " has won" << std::endl;
			}
			else if (char2.hp <= 0) {
				char1Wins++;
				std::cout << char1.name << " has won" << std::endl;
			}
		}
}

void chungusFight() {
	srand(time(0));
	int randomNumber = 0;
	bool fightActive = true;
	bool decisionTaken = false;
	float damage = 0;
	float BermudiAttackBar = 0.0f;
	float BermudiMaxHP = Bermudi_lvl_10.hp;
	int BermudiMaxStamina = Bermudi_lvl_10.stamina;
	float LaenaAttackBar = 0.0f;
	float LaenaMaxHP = Laena_lvl_10.hp;
	int LaenaMaxStamina = Laena_lvl_10.stamina;
	float JosephAttackBar = 0.0f;
	float JosephMaxHP = Joseph_lvl_10.hp;
	int JosephMaxStamina = Joseph_lvl_10.stamina;
	float ChungusAttackBar = 0.0f;
	float ChungusMaxHP = Chungus.hp;
	int ChungusMaxStamina = Chungus.stamina;
	

	while (fightActive == true) {
		while (BermudiAttackBar < 100.0f && LaenaAttackBar < 100.0f && JosephAttackBar < 100.0f && ChungusAttackBar < 100.0f) {
			if (Bermudi_lvl_10.hp > 0.0f) {
				BermudiAttackBar += Bermudi_lvl_10.speed;
			}
			if (Laena_lvl_10.hp > 0.0f) {
				LaenaAttackBar += Laena_lvl_10.speed;
			}
			if (Joseph_lvl_10.hp > 0.0f) {
				JosephAttackBar += Joseph_lvl_10.speed;
			}
			if (Chungus.hp > 0.0f) {
				ChungusAttackBar += Chungus.speed;
			}
		}
		if (ChungusAttackBar >= 100.0f) {
			decisionTaken = false;
			ChungusAttackBar = 0.0f;

			while (decisionTaken == false) {
				randomNumber = rand() % 4;
				if (randomNumber == 0 && Chungus.stamina >= 100) {
					damage = ((100 + Chungus.attack) * (100 / (100 + Bermudi_lvl_10.defense)));
					Bermudi_lvl_10.hp -= damage;
					std::cout << "Chungus attacks and deals " << damage << " damage to Bermudi (charge)" << std::endl;

					damage = ((100 + Chungus.attack) * (100 / (100 + Laena_lvl_10.defense)));
					Laena_lvl_10.hp -= damage;
					std::cout << "Chungus attacks and deals " << damage << " damage to Laena (charge)" << std::endl;

					randomNumber = rand() % 9;
					if (randomNumber == 0) {
						std::cout << "Joseph dodged the attack" << std::endl;
					}
					else {
						damage = ((100 + Chungus.attack) * (100 / (100 + Joseph_lvl_10.defense)));
						Joseph_lvl_10.hp -= damage;
						std::cout << "Chungus attacks and deals " << damage << " damage to Joseph (charge)" << std::endl;
					}
					Chungus.stamina -= 100;
					decisionTaken = true;
				}
				else {
					randomNumber = rand() % 2;
					switch (randomNumber) {
					case 0:
					{
						damage = (Chungus.attack * (100 / (100 + Bermudi_lvl_10.defense)));
						Bermudi_lvl_10.hp -= damage;
						std::cout << "Chungus attacks and deals " << damage << " damage to Bermudi" << std::endl;
						decisionTaken = true;
						break;
					}
					case 1:
					{
						damage = (Chungus.attack * (100 / (100 + Laena_lvl_10.defense)));
						Laena_lvl_10.hp -= damage;
						std::cout << "Chungus attacks and deals " << damage << " damage to Laena" << std::endl;
						decisionTaken = true;
						break;
					}
					case 2:
					{
						randomNumber = rand() % 9;
						if (randomNumber == 0) {
							std::cout << "Joseph dodged the attack" << std::endl;
						}
						else {
							damage = (Chungus.attack * (100 / (100 + Joseph_lvl_10.defense)));
							Joseph_lvl_10.hp -= damage;
							std::cout << "Chungus attacks and deals " << damage << " damage to Joseph" << std::endl;
						}
						decisionTaken = true;
						break;
					}
					}
					Chungus.stamina += 10;
					if (Chungus.stamina > ChungusMaxStamina) {
						Chungus.stamina = ChungusMaxStamina;
					}
				}
			}
		}
		else if (BermudiAttackBar >= 100.0f){
			decisionTaken = false;
			BermudiAttackBar = 0.0f;

			while (decisionTaken == false) {
				randomNumber = rand() % 4;
				if (randomNumber == 0) {
					randomNumber = rand() % 4;
					switch (randomNumber) {
					case 0:
					{
						if (Bermudi_lvl_10.hp == BermudiMaxHP) {
							break;
						}
						else
						{
							Bermudi_lvl_10.hp += (Bermudi_lvl_10.hp + ((Bermudi_lvl_10.hp / 100.0f) * 40.0f));
							if (Bermudi_lvl_10.hp > BermudiMaxHP) {
								Bermudi_lvl_10.hp = BermudiMaxHP;
							}
							std::cout << Bermudi_lvl_10.name << " has consumed an elixir" << std::endl;
							decisionTaken = true;
							break;
						}
					}
					case 1:
					{
						Bermudi_lvl_10.defense = (Bermudi_lvl_10.defense + ((Bermudi_lvl_10.defense / 100.0f) * 40.0f));
						std::cout << Bermudi_lvl_10.name << " has consumed a vaccine" << std::endl;
						decisionTaken = true;
						break;
					}
					case 2:
					{
						if (Bermudi_lvl_10.stamina == BermudiMaxStamina) {
							break;
						}
						else
						{
							Bermudi_lvl_10.stamina += (Bermudi_lvl_10.stamina + ((Bermudi_lvl_10.stamina / 100.0f) * 50.0f));
							if (Bermudi_lvl_10.stamina > BermudiMaxStamina) {
								Bermudi_lvl_10.stamina = BermudiMaxStamina;
							}
							std::cout << Bermudi_lvl_10.name << " has consumed a soda" << std::endl;
							decisionTaken = true;
							break;
						}
					}
					case 3:
					{
						Bermudi_lvl_10.attack = (Bermudi_lvl_10.attack + ((Bermudi_lvl_10.attack / 100.0f) * 20.0f));
						std::cout << Bermudi_lvl_10.name << " has consumed a pill" << std::endl;
						decisionTaken = true;
						break;
					}
					case 4:
					{
						Bermudi_lvl_10.speed = (Bermudi_lvl_10.speed + ((Bermudi_lvl_10.speed / 100.0f) * 20.0f));
						std::cout << Bermudi_lvl_10.name << " has consumed an adrenaline injection" << std::endl;
						decisionTaken = true;
						break;
					}
					default: break;
					}
				}
				else {
					randomNumber = rand() % 3;
					switch (randomNumber) {
					case 0:
					{
						damage = ((15 + Bermudi_lvl_10.attack) * (100 / (100 + Chungus.defense)));
						Chungus.hp -= damage;
						std::cout << "Bermudi attacks and deals " << damage << " damage to Chungus (Kick)" << std::endl;
						Bermudi_lvl_10.stamina += 10;
						if (Bermudi_lvl_10.stamina > BermudiMaxStamina) {
							Bermudi_lvl_10.stamina = BermudiMaxStamina;
						}
						decisionTaken = true;
						break;
					}
					case 1:
					{
						if (Bermudi_lvl_10.stamina >= 20) {
							damage = ((30 + Bermudi_lvl_10.attack) * (100 / (100 + Chungus.defense)));
							Chungus.hp -= damage;
							std::cout << "Bermudi attacks and deals " << damage << " damage to Chungus (Kick Barrage)" << std::endl;
							Bermudi_lvl_10.stamina -= 20;
							decisionTaken = true;
							break;
						}
						else {
							break;
						}
					}
					case 2:
					{
						if (Bermudi_lvl_10.stamina >= 35) {
							damage = ((45 + Bermudi_lvl_10.attack) * (100 / (100 + Chungus.defense)));
							Chungus.hp -= damage;
							std::cout << "Bermudi attacks and deals " << damage << " damage to Chungus (Stone Rain)" << std::endl;
							Bermudi_lvl_10.stamina -= 35;
							decisionTaken = true;
							break;
						}
						else {
							break;
						}
					}
					case 3:
					{
						if (Bermudi_lvl_10.stamina >= 45) {
							damage = ((65 + Bermudi_lvl_10.attack) * (100 / (100 + Chungus.defense)));
							Chungus.hp -= damage;
							std::cout << "Bermudi attacks and deals " << damage << " damage to Chungus (Seismic Toss)" << std::endl;
							Bermudi_lvl_10.stamina -= 45;
							decisionTaken = true;
							break;
						}
						else {
							break;
						}
					}
					default: break;
					}
				}
			}
		}
		else if (LaenaAttackBar >= 100.0f) {
			decisionTaken = false;
			LaenaAttackBar = 0.0f;
			while (decisionTaken == false) {
				randomNumber = rand() % 4;
				if (randomNumber == 0) {
					randomNumber = rand() % 4;
					switch (randomNumber) {
					case 0:
					{
						if (Laena_lvl_10.hp == LaenaMaxHP) {
							break;
						}
						else
						{
							Laena_lvl_10.hp += (Laena_lvl_10.hp + ((Laena_lvl_10.hp / 100.0f) * 40.0f));
							if (Laena_lvl_10.hp > LaenaMaxHP) {
								Laena_lvl_10.hp = LaenaMaxHP;
							}
							std::cout << Laena_lvl_10.name << " has consumed an elixir" << std::endl;
							decisionTaken = true;
							break;
						}
					}
					case 1:
					{
						Laena_lvl_10.defense = (Laena_lvl_10.defense + ((Laena_lvl_10.defense / 100.0f) * 40.0f));
						std::cout << Laena_lvl_10.name << " has consumed a vaccine" << std::endl;
						decisionTaken = true;
						break;
					}
					case 2:
					{
						if (Laena_lvl_10.stamina == LaenaMaxStamina) {
							break;
						}
						else
						{
							Laena_lvl_10.stamina += (Laena_lvl_10.stamina + ((Laena_lvl_10.stamina / 100.0f) * 50.0f));
							if (Laena_lvl_10.stamina > LaenaMaxStamina) {
								Laena_lvl_10.stamina = LaenaMaxStamina;
							}
							std::cout << Laena_lvl_10.name << " has consumed a soda" << std::endl;
							decisionTaken = true;
							break;
						}
					}
					case 3:
					{
						Laena_lvl_10.attack = (Laena_lvl_10.attack + ((Laena_lvl_10.attack / 100.0f) * 20.0f));
						std::cout << Laena_lvl_10.name << " has consumed a pill" << std::endl;
						decisionTaken = true;
						break;
					}
					case 4:
					{
						Laena_lvl_10.speed = (Laena_lvl_10.speed + ((Laena_lvl_10.speed / 100.0f) * 20.0f));
						std::cout << Laena_lvl_10.name << " has consumed an adrenaline injection" << std::endl;
						decisionTaken = true;
						break;
					}
					default: break;
					}
				}
				else {
					randomNumber = rand() % 3;
					switch (randomNumber) {
					case 0:
					{
						damage = ((10 + Laena_lvl_10.attack) * (100 / (100 + Chungus.defense)));
						Chungus.hp -= damage;
						std::cout << "Laena attacks and deals " << damage << " damage to Chungus (Slingshot)" << std::endl;
						Laena_lvl_10.stamina += 10;
						if (Laena_lvl_10.stamina > LaenaMaxStamina) {
							Laena_lvl_10.stamina = LaenaMaxStamina;
						}
						decisionTaken = true;
						break;
					}
					case 1:
					{
						if (Laena_lvl_10.stamina >= 20) {
							damage = ((25 + Laena_lvl_10.attack) * (100 / (100 + Chungus.defense)));
							Chungus.hp -= damage;
							std::cout << "Laena attacks and deals " << damage << " damage to Chungus (Ball Thrower)" << std::endl;
							Laena_lvl_10.stamina -= 20;
							decisionTaken = true;
							break;
						}
						else {
							break;
						}
					}
					case 2:
					{
						if (Laena_lvl_10.stamina >= 30) {
							damage = ((40 + Laena_lvl_10.attack) * (100 / (100 + Chungus.defense)));
							Chungus.hp -= damage;
							std::cout << "Laena attacks and deals " << damage << " damage to Chungus (Stamp Rain)" << std::endl;
							Laena_lvl_10.stamina -= 30;
							decisionTaken = true;
							break;
						}
						else {
							break;
						}
					}
					case 3:
					{
						if (Laena_lvl_10.stamina >= 40) {
							damage = ((60 + Laena_lvl_10.attack) * (100 / (100 + Chungus.defense)));
							Chungus.hp -= damage;
							std::cout << "Laena attacks and deals " << damage << " damage to Chungus (Upside Down)" << std::endl;
							Laena_lvl_10.stamina -= 40;
							decisionTaken = true;
							break;
						}
						else {
							break;
						}
					}
					default: break;
					}
				}
			}
		}
		else if (JosephAttackBar >= 100.0f)  {
			decisionTaken = false;
			JosephAttackBar = 0.0f;
			while (decisionTaken == false) {
				randomNumber = rand() % 4;
				if (randomNumber == 0) {
					randomNumber = rand() % 4;
					switch (randomNumber) {
					case 0:
					{
						if (Joseph_lvl_10.hp == JosephMaxHP) {
							break;
						}
						else
						{
							Joseph_lvl_10.hp += (Joseph_lvl_10.hp + ((Joseph_lvl_10.hp / 100.0f) * 40.0f));
							if (Joseph_lvl_10.hp > JosephMaxHP) {
								Joseph_lvl_10.hp = JosephMaxHP;
							}
							std::cout << Joseph_lvl_10.name << " has consumed an elixir" << std::endl;
							decisionTaken = true;
							break;
						}
					}
					case 1:
					{
						Joseph_lvl_10.defense = (Joseph_lvl_10.defense + ((Joseph_lvl_10.defense / 100.0f) * 40.0f));
						std::cout << Joseph_lvl_10.name << " has consumed a vaccine" << std::endl;
						decisionTaken = true;
						break;
					}
					case 2:
					{
						if (Joseph_lvl_10.stamina == JosephMaxStamina) {
							break;
						}
						else
						{
							Joseph_lvl_10.stamina += (Joseph_lvl_10.stamina + ((Joseph_lvl_10.stamina / 100.0f) * 50.0f));
							if (Joseph_lvl_10.stamina > JosephMaxStamina) {
								Joseph_lvl_10.stamina = JosephMaxStamina;
							}
							std::cout << Joseph_lvl_10.name << " has consumed a soda" << std::endl;
							decisionTaken = true;
							break;
						}
					}
					case 3:
					{
						Joseph_lvl_10.attack = (Joseph_lvl_10.attack + ((Joseph_lvl_10.attack / 100.0f) * 20.0f));
						std::cout << Joseph_lvl_10.name << " has consumed a pill" << std::endl;
						decisionTaken = true;
						break;
					}
					case 4:
					{
						Joseph_lvl_10.speed = (Joseph_lvl_10.speed + ((Joseph_lvl_10.speed / 100.0f) * 20.0f));
						std::cout << Joseph_lvl_10.name << " has consumed an adrenaline injection" << std::endl;
						decisionTaken = true;
						break;
					}
					default: break;
					}
				}
				else {
					randomNumber = rand() % 2;
					switch (randomNumber) {
					case 0:
					{
						damage = ((15 + Joseph_lvl_10.attack) * (100 / (100 + Chungus.defense)));
						Chungus.hp -= damage;
						std::cout << "Joseph attacks and deals " << damage << " damage to Chungus (Tackle)" << std::endl;
						Joseph_lvl_10.stamina += 10;
						if (Joseph_lvl_10.stamina > JosephMaxStamina) {
							Joseph_lvl_10.stamina = JosephMaxStamina;
						}
						decisionTaken = true;
						break;
					}
					case 1:
					{
						if (Joseph_lvl_10.stamina >= 20) {
							damage = ((40 + Joseph_lvl_10.attack) * (100 / (100 + Chungus.defense)));
							Chungus.hp -= damage;
							std::cout << "Joseph attacks and deals " << damage << " damage to Chungus (Fast Crash)" << std::endl;
							Joseph_lvl_10.stamina -= 20;
							decisionTaken = true;
							break;
						}
						else {
							break;
						}
					}
					case 2:
					{
						if (Joseph_lvl_10.stamina >= 45) {
							damage = ((50 + Joseph_lvl_10.attack) * (100 / (100 + Chungus.defense)));
							Chungus.hp -= damage;
							std::cout << "Joseph attacks and deals " << damage << " damage to Chungus (Quick Blade)" << std::endl;
							Joseph_lvl_10.stamina -= 30;
							decisionTaken = true;
							break;
						}
						else {
							break;
						}
					}
					default: break;
					}
				}
			}
		}

		std::cout << "Bermudi HP: " << Bermudi_lvl_10.hp << std::endl;
		std::cout << "Laena HP: " << Laena_lvl_10.hp << std::endl;
		std::cout << "Joseph HP: " << Joseph_lvl_10.hp << std::endl;
		std::cout << "Chungus HP: " << Chungus.hp << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		if (Chungus.hp <= 0.0f)
		{
			char1Wins++;
			fightActive = false;
		}
		else if (Bermudi_lvl_10.hp <= 0.0f && Laena_lvl_10.hp <= 0.0f && Joseph_lvl_10.hp <= 0.0f) {
			char2Wins++;
			fightActive = false;
		}
	}

}

int main() {
	for (int i = 0; i < 100; i++)
	{
		reset_parameters();
		fight1v1(Joseph_lvl_10, Enemy_psychic_lvl_10);
		//chungusFight();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "WINS" << std::endl;
	std::cout << "First character has won " << char1Wins << " times" << std::endl;
	std::cout << "Second character has won " << char2Wins << " times" << std::endl;

	system("pause");
}