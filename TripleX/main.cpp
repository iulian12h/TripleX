#include <iostream>

                                                                   
//      //    / /                                                      
//     //___ / /      ___        ___       / ___      ___        __    
//    / ___   /     //   ) )   //   ) )   //\ \     //___) )   //  ) ) 
//   //    / /     //   / /   //         //  \ \   //         //       
//  //    / /     ((___( (   ((____     //    \ \ ((____     //        


void PrintIntroduction() {

	system("color 02");

	std::cout << "//      //    / /                                                     \n";
	std::cout << "//     //___ / /      ___        ___       / ___      ___        __   \n";
	std::cout << "//    / ___   /     //   ) )   //   ) )   //\ \     //___) )   //  ) )\n";
	std::cout << "//   //    / /     //   / /   //         //  \ \   //         //      \n";
	std::cout << "//  //    / /     ((___( (   ((____     //    \ \ ((____     //       \n";
	std::cout << "You are a secret agent breaking into a secure server room...\n";
	std::cout << "Enter the correct code to continue...\n\n";
}

void PlayGame() {
	
	PrintIntroduction();
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;


	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;


	std::cout << "+ There are 3 numbers in the code\n";
	std::cout << "+ The code add up to: " << CodeSum << "\n";
	std::cout << "+ The codes multiply to give: " << CodeProduct << "\n";

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;


	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
		std::cout << "You win!";
	}
	else {
		std::cout << "You lost!";
	}
}

int main() {

	PlayGame();
	return 0;
}


