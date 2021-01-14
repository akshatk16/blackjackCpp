#include "cardDef.h"
#include "print.cpp"
#include "cardValue.cpp"
#include "swap.cpp"
#include "shuffle.cpp"
#include "choice.cpp"
#include "blackjack.cpp"

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();

	std::array<Card, 52> deck;
	using index_t = std::array<Card, 52>::size_type;
	index_t card = 0;

	for(int suit=0; suit<MAX_SUITS; ++suit)
		for(int rank=0; rank<MAX_RANK; ++rank)
		{
			deck[card].rank = static_cast<CardRank>(rank);
			deck[card].suit = static_cast<CardSuit>(suit);

			++card;
		}
	printDeck(deck);
	shuffleDeck(deck);
	printDeck(deck);

	if (playBlackJack(deck))
		std::cout << "You win" << '\n';
	else
		std::cout << "You lose" << '\n';


	return 0;
}
