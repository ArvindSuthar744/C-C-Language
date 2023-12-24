#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string playerName;
    int matchesPlayed;

public:
    void inputData() {
        std::cout << "Enter player name: ";
        std::cin >> playerName;
        std::cout << "Enter matches played: ";
        std::cin >> matchesPlayed;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void calculateAverageRuns() {
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        averageRuns = static_cast<double>(totalRuns) / matchesPlayed;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }

    void displayData() {
        std::cout << "\nBatsman Details:" << std::endl;
        std::cout << "Player Name: " << playerName << std::endl;
        std::cout << "Matches Played: " << matchesPlayed << std::endl;
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;

    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}

