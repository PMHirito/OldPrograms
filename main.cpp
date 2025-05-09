#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <Windows.h>
using namespace std;

int main()
{
	default_random_engine randomGenerator(time(NULL));
	uniform_int_distribution <int> basicATK(10, 15); // Tackle Scratch
	uniform_int_distribution <int> gust(15, 20);
	uniform_int_distribution <int> strongATK(20, 25); //Ember WaterGun VineWhip
	uniform_int_distribution <int> superATK(25, 30); //FlameThrower RazerLeaf Bubble ThunderBolt RockSlide
	uniform_int_distribution <int> psychic(35, 50);
	uniform_int_distribution <int> ultraATK(55, 60); // FireBlast SolarBeam HydroPump		
	uniform_int_distribution <int> pikAtk(1, 4);
	uniform_int_distribution <int> crit(0, 10);

	int compAtk = 0;
	short int compDamage = 0;
	int myAttack = 0;
	short int myLevel = 5;
	short int myStarter = 0;
	short int critAtk = 0;
	short int myHP = 50;
	string playerName;
	string pokeName;
	//Attacks
	string atkTackle = "Tackle";
	string atkScratch = "Scratch";

	string atkGust = "Gust";

	string atkEmber = "Ember";
	string atkWater = "Water Gun";
	string atkVine = "Vine Whip";

	string atkFlame = "Flamethrower";
	string atkLeaf = "Razer Leaf";
	string atkBub = "Bubble";
	string atkThunder = "Thunder Bolt";
	string atkRock = "Rock Slide";

	string atkPsyc = "Psychic";

	string atkBlast = "Fire Blast";
	string atkBeam = "Solar Beam";
	string atkHydro = "Hydro Pump";

	string atkShake = "Shakes in fear";
	string atkBoom = "Blows himself up";

	short int myType;
	string myATK1;
	short int myEffect1;
	string myATK2;
	short int myEffect2;
	string myATK3;
	short int myEffect3;
	string myATK4;
	short int myEffect4;

	//Enemy stats
	string badGuyName;
	short int badType;
	short int badHP;
	string badAtk1;
	short int badEffect1;
	string badAtk2;
	short int badEffect2;
	string badAtk3;
	short int badEffect3;
	string badAtk4;
	short int badEffect4;
	

	//Welcome
	cout << "Welcome to the world of Pokemon!\n";
	Sleep(2000);
	cout << "Please enter your name: ";
	//Player's Name
	cin >> playerName;
	cout << "\nIt's nice to meet you, " << playerName << ".";
	Sleep(2000);
	//Pick Pokemon
	cout << "\n\nWhich Pokemon would you like to have?\n";
	Sleep(2000);
	cout << "1: Bulbasaur";
	Sleep(500);
	cout << "\n2: Charmander";
	Sleep(500);
	cout << "\n3: Squirtle\n";
	Sleep(500);
	//Output players Pokemon
	while (myStarter == 0) {
		cout << "\nPick the number of the Pokemon you want: ";
		cin >> myStarter;
		Sleep(1000);
		if (myStarter == 1) {
			pokeName = "Bulbasaur";
			myType = 1;
			myATK1 = "Tackle";
			myEffect1 = 0;
			myATK2 = "Vine Whip";
			myEffect2 = 3;
			myATK3 = "Razer Leaf";
			myEffect3 = 3;
			myATK4 = "Solar Beam";
			myEffect4 = 3;
		}
		if (myStarter == 2) {
			pokeName = "Charmander";
			myType = 2;
			myATK1 = "Scratch";
			myEffect1 = 0;
			myATK2 = "Ember";
			myEffect2 = 1;
			myATK3 = "Flamethrower";
			myEffect3 = 1;
			myATK4 = "Fire Blast";
			myEffect4 = 1;
		}
		if (myStarter == 3) {
			pokeName = "Squirtle";
			myType = 3;
			myATK1 = "Tackle";
			myEffect1 = 0;
			myATK2 = "Water Gun";
			myEffect2 = 2;
			myATK3 = "Bubble";
			myEffect3 = 2;
			myATK4 = "Hydro Pump";
			myEffect4 = 2;
		}
		if (myStarter == 1 || myStarter == 2 || myStarter == 3) {
			cout << "Congratulations! You now own your very own " << pokeName << "!\n";
			Sleep(2000);
			cout << pokeName << " is level " << myLevel << " and has " << myHP << " hit points.\nAt the moment " << pokeName << " only knows the attack " << myATK1 << ".\n";
		}
		if (myStarter >= 4 || myStarter <= 0) {
			myStarter = 0;
			cout << "Invalid choice...\n";
		}
	}
	Sleep(2000);

	short int myPick = 0;//which pokemon to fight
	short int atkPick = 0;//for the battle phase
	short int points = 0;//needs to be 1 to win the game
	short int xpPoints = 0;//changes the level of myLevel
//Need 1 point to finish the game --- Mew is worth 1
	while (points == 0 && myHP > 0) {
		//Pick one to fight battle
		while (myPick == 0) {
			cout << "\nWhich Pokemon would you like to battle?\n";
			Sleep(500);	cout << "1. Lv 5 Chiaotzu\n";
			Sleep(500); cout << "2. Lv 6 Pidgey\n";
			Sleep(500); cout << "3. Lv 7 Bulbasaur\n";
			Sleep(500); cout << "4. Lv 7 Charmander\n";
			Sleep(500);	cout << "5. Lv 7 Squirtle\n";
			Sleep(500); cout << "6. Lv 10 Mew\n";
			Sleep(500);
			if (xpPoints == 100) {
				myLevel = 6;
			}
			if (xpPoints == 200) {
				myLevel = 7;
			}
			if (xpPoints == 300) {
				myLevel = 8;
			}
			if (myLevel == 5) {
				myHP = 50;
			}
			if (myLevel == 6) {
				myHP = 70;
			}
			if (myLevel == 7) {
				myHP = 100;
			}
			if (myLevel == 8) {
				myHP = 200;
			}
			cout << "Your " << pokeName << " is level " << myLevel << ".";
			cout << "\nPick the number of the Pokemon you want to battle: ";
			cin >> myPick;
			Sleep(1500);
//This is the battle with Chiaotzu --------------------------------------------------------------------------------------------------------------------------
			if (myPick == 1) {
				badGuyName = "Chiaotzu";
				badHP = 30;
				badAtk1 = "Shakes in fear";
				badAtk2 = "Shakes in fear";
				badAtk3 = "Shakes in fear";
				badAtk4 = "Shakes in fear";
				cout << "\nThe battle with a level 5 Chiaotzu has begun!\n";
				badHP = 25;
				Sleep(1500);
				cout << "Go " << pokeName << "!\n";
				while (myHP > 0 && badHP > 0) {
					Sleep(1500);
					cout << endl << pokeName << " has " << myHP << "hp and Chiaotzu has " << badHP << "hp.";
					Sleep(1500);
					cout << endl << endl << pokeName << "'s attacks are: ";
			//Level 5-----------------------------Chiaotzu
					if (myLevel == 5) {
						cout << "\n1. " << myATK1 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack*2;
							}
							cout << myATK1 << " did ";
							cout << myAttack << " damage to Chiaotzu!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick >= 2 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << "\nChiaotzu has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 100 experience points!\n";Sleep(1500);
							xpPoints += 100;
							myPick = 0;
						}
					}
			//Level 6-----------------------------Chiaotzu
					if (myLevel == 6) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack*2;
							}
							cout << myATK1 << " did ";							
							cout << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack*2;
							}
							cout << myATK2 << " did ";							
							cout << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick >= 3 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << "\nChiaotzu has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 0 experience points!\n";Sleep(1500);
							myPick = 0;
						}
					}
			//Level 7-----------------------------Chiaotzu
					if (myLevel == 7) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);

						if (atkPick == 1) {
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							cout << myATK1 << " did ";
							myAttack = basicATK(randomGenerator);
							cout << myAttack << " damage to Chiaotzu!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick == 2) {
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							cout << myATK2 << " did ";
							myAttack = strongATK(randomGenerator);
							cout << myAttack << " damage to Chiaotzu!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick == 3) {
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							cout << myATK3 << " did ";
							myAttack = superATK(randomGenerator);
							cout << myAttack << " damage to Chiaotzu!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick >= 4 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << "\nChiaotzu has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 0 experience points!\n";Sleep(1500);
							myPick = 0;
						}
					}
			//Level 8-----------------------------Chiaotzu
					if (myLevel >= 8) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3;
						cout << "\n4. " << myATK4 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							cout << myATK1 << " did ";
							myAttack = basicATK(randomGenerator);
							cout << myAttack << " damage to Chiaotzu!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick == 2) {
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							cout << myATK2 << " did ";
							myAttack = strongATK(randomGenerator);
							cout << myAttack << " damage to Chiaotzu!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick == 3) {
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							cout << myATK3 << " did ";
							myAttack = superATK(randomGenerator);
							cout << myAttack << " damage to Chiaotzu!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick == 4) {
							cout << endl << pokeName << " used " << myATK4 << "!\n"; Sleep(1500);
							cout << myATK4 << " did ";
							myAttack = ultraATK(randomGenerator);
							cout << myAttack << " damage to Chiaotzu!\n"; Sleep(1500);
							badHP -= myAttack;
							compAtk = pikAtk(randomGenerator);
							if (badHP > 0) {
								if (compAtk == 1 || compAtk == 2 || compAtk == 3) {
									cout << "Chiaotzu is shaking in fear...." << endl; Sleep(1500);
								}
								if (compAtk == 4) {
									cout << "Chiaotzu blew himself up...." << endl; Sleep(1500);
									badHP = 0;
								}
							}
						}
						if (atkPick >= 5 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << "\nChiaotzu has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 0 experience points!\n";Sleep(1500);
							myPick = 0;
						}
					}
					if (badHP == 0) {
						myPick = 0;
					}
				}
			}




//This is the battle with Pidgey -------------------------------------------------------------------------------------------------------------------------------------------
			if (myPick == 2) {
				badGuyName = "Pidgey";
				badType = 10;
				badHP = 40;
				badAtk1 = "Tackle";
				badEffect1 = 0;
				badAtk2 = "Tackle";
				badEffect2 = 0;
				badAtk3 = "Tackle";
				badEffect3 = 0;
				badAtk4 = "Gust";
				badEffect4 = 1;
				cout << "\nThe battle with a level 6 " << badGuyName << " has begun!\n";
				while (myHP > 0 && badHP > 0) {
					Sleep(1500);
					cout << endl << pokeName << " has " << myHP << "hp and " << badGuyName << " has " << badHP << "hp.";
					Sleep(1500);
					cout << endl << endl << pokeName << "'s attacks are: ";
			//Level 5 --------------Pidgey------------------------------
					if (myLevel == 5) {
						Sleep(1500);
						cout << "\n1. " << myATK1 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = basicATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = gust(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}						
						if (atkPick >= 2 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 200 experience points!\n";Sleep(1500);
							xpPoints += 200;
							myPick = 0;
						}
					}
			//Level 6 --------------Pidgey------------------------------
					if (myLevel == 6) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = basicATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = gust(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = basicATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = gust(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}						
						if (atkPick >= 3 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 100 experience points!\n";Sleep(1500);
							xpPoints += 100;
							myPick = 0;
						}
					}
		//Level 7 --------------Pidgey------------------------------
				if (myLevel == 7) {
					Sleep(1500);
					cout << "\n1. " << myATK1;
					cout << "\n2. " << myATK2;
					cout << "\n3. " << myATK3 << endl;
					cout << "Pick the attack " << pokeName << " will use: ";
					cin >> atkPick; Sleep(1500);
					if (atkPick == 1) {
						myAttack = basicATK(randomGenerator);
						critAtk = crit(randomGenerator);
						cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
						if (myEffect1 == badType) {
							cout << "It's super effective!!\n";
							myAttack = myAttack * 2;
						}
						if (critAtk == 1) {
							cout << "Critical hit! ";
							myAttack = myAttack * 2;
						}
						cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
						badHP -= myAttack;
						if (badHP > 0) {
							compAtk = pikAtk(randomGenerator);
							critAtk = crit(randomGenerator);
							if (compAtk == 1) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
								if (badEffect1 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 2) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
								if (badEffect2 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 3) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
								if (badEffect3 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = basicATK(randomGenerator);
									compDamage = compDamage * 2;
								}
								cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 4) {
								compDamage = gust(randomGenerator);
								cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
								if (badEffect4 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
						}
					}
					if (atkPick == 2) {
						myAttack = strongATK(randomGenerator);
						critAtk = crit(randomGenerator);
						cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
						if (myStarter == 1) {
							cout << "It's not very effective!\n";
							myAttack = myAttack / 2;
						}
						if (myEffect2 == badType) {
							cout << "It's super effective!!\n";
							myAttack = myAttack * 2;
						}
						if (critAtk == 1) {
							cout << "Critical hit! ";
							myAttack = myAttack * 2;
						}
						cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
						badHP -= myAttack;
						if (badHP > 0) {
							compAtk = pikAtk(randomGenerator);
							critAtk = crit(randomGenerator);
							if (compAtk == 1) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
								if (badEffect1 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 2) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
								if (badEffect2 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 3) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
								if (badEffect3 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = basicATK(randomGenerator);
									compDamage = compDamage * 2;
								}
								cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 4) {
								compDamage = gust(randomGenerator);
								cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
								if (badEffect4 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
						}
					}
					if (atkPick == 3) {
						myAttack = superATK(randomGenerator);
						critAtk = crit(randomGenerator);
						cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
						if (myStarter == 1) {
							cout << "It's not very effective!\n";
							myAttack = myAttack / 2;
						}
						if (myEffect3 == badType) {
							cout << "It's super effective!!\n";
							myAttack = myAttack * 2;
						}
						if (critAtk == 1) {
							cout << "Critical hit! ";
							myAttack = myAttack * 2;
						}
						cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
						badHP -= myAttack;
						if (badHP > 0) {
							compAtk = pikAtk(randomGenerator);
							critAtk = crit(randomGenerator);
							if (compAtk == 1) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
								if (badEffect1 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 2) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
								if (badEffect2 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 3) {
								compDamage = basicATK(randomGenerator);
								cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
								if (badEffect3 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = basicATK(randomGenerator);
									compDamage = compDamage * 2;
								}
								cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
							if (compAtk == 4) {
								compDamage = gust(randomGenerator);
								cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
								if (badEffect4 == myType) {
									cout << "It's super effective!!\n";
									compDamage = compDamage * 2;
								}
								if (critAtk == 1) {
									cout << "Critical hit! ";
									compDamage = compDamage * 2;
								}
								cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
								myHP -= compDamage;
							}
						}
					}					
					if (atkPick >= 4 || atkPick <= 0) {
						cout << "\nThat isn't even an attack. Try again.\n";
					}
					if (badHP <= 0) {
						cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
						cout << pokeName << " gained 0 experience points!\n";Sleep(1500);
						myPick = 0;
					}
				}
			//Level 8-----------------------------Pidgey
					if (myLevel >= 8) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3;
						cout << "\n4. " << myATK4 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) { 
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = basicATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = gust(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = basicATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = gust(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = basicATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = gust(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 4) {
							myAttack = ultraATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK4 << "!\n"; Sleep(1500);
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect4 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK4 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = basicATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = gust(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 5 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 0 experience points!\n";Sleep(1500);
							myPick = 0;
						}
					}
				}				
			}




			//This is the battle with Bulbasaur -------------------------------------------------------
			if (myPick == 3) {
				badGuyName = "Bulbasaur";
				badType = 1;
				badHP = 70;
				badAtk1 = "Tackle";
				badEffect1 = 0;
				badAtk2 = "Tackle";
				badEffect2 = 0;
				badAtk3 = "Vine Whip";
				badEffect3 = 3;
				badAtk4 = "Razer Leaf";
				badEffect4 = 3;
				cout << "\nThe battle with a level 7 " << badGuyName << " has begun!\n";
				while (myHP > 0 && badHP > 0) {
					Sleep(1500);
					cout << endl << pokeName << " has " << myHP << "hp and " << badGuyName << " has " << badHP << "hp.";
					Sleep(1500);
					cout << endl << endl << pokeName << "'s attacks are: ";
					//Level 5 --------------Bulbasaur------------------------------
					if (myLevel == 5) {
						Sleep(1500);
						cout << "\n1. " << myATK1 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 2 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 300 experience points!\n";Sleep(1500);
							xpPoints += 300;
							myPick = 0;
						}
					}
					//Level 6 --------------Bulbasaur------------------------------
					if (myLevel == 6) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 4;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 3 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 200 experience points!\n";Sleep(1500);
							xpPoints += 200;
							myPick = 0;
						}
					}
					//Level 7 --------------Bulbasaur------------------------------
					if (myLevel == 7) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 4;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 4;
							}
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 4 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 100 experience points!\n";Sleep(1500);
							xpPoints += 100;
							myPick = 0;
						}
					}
					//Level 8-----------------------------Bulbasaur
					if (myLevel >= 8) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3;
						cout << "\n4. " << myATK4 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 4;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 4;
							}
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 4) {
							myAttack = ultraATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK4 << "!\n"; Sleep(1500);
							if (myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myStarter == 1) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 4;
							}
							if (myEffect4 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK4 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 4;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 5 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 0 experience points!\n";Sleep(1500);
							myPick = 0;
						}
					}
				}
				if (badHP == 0) {
					myPick = 0;
				}
			}








			
			//This is the battle with Charmander -------------------------------------------------------
			if (myPick == 4) {
				badGuyName = "Charmander";
				badType = 2;
				badHP = 70;
				badAtk1 = "Scratch";
				badEffect1 = 0;
				badAtk2 = "Scratch";
				badEffect2 = 0;
				badAtk3 = "Ember";
				badEffect3 = 1;
				badAtk4 = "Flamethrower";
				badEffect4 = 1;
				cout << "\nThe battle with a level 7 " << badGuyName << " has begun!\n";
				while (myHP > 0 && badHP > 0) {
					Sleep(1500);
					cout << endl << pokeName << " has " << myHP << "hp and " << badGuyName << " has " << badHP << "hp.";
					Sleep(1500);
					cout << endl << endl << pokeName << "'s attacks are: ";
					//Level 5 --------------Charmander------------------------------
					if (myLevel == 5) {
						Sleep(1500);
						cout << "\n1. " << myATK1 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 2 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 300 experience points!\n";Sleep(1500);
							xpPoints += 300;
							myPick = 0;
						}
					}
					//Level 6 --------------Charmander------------------------------
					if (myLevel == 6) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);													
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 1 || myStarter == 2) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 3 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 200 experience points!\n";Sleep(1500);
							xpPoints += 200;
							myPick = 0;
						}
					}
					//Level 7 --------------Charmander------------------------------
					if (myLevel == 7) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 1 || myStarter == 2) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myStarter == 1 || myStarter == 2) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 4 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 100 experience points!\n";Sleep(1500);
							xpPoints += 100;
							myPick = 0;
						}
					}
					//Level 8-----------------------------Charmander
					if (myLevel >= 8) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3;
						cout << "\n4. " << myATK4 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 1 || myStarter == 2) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myStarter == 1 || myStarter == 2) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 4) {
							myAttack = ultraATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK4 << "!\n"; Sleep(1500);
							if (myStarter == 1 || myStarter == 2) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect4 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK4 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 2 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 5 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 0 experience points!\n";Sleep(1500);
							myPick = 0;
						}
					}
				}
				if (badHP == 0) {
					myPick = 0;
				}
			}








			//This is the battle with Squirtle -------------------------------------------------------
			if (myPick == 5) {
				badGuyName = "Squirtle";
				badType = 3;
				badHP = 70;
				badAtk1 = "Tackle";
				badEffect1 = 0;
				badAtk2 = "Tackle";
				badEffect2 = 0;
				badAtk3 = "Water Gun";
				badEffect3 = 2;
				badAtk4 = "Bubble";
				badEffect4 = 2;
				cout << "\nThe battle with a level 7 " << badGuyName << " has begun!\n";
				while (myHP > 0 && badHP > 0) {
					Sleep(1500);
					cout << endl << pokeName << " has " << myHP << "hp and " << badGuyName << " has " << badHP << "hp.";
					Sleep(1500);
					cout << endl << endl << pokeName << "'s attacks are: ";
					//Level 5 --------------Squirtle------------------------------
					if (myLevel == 5) {
						Sleep(1500);
						cout << "\n1. " << myATK1 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 2 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 300 experience points!\n";Sleep(1500);
							xpPoints += 300;
							myPick = 0;
						}
					}
					//Level 6 --------------Squirtle------------------------------
					if (myLevel == 6) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);							
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 2 || myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 3 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 200 experience points!\n";Sleep(1500);
							xpPoints += 200;
							myPick = 0;
						}
					}
					//Level 7 --------------Squirtle------------------------------
					if (myLevel == 7) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 2 || myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myStarter == 2 || myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 4 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 100 experience points!\n";Sleep(1500);
							xpPoints += 100;
							myPick = 0;
						}
					}
					//Level 8-----------------------------Squirtle
					if (myLevel >= 8) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3;
						cout << "\n4. " << myATK4 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myStarter == 2 || myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myStarter == 2 || myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 4) {
							myAttack = ultraATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK4 << "!\n"; Sleep(1500);
							if (myStarter == 2 || myStarter == 3) {
								cout << "It's not very effective!\n";
								myAttack = myAttack / 2;
							}
							if (myEffect4 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK4 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = basicATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = strongATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (myStarter == 1 || myStarter == 3) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 5 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
							cout << pokeName << " gained 0 experience points!\n";Sleep(1500);
							myPick = 0;
						}
					}
				}
				if (badHP == 0) {
					myPick = 0;
				}
			}





			//This is the battle with Mew ----- Final Battle!! -------------------------------------------------------
			if (myPick == 6) {
				badGuyName = "Mew";
				badType = 50;
				badHP = 100;
				badAtk1 = "Thunder Bolt";
				badEffect1 = 3;
				badAtk2 = "Rock Slide";
				badEffect2 = 2;
				badAtk3 = "Flamethrower";
				badEffect3 = 1;
				badAtk4 = "Psychic";
				badEffect4 = 1;
				cout << "\nThe battle with a level 10 " << badGuyName << " has begun!\n";
				while (myHP > 0 && badHP > 0) {
					Sleep(1500);
					cout << endl << pokeName << " has " << myHP << "hp and " << badGuyName << " has " << badHP << "hp.";
					Sleep(1500);
					cout << endl << endl << pokeName << "'s attacks are: ";
					//Level 5 --------------Mew------------------------------
					if (myLevel == 5) {
						Sleep(1500);
						cout << "\n1. " << myATK1 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 2 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
						}
					}
					//Level 6 --------------Mew------------------------------
					if (myLevel == 6) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 3 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
						}
					}
					//Level 7 --------------Mew------------------------------
					if (myLevel == 7) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 4 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(1500);
						}
					}
					//Level 8-----------------------------Mew
					if (myLevel >= 8) {
						Sleep(1500);
						cout << "\n1. " << myATK1;
						cout << "\n2. " << myATK2;
						cout << "\n3. " << myATK3;
						cout << "\n4. " << myATK4 << endl;
						cout << "Pick the attack " << pokeName << " will use: ";
						cin >> atkPick; Sleep(1500);
						if (atkPick == 1) {
							myAttack = basicATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK1 << "!\n"; Sleep(1500);
							if (myEffect1 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK1 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 2) {
							myAttack = strongATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK2 << "!\n"; Sleep(1500);
							if (myEffect2 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK2 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 3) {
							myAttack = superATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK3 << "!\n"; Sleep(1500);
							if (myEffect3 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK3 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick == 4) {
							myAttack = ultraATK(randomGenerator);
							critAtk = crit(randomGenerator);
							cout << endl << pokeName << " used " << myATK4 << "!\n"; Sleep(1500);
							if (myEffect4 == badType) {
								cout << "It's super effective!!\n";
								myAttack = myAttack * 2;
							}
							if (critAtk == 1) {
								cout << "Critical hit! ";
								myAttack = myAttack * 2;
							}
							cout << myATK4 << " did " << myAttack << " damage to " << badGuyName << "!\n"; Sleep(1500);
							badHP -= myAttack;
							if (badHP > 0) {
								compAtk = pikAtk(randomGenerator);
								critAtk = crit(randomGenerator);
								if (compAtk == 1) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk1 << "!" << endl; Sleep(1500);
									if (myStarter == 1) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect1 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk1 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 2) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk2 << "!" << endl; Sleep(1500);
									if (badEffect2 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk2 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 3) {
									compDamage = superATK(randomGenerator);
									cout << badGuyName << " used " << badAtk3 << "!" << endl; Sleep(1500);
									if (myStarter == 3 || myStarter == 2) {
										cout << "It's not very effective!\n";
										compDamage = compDamage / 2;
									}
									if (badEffect3 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = superATK(randomGenerator);
										compDamage = compDamage * 2;
									}
									cout << badAtk3 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
								if (compAtk == 4) {
									compDamage = psychic(randomGenerator);
									cout << badGuyName << " used " << badAtk4 << "!" << endl; Sleep(1500);
									if (badEffect4 == myType) {
										cout << "It's super effective!!\n";
										compDamage = compDamage * 2;
									}
									if (critAtk == 1) {
										cout << "Critical hit! ";
										compDamage = compDamage * 2;
									}
									cout << badAtk4 << " did " << compDamage << " damage to " << pokeName << "!\n"; Sleep(1500);
									myHP -= compDamage;
								}
							}
						}
						if (atkPick >= 5 || atkPick <= 0) {
							cout << "\nThat isn't even an attack. Try again.\n";
						}
						if (badHP <= 0) {
							cout << endl << badGuyName << " has been defeated!\n";Sleep(3000);
						}
					}
				}
				if (badHP <= 0) {
					points++;
				}
			}
		}
}
				if (myHP <= 0) {
					cout << "\nYour Pokemon has fainted, I'm sorry but you have lost the game.\n";
					Sleep(2000);
					cout << "\nBetter luck next time.\n";
					Sleep(2000);
					cout << "\n\n\t\t\t\tGAME OVER!\n\n";
					Sleep(4000);
				}
				else {
					cout << "\n\n\t    You have completed the game! Congratulations!\n\n";
					Sleep(2000);
					cout << "\t\tYou and " << pokeName << " made a great team!\n\n";
					Sleep(2000);
					cout << "\t\t\tThanks for playing! :D\n\n";
					Sleep(4000);
				}
								
				system("PAUSE");
				return 0;
}