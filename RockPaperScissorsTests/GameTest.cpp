#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\DELL\OneDrive - University of Guelph\Desktop\Conestoga\Fall 24\Project I\Assingment 3\RockPaperScissors\Game.h" // Ensure this path is correct

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTests
{
    TEST_CLASS(GameTest)
    {
    public:
        TEST_METHOD(DrawTest)
        {
            const char* result = determine_winner("Rock", "Rock");
            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(Player1WinsTest)
        {
            const char* result = determine_winner("Rock", "Scissors");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(Player2WinsTest)
        {
            const char* result = determine_winner("Scissors", "Rock");
            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(InvalidInputTest)
        {
            const char* result = determine_winner("Rock", "Spock");
            Assert::AreEqual("Invalid", result);
        }
    };
}
