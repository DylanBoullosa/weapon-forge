// =================================================
// Weapon Forge v1.0
// Author: Dylan Boullosa
// Description: Multi-phase weapon creation program
// =================================================

#include <iostream>
#include <string>
#include <cmath>

int main() {
	//INTRODUCTION
	std::string READY;
	bool validChoice = false;

	while (!validChoice) {
		std::cout << "\n============== Welcome to Weapon Forge v1.0 ============== \n";
		std::cout << "\nYour objective is to design a custom weapon\n";
		std::cout << "The process will have 8 total phases\n";
		std::cout << "Each design choice you make will affect the weapons damage,abilites and energy cost\n";
		std::cout << "Please enter READY to begin: ";
		std::getline(std::cin, READY);

		if (READY == "READY") {
			validChoice = true;
		}
		else {
			std::cout << "\nInvalid input.Please Type READY.\n";
		}
	}
	//PHASE 1 WEAPON CATEGORY	
	std::string weaponType;
	bool validWeapon = false;

	while (!validWeapon) {
		std::cout << "\nChoose a weapon type\n";
		std::cout << "Gun\n";
		std::cout << "Melee\n";
		std::cout << "Magic\n";
		std::cout << "Explosive\n";
		std::cout << "Sci-Fi\n";
		std::cout << "Pick one: ";
		std::getline(std::cin, weaponType);

		if (weaponType == "Gun" || weaponType == "Melee" || weaponType == "Magic" ||
			weaponType == "Explosive" || weaponType == "Sci-Fi") {
			std::cout << "You chose " << weaponType << " as your weapon type\n";
			validWeapon = true;

		}
		else {
			std::cout << "Invalid input.Please Type one of the following weapon types\n";
		}

	}
	//PHASE 2 Sub type
	std::string subType;
	bool validSubtype = false;

	while (!validSubtype) {
		//First Weapon
		if (weaponType == "Gun") {
			std::cout << "\nChoose gun type\n";
			std::cout << "Raygun\n";
			std::cout << "Plasmagun\n";
			std::cout << "Freezegun\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, subType);

			if (subType == "Raygun" || subType == "Plasmagun" || subType == "Freezegun") {
				std::cout << "You chose the " << subType << std::endl;
				validSubtype = true;
			}
			else {
				std::cout << "Invalid input.Please Type one of the following weapon subtypes\n";
			}
		}
		//Second Weapon
		else if (weaponType == "Melee") {
			std::cout << "\nChoose a Melee weapon\n";
			std::cout << "Sword\n";
			std::cout << "Axe\n";
			std::cout << "Spear\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, subType);

			if (subType == "Sword" || subType == "Axe" || subType == "Spear") {
				std::cout << "You chose the " << subType << std::endl;
				validSubtype = true;
			}
			else {
				std::cout << "Invalid input.Please Type one of the following weapon subtypes\n";
			}
		}
		//Third Weapon
		else if (weaponType == "Magic") {
			std::cout << "\nChoose a Magic weapon\n";
			std::cout << "Staff\n";
			std::cout << "Wand\n";
			std::cout << "Orb\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, subType);

			if (subType == "Staff" || subType == "Wand" || subType == "Orb") {
				std::cout << "You chose the " << subType << std::endl;
				validSubtype = true;
			}
			else {
				std::cout << "Invalid input.Please Type one of the following weapon subtypes\n";
			}
		}
		//Fourth Weapon
		else if (weaponType == "Explosive") {
			std::cout << "\nChoose a Explosive weapon\n";
			std::cout << "Grenade\n";
			std::cout << "Rocket Launcher\n";
			std::cout << "Mine\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, subType);

			if (subType == "Grenade" || subType == "Rocket Launcher" || subType == "Mine") {
				std::cout << "You chose the " << subType << std::endl;
				validSubtype = true;
			}
			else {
				std::cout << "Invalid input.Please Type one of the following weapon subtypes\n";
			}
		}
		//Fifth Weapon
		else if (weaponType == "Sci-Fi") {
			std::cout << "\nChoose a Sci-Fi weapon\n";
			std::cout << "Laser Rifle\n";
			std::cout << "Plasma Cannon\n";
			std::cout << "Railgun\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, subType);

			if (subType == "Laser Rifle" || subType == "Plasma Cannon" || subType == "Railgun") {
				std::cout << "You chose the " << subType << std::endl;
				validSubtype = true;	
			}
			else {
				std::cout << "Invalid input.Please Type one of the following weapon subtypes\n";
			}
		}
	}
	//PHASE 3 Power Level
	bool validPowerlevel = false;
	int powerLevel;
	std::string powerDescription;
	
	while (!validPowerlevel) {
		std::cout << "\nChose power level (1-10):";
		std::cin >> powerLevel;

		if (powerLevel >= 1 && powerLevel <= 3) {
			powerDescription = "Low power: efficient and stable, low damage.\n";
			std::cout << powerDescription;
			validPowerlevel = true;
		}
		else if (powerLevel <= 6) {
			powerDescription = "Medium power: balanced damage and energy cost.\n";
			std::cout << powerDescription;
			validPowerlevel = true;
		}
		else if (powerLevel <= 8) {
			powerDescription = "High power: strong damage, increased energy usage.\n";
			std::cout << powerDescription;
			validPowerlevel = true;
		}
		else if (powerLevel <= 10) {
			powerDescription = "Extreme power: devastating damage, unstable and costly.\n";
			std::cout << powerDescription;
			validPowerlevel = true;
		}
		else {
			std::cout << "Invalid power level. Enter a value from 1 to 10.\n";
		}
	}
	//PHASE 4 Ability Selection

	bool validAbility = false;
	std::string abilityType;

	while (!validAbility) {
		std::cout << "\nChoose an ability\n";
		//Gun abilities
		if (subType == "Raygun") {
			std::cout << "Stun Beam\n";
			std::cout << "Chain Shot\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Stun Beam" || abilityType == "Chain Shot") {
				std::cout << "You chose " << abilityType << " as your abiliy\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		else if (subType == "Plasmagun") {
			std::cout << "Overcharge\n";
			std::cout << "Plasma Burst\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Overcharge" || abilityType == "Plasma Burst") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		else if (subType == "Freezegun") {
			std::cout << "Freeze Target\n";
			std::cout << "Ice Blast\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Freeze Target" || abilityType == "Ice Blast") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		//Melee abilties
		else if (subType == "Sword") {
			std::cout << "Heavy Slash\n";
			std::cout << "Parry Strike\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Heavy Slash" || abilityType == "Parry Strike") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		else if (subType == "Axe") {
			std::cout << "Cleave\n";
			std::cout << "Armor Break\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Cleave" || abilityType == "Armor Break") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		else if (subType == "Spear") {
			std::cout << "Piercing Thrust\n";
			std::cout << "Reach Sweep\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Piercing Thrust" || abilityType == "Reach Sweep") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		//Magic abilties
		else if (subType == "Staff") {
			std::cout << "Arcane Blast\n";
			std::cout << "Mana Surge\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Arcane Blast" || abilityType == "Mana Surge") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		else if (subType == "Wand") {
			std::cout << "Rapid Cast\n";
			std::cout << "Precision Bolt\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Rapid Cast" || abilityType == "Precision Bolt") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		else if (subType == "Orb") {
			std::cout << "Energy Pulse\n";
			std::cout << "Gravity Field\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Energy Pulse" || abilityType == "Gravity Field") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		//Explosive abilites
		else if (subType == "Grenade") {
			std::cout << "Fragmentation\n";
			std::cout << "Flash Detonation\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Fragmentation" || abilityType == "Flash Detonation") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		else if (subType == "Rocket Launcher") {
			std::cout << "Direct Impact\n";
			std::cout << "Splash Barrage\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Direct Impact" || abilityType == "Spash Barrage") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of following abilities\n";
			}
		}
		else if (subType == "Mine") {
			std::cout << "Proximity Trigger\n";
			std::cout << "Delayed Blast\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Proximity Trigger" || abilityType == "Delayed Blast") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of the following abilities\n";
			}
		}
		//Sci-fi Abilites

		else if (subType == "Laser Rifle") {
			std::cout << "Precision Beam\n";
			std::cout << "Heat Overload\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Precision Beam" || abilityType == "Heat Overload") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of the following abilities\n";
			}
		}
		else if (subType == " Plasma Cannon") {
			std::cout << "Charged Shot\n";
			std::cout << "Area Meltdown\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Charged Shot" || abilityType == "Area Meltdown") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of the following abilities\n";
			}
		}
		else if (subType == "Railgun") {
			std::cout << "Armor Pierce\n";
			std::cout << "Kinetic Shock\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, abilityType);

			if (abilityType == "Armor Pierce" || abilityType == "Kinetic Shock") {
				std::cout << "You chose " << abilityType << " as your ability\n";
				validAbility = true;
			}
			else {
				std::cout << "Invalid ability type. Enter one of the following abilities\n";
			}
		}
	}
		//PHASE 5  Modifiers
		bool validModifier = false;
		std::string modifierType;

		while (!validModifier) {
			std::cout << "\nChoose a weapon modifier\n";
			std::cout << "Power\nControl\nSpeed\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, modifierType);

			if (modifierType == "Power") {
				std::cout << "Modifier Selected: " << modifierType << std::endl;
				std::cout << "Damage increased, energy cost increased\n";
				validModifier = true;
			}
			else if (modifierType == "Control") {
				std::cout << "Modifier Selected: " << modifierType << std::endl;
				std::cout << "Damage reduced, recoil improved\n";
				validModifier = true;
			}
			else if (modifierType == "Speed") {
				std::cout << "Modifier Selected: " << modifierType << std::endl;
				std::cout << "Speed increased, durability reduced\n";
				validModifier = true;
			}
			else {
				std::cout << "Invalid modifier type. Enter one of the following modifiers\n";
			}
		}
		//PHASE 6 Test fire
		bool validTestFire = false;
		std::string testingTarget;

		while (!validTestFire) {
			std::cout << "\n==========Target Testing==========\n";
			std::cout << "Choose a testing target\n";
			std::cout << "Drone\nArmored Bot\nEnemy Group\n";
			std::cout << "Pick one: ";
			std::getline(std::cin, testingTarget);

			if (testingTarget == "Drone") {
				std::cout << "Target selected: " << testingTarget << std::endl;
				std::cout << "Light target detected, minimal resistance\n";
				validTestFire = true;
			}
			else if (testingTarget == "Armored Bot") {
				std::cout << "Target selected: " << testingTarget << std::endl;
				std::cout << "Heavy target detected, damage reduced\n";
				validTestFire = true;
			}
			else if (testingTarget == "Enemy Group") {
				std::cout << "Target selected: " << testingTarget << std::endl;
				std::cout << "Multiple targets detected, area effectivness increased\n";
				validTestFire = true;
			}
			else {
				std::cout << "Invalid testing target. Enter one of the following targets\n";
			}
		}
		//PHASE 7 Weapon analysis
		double damage = (powerLevel * 10);
		double energyCost = (powerLevel * 5);
		double effieciency = (damage/energyCost);

		if (modifierType == "Power") {
			damage *= 1.5;
			energyCost *= 1.4;
		}
		else if (modifierType == "Control") {
			damage *= .8;
			energyCost *= .5;
		}
		else if (modifierType == "Speed") {
			damage *= 1.1;
			energyCost *= .9;
		}

	return 0;
}

