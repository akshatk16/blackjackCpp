int generateRandomNumber(int min, int max)
{
	static const double fraction = 1.0/(static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
void shuffleDeck(std::array<Card, 52> &deck)
{
	using index_t = std::array<Card, 52>::size_type;
	for(index_t index= 0; index < 52; ++index)
	{
		index_t swapIndex = generateRandomNumber(0,51);
		swapCard(deck[index], deck[swapIndex]);
	}
}
