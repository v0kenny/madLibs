#include <iostream>
#include <string>

int main() {
	std::cout << "Enter an adjective: ";
	std::string adjective1;
	std::cin >> adjective1;
	std::cout << "Enter an adjective: ";
	std::string adjective2;
	std::cin >> adjective2;
	std::cout << "Enter a noun: ";
	std::string noun1;
	std::cin >> noun1;
	std::cout << "Enter a noun: ";
	std::string noun2;
	std::cin >> noun2;
	std::cout << "Enter a plural noun: ";
	std::string plural_noun1;
	std::cin >> plural_noun1;
	std::cout << "Enter a sport: ";
	std::string sport1;
	std::cin >> sport1;
	std::cout << "Enter a plural noun: ";
	std::string plural_noun2;
	std::cin >> plural_noun2;
	std::cout << "Enter a verb ending in ing : ";
	std::string verb_ing1;
	std::cin >> verb_ing1;
	std::cout << "Enter a verb ending in ing: ";
	std::string verb_ing2;
	std::cin >> verb_ing2;
	std::cout << "Enter a plural noun: ";
	std::string plural_noun3;
	std::cin >> plural_noun3;
	std::cout << "Enter a verb ending in ing: ";
	std::string verb_ing3;
	std::cin >> verb_ing3;
	std::cout << "Enter a noun: ";
	std::string noun3;
	std::cin >> noun3;
	std::cout << "Enter a plant: ";
	std::string plant1;
	std::cin >> plant1;
	std::cout << "Enter a body part: ";
	std::string body_part1;
	std::cin >> body_part1;
	std::cout << "Enter a place: ";
	std::string place1;
	std::cin >> place1;
	std::cout << "Enter a verb ending in ing: ";
	std::string verb_ing4;
	std::cin >> verb_ing4;
	std::cout << "Enter an adjective: ";
	std::string adjective3;
	std::cin >> adjective3;
	std::cout << "Enter a number: ";
	std::string number1;
	std::cin >> number1;
	std::cout << "Enter a plural noun: ";
	std::string plural_noun4;
	std::cin >> plural_noun4;
	std::cout << "A vacation is when you take a trip to some " << adjective1 <<
		" place with your " << adjective2 <<
		" family. Usually you go to some place that is near a / an " << noun1
		<< " or up on a/an " << noun2 <<
		"." << "\nA good vacation place is one where you can ride " << plural_noun1 <<
		" or play " << sport1 <<
		" or go hunting for " << plural_noun2 <<
		"." << "\nI like to spend my time " << verb_ing1 <<
		" or " << verb_ing2 << 
		"." << "\nWhen parents go on a vacation, they spend their time eating three " << plural_noun3 <<
		" a day, and fathers play golf, and mothers sit around " << verb_ing3 <<
		"." << "\nLast summer, my little brother fell in a / an " << noun3 <<
		" and got poison " << plant1 <<
		" all over his " << body_part1 <<
		"." << "\nMy family is going to go to(the) " << place1 <<
		", and I will practice " << verb_ing4 <<
		"." <<"\nParents need vacations more than kids because parents are always very " << adjective3 <<
		" and because they have to work " << number1 <<
		" hours every day all year making enough " << plural_noun4 <<
		" to pay for the vacation. ";
}