# MUL_2018_my_defender

## THE PROJECT

This project is a Tower Defense game.

Your game must follow the following rules:
    • The player is a builder who must defend his castle,
    • Enemy waves will regularly appear from one side of
    the playground,
    • The player must buy and place buildings on the playground grid to block/kill enemies,
    • Buildings can be offensive (towers attacking) or defensive (basic walls),
    • When the castle is reached by an enemy, it takes damages,
    • If the castle reaches 0 hit points the player loose.

## REQUIREMENT

CSFML

## USAGE

1) `make re`

2) `./my_defender`

3) For more information, type `./my_defender -h`

## REQUIREMENTS REALIZED

MANDATORY
• the window can be closed using events,
• the game manages the input from the mouse click and keyboard,
• the game contains animated sprites rendered thanks to sprite sheets,
• animations in your program are frame rate independent,
• animations and movements in your program are timed by clocks.

MUST
• a starting menu with at least two buttons, one to launch a game, and one to quit the game,
• an escape key to pause the game when launched,
• a menu when the game is paused with at least three buttons, one to resume the game, one to go to
the starting menu and the one to leave the game,
• at least 4 different types of buildings (e.g. walls, slowing towers, damaging towers, etc. . .),
• a building menu showing the different available buildings and their price,
• at least 2 different sound effects, and one looping background music.

SHOULD
• a windows that sticks between 800x600 pixels and 1920x1080 pixels.
• a “How To play” menu, explaining how to play your game.
• buttons with at least three visual states: idle, hover, and clicked.

COULD
• let the user upgrade its buildings,
• have a “settings” menu that contains sound options and/or screen size options.

BONUS
• custom mouse cursor.