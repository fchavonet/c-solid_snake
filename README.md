# Solid Snake

## Description

Solid Snake is a classic C implementation of the snake game, inspired by this [ASMR programming video](https://www.youtube.com/watch?v=cUJE10XEjrU).

The game features a growing snake that consumes apples while avoiding collisions with itself.

## Objectives

- Developed an enjoyable implementation of the classic Snake game in C, playable in a Terminal.
- Implemented core game mechanics, including:
    - Snake movement.
    - Apple generation.
    - Snake growth upon eating an apple.
    - Collision detection.
    - Scoring system.
- Ensured the code adhered to the Betty coding standard for improved readability and consistency.
- Demonstrated and confirmed proficiency in C programming through this project.

## Tech Stack

![C badge](https://img.shields.io/badge/C-a8b9cc?logo=&logoColor=black&style=for-the-badge)
![Bash badge](https://img.shields.io/badge/BASH-4eaa25?logo=gnubash&logoColor=white&style=for-the-badge)

## File Description

| **FILE**               | **DESCRIPTION**                                     |
| :--------------------: | --------------------------------------------------- |
| `assets`               | Contains the resources required for the repository. |
| `main.h`               | Header file with structure and function prototypes. |
| `main.c`               | Entry point of the program, contains the main loop. |
| `disable_canonical.c`  | Disables canonical mode for Terminal input.         |
| `print_game_title.c`   | Prints the game title ASCII art.                    |
| `print_playground.c`   | Prints the playground of the game.                  |
| `generate_snake.c`     | Generates and moves the snake in the game.          |
| `get_keyboard_input.c` | Gets keyboard input for controlling the snake.      |
| `generate_apple.c`     | Generates the apple's position in the game.         |
| `print_game_over.c`    | Prints the game over message when the game ends.    |
| `best_score.c`         | Handles reading and writing the best score.         |
| `README.md`            | The README file you are currently reading 😉.       |

## Installation & Usage

### Installation

1. Clone this repository:
    - Open your preferred Terminal.
    - Navigate to the directory where you want to clone the repository.
    - Run the following command:

```
git clone https://github.com/fchavonet/c-solid_snake.git
```

2. Open the repository you've just cloned.

3. Compile the source code:

```
gcc *.c -o solid_snake
```

> You need to have `GCC` installed to compile the program.

### Usage

1. Run from your Terminal:

```
./solid_snake
```

<table>
    <tr>
        <td align="center">
            <img width="250" src="./assets/images/solid_snake.gif" alt="Screenshot">
    </td>
    <td>
      <strong>QWERTY</strong>
      <br>
      ⬆️ Up: <code>w</code>
      <br>
      ➡️ Right: <code>d</code>
      <br>
      ⬇️ Down: <code>s</code>
      <br>
      ⬅️ Left: <code>a</code>
      <br>
      ❌ Quit: <code>esc</code>
      <br>
      <br>
      <strong>AZERTY</strong>
      <br>
      ⬆️ Up: <code>z</code>
      <br>
      ➡️ Right: <code>d</code>
      <br>
      ⬇️ Down: <code>s</code>
      <br>
      ⬅️ Left: <code>q</code>
      <br>
      ❌ Quit: <code>esc</code>
    </td>
  </tr>
</table>

## What's Next?

- Clean and optimize code.

## Thanks

- A big thank you to [Serene Dev](https://github.com/serene-dev) for his ASMR video and to [Holberton School](https://www.holbertonschool.com/) for providing a solid foundation in C programming.

## Author(s)

**Fabien CHAVONET**
- GitHub: [@fchavonet](https://github.com/fchavonet)
