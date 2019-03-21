#pragma once

#include "IMatchChecker.h"
#include "Match.h"

class Match4Checker : public IMatchChecker
{
public:
	Match4Checker(int baseScore, int scorePerPiece);
	virtual Match* Check(Cell* cell, std::unordered_set<Cell*>& resolvedCells) override;
	int GetScore(int totalPiecesDestroyed);
private:
	int m_BaseScore;
	int m_ScorePerPiece;
};

