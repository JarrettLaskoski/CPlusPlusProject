#include <iostream>
#include <sstream>
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"

using namespace std;

class Table {
private:
    Player p1, p2;
    Deck d;
    DiscardPile dp;
    TradeArea trade;

public:
    Table(istream& in , const CardFactory* fact) {
        while()
    }

    bool win(string& winner) {
        if (d.deck.size() == 0) {

            return true;
        } else {
            return false;
        }
    }

    void printHand(bool) {
        
    }

    friend ostream& operator<<(ostream& out, const Table& table) {
        return out;
    }
};