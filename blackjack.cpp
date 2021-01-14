bool playBlackJack(const std::array<Card, 52> &deck)
{
	const Card *cardPtr = &deck[0];

	int playerTotal {};
	int dealerTotal {};

	dealerTotal += getCardValue(*cardPtr++);
	std::cout << "\nThe dealer is showing: " << dealerTotal << '\n';

	playerTotal += getCardValue(*cardPtr++);
	playerTotal += getCardValue(*cardPtr++);

	while(1)
	{
		std::cout << "You have: " << playerTotal <<'\n';
		if(playerTotal>21)
			return false;
		char choice {getPlayerChoice()};
		if(choice=='s')
			break;
		playerTotal += getCardValue(*cardPtr++);

	}
	while(dealerTotal<17)
	{
		dealerTotal += getCardValue(*cardPtr++);
		std::cout << "The dealer now has: " << dealerTotal << '\n';

	}
	if (dealerTotal>21)
		return true;

	return (playerTotal>dealerTotal);
}
