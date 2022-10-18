# Write a program to make a two-player Rock-Paper-Scissors game. (Hint: Ask for player plays(using input),
#                                                                 compare them, print out a message of congratulations to the winner, and ask if the players want to start a new
#                                                                 game)
# Rules: Rock beats scissors, Scissors beats paper, Paper beats rock

player1 = input("Enter Player-1 Name: ")
player2 = input("Enter Player-2 Name: ")

p1 = input(
    "\n %s, For Player-1: Choose rock, paper or scissors: " % player1)

p2 = input(
    "\n%s, For Player-2: choose rock, paper or scissors: " % player2)


def compare(u1, u2):

    if u1 == u2:
        return("It's a tie")

    elif u1 == 'rock':
        if u2 == 'scissors':
            return("\nPlayer-1 wins the game")

        else:
            return("\nPlayer-2 wins the game")

    elif u1 == 'scissors':
        if u2 == 'paper':
            return("\nPlayer-1 win the game")

        else:
            return("\nPlayer-2 wins the game")

    elif u1 == 'paper':
        if u2 == 'rock':
            return("\nPlayer-1 wins the game")
        else:
            return("\nPlayer-2 win the game")

    else:
        return("\nInvalid input")


print(compare(p1, p2))

print("\n20DCE019 - Yatharth Chauhan")
