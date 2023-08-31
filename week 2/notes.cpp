
class Game {
    private:
        int wins = 0;
        int losses = 0;
        int rounds = 0;
        string playerInput;
        string computerInput; 

        void startRound(){
            cout << 'Round ' << this.rounds << ' - Please enter your choice (rock, paper, scissor, or q to quit):\n'
            string input = this.getInput()
            
            if (input == 'fail') {
                cout << 'invalid input';
                startRound();
            }
            if (input == 'q') {
                return;
            }

            this.playerInput = input;
            this.computerInput = this.getComputerInput();

            this.showOutput();
            startRound();
        }

        void showOutput() {
            string lines[4] = [
                'Your choice: '+ playerInput,
                "The computer's choice:" + computerInput,
                'result' + this.getWinner(),
                'Score: ' + to_string(this.wins) +'/' + to_string(this.losses)
            ];
            cout << lines.join('\n');
        }

        string getWinner(){
            if (this.playerInput == this.computerInput) {
                return 'tie'
            }

        }

        string getComputerInput(){
            string options[3] = ['rock','paper','scissors'];
            return options[rand(0,3)];
        }

        string input() {
            cin >> input;
            if (input != 'q' && input != 'rock' && input != 'paper' && input != 'scissors') {
                return 'fail';
            }
            return input

        } 

}


int main() {
    Game gameInstance
    gameInstance.startRound()
    return 0;
}