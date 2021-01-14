enum CardSuit
{
	SUIT_CLUB,
	SUIT_HEART,
	SUIT_SPADE,
	SUIT_DIAMOND,
	MAX_SUITS
};

enum CardRank
{
	RANK_ACE,
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_JACK,
	RANK_QUEEN,
	RANK_KING,
	MAX_RANK
};

struct Card
{
	CardRank rank;
	CardSuit suit;
};
