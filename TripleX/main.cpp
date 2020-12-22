#include <iostream>
#include <ctime>


//      //    / /                                                      
//     //___ / /      ___        ___       / ___      ___        __    
//    / ___   /     //   ) )   //   ) )   //\ \     //___) )   //  ) ) 
//   //    / /     //   / /   //         //  \ \   //         //       
//  //    / /     ((___( (   ((____     //    \ \ ((____     //        


void PrintIntroduction(int Difficulty) {

	system("color 02");


	std::cout << "\n\n//      //    / /                                                     \n";
	std::cout << "//     //___ / /      ___        ___       / ___      ___        __   \n";
	std::cout << "//    / ___   /     //   ) )   //   ) )   //\ \     //___) )   //  ) )\n";
	std::cout << "//   //    / /     //   / /   //         //  \ \   //         //      \n";
	std::cout << "//  //    / /     ((___( (   ((____     //    \ \ ((____     //       \n";
	std::cout << "You are a secret agent breaking into a level" << Difficulty << "secure server room...\n";
	std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty) {

	PrintIntroduction(Difficulty);
	const int CodeA = rand() % Difficulty + 1;
	const int CodeB = rand() % Difficulty + 1;
	const int CodeC = rand() % Difficulty + 1;


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
		std::cout << "*** Well done agent! You have extracted a file! keep going! ***";
		return true;
	}
	else {
		std::cout << "*** You have entered the wrong code! Careful agent! Try again! ***";
		return false;
	}
}

int main() {

	srand(time(NULL));
	int LevelDifficulty = 1;
	const int MaxDifficulty = 5;

	while (LevelDifficulty <= MaxDifficulty) {

		bool bLevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear();
		std::cin.ignore();
		if (bLevelComplete) {
			++LevelDifficulty;
		}

	}

	std::cout << "*** Great work agent! You got all the files! Now get out of there! ***";
	return 0;
}


