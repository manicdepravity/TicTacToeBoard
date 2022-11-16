/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, smokeTest)
{
    ASSERT_TRUE(true);
}
// Testing values returned from toggle
TEST(TicTacToeBoard, toggle)
{

    Piece temp11 = X;
    Piece temp12 = O;
    TicTacToeBoard obj;
    obj.toggleTurn();
    ASSERT_EQ( temp11, obj.toggleTurn());
    ASSERT_EQ(temp12, obj.toggleTurn());
    ASSERT_TRUE(obj.toggleTurn() == X);
    ASSERT_TRUE(obj.toggleTurn() == O);
}

//TEST(TicTacToeBoardTest,board)
//{
//    TicTacToeBoard obj;
//
//    Piece player1 = X;
//    Piece player2 = O;
//    if (player1){
//    obj.toggleTurn() = player1
//
//
//    if (player2){
//    obj.toggleTurn() = player2;
//
//    }
//    ASSERT_EQ(player1,player2);
//
//    }
////
////
////
////
////
//}


TEST(TicTacToeBoard, get)
{
    Piece obj = X;
    Piece obj3 = Blank;

    TicTacToeBoard obj1;
    int row = 1;
    int column = 0;


    int row1 = -1;
    int column1 = -1;
    // testing following includes blank
    ASSERT_EQ( obj,obj1.getPiece(row, column1));
    // Testing for invalid moves
    ASSERT_EQ( obj,obj1.getPiece(row1,column1));
}


TEST(TicTacToeBoard, place)
{

TicTacToeBoard place1, place2;
int row = 1;
int column = 1;

ASSERT_TRUE(place1.placePiece(row,column));
int row1 = -1;

int column1 = 4;
int row3 = 0;
int column3 = 1;
assert(place1.placePiece(row1,column1));
// Testing that the following gives an invalid
ASSERT_EQ(Invalid, place1.placePiece(row1,column1));
// Testing X is valid in placement
ASSERT_EQ(X, place2.placePiece(row3,column3));
}

//TEST(TicTacToeBoardTest, toggleThatTurn)
//{
//TicTacToeBoardTest obj;
////int sleeping[7] = {8,8,8,8,7,7,8};
//char turn = [0,1]
//char* actual = obj.toggleTurn(turn = 0);
//ASSERT_EQ(actual,turn);
//
//TEST(TicTacToeBoardTest, toggleThatTurn)
//{
//    TicTacToeBoardTest obj;
//    int player = = obj.TicTacToeBoard::toggleTurn( = 'X');
//    int* actual = obj.TicTacToeBoard::toggleTurn(turn = 'O');
//    ASSERT_EQ(actual,turn);
//}


//}
//TEST(TicTacToeBoardTest, toggleThat)
//{
////Practice my;
////my.toggleTurn
//}



