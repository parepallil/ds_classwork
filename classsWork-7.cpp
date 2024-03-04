#include <iostream>
#include <string>

class BasketballMatch {
private:
    std::string team1;
    std::string team2;
    int scoreTeam1;
    int scoreTeam2;

public:
    // Constructor
    BasketballMatch(const std::string& t1, const std::string& t2, int s1, int s2)
        : team1(t1), team2(t2), scoreTeam1(s1), scoreTeam2(s2) {}

    // Getter and Setter for Team 1
    std::string getTeam1() const {
        return team1;
    }

    void setTeam1(const std::string& t1) {
        team1 = t1;
    }

    // Getter and Setter for Team 2
    std::string getTeam2() const {
        return team2;
    }

    void setTeam2(const std::string& t2) {
        team2 = t2;
    }

    // Getter and Setter for Score of Team 1
    int getScoreTeam1() const {
        return scoreTeam1;
    }

    void setScoreTeam1(int s1) {
        scoreTeam1 = s1;
    }

    // Getter and Setter for Score of Team 2
    int getScoreTeam2() const {
        return scoreTeam2;
    }

    void setScoreTeam2(int s2) {
        scoreTeam2 = s2;
    }

    // Function to determine the winner of the match
    std::string determineWinner() const {
        if (scoreTeam1 > scoreTeam2) {
            return team1 + " wins!";
        }
        else if (scoreTeam2 > scoreTeam1) {
            return team2 + " wins!";
        }
        else {
            return "It's a tie!";
        }
    }
};

int main() {
    // Example usage:
    BasketballMatch match("TeamA", "TeamB", 78, 82);

    // Using getter methods
    std::cout << "Team 1: " << match.getTeam1() << std::endl;
    std::cout << "Team 2: " << match.getTeam2() << std::endl;
    std::cout << "Score Team 1: " << match.getScoreTeam1() << std::endl;
    std::cout << "Score Team 2: " << match.getScoreTeam2() << std::endl;
    std::cout << "Winner: " << match.determineWinner() << std::endl;

    // Using setter methods
    match.setTeam1("Lakers");
    match.setTeam2("Warriors");
    match.setScoreTeam1(92);
    match.setScoreTeam2(88);

    // Display updated information
    std::cout << "\nUpdated Information:" << std::endl;
    std::cout << "Team 1: " << match.getTeam1() << std::endl;
    std::cout << "Team 2: " << match.getTeam2() << std::endl;
    std::cout << "Score Team 1: " << match.getScoreTeam1() << std::endl;
    std::cout << "Score Team 2: " << match.getScoreTeam2() << std::endl;
    std::cout << "Winner: " << match.determineWinner() << std::endl;

    return 0;
}
