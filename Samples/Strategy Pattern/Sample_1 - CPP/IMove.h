#pragma once
class IMove
{
public: 
	void virtual Move() const = 0;
	virtual ~IMove() {};
};

