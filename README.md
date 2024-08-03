<img  height="50px" align="right" src="https://raw.githubusercontent.com/fchavonet/fchavonet/main/resources/images/logo-c.png" alt="C logo">

# Solid Snake

## 🔖 Table of contents

<details>
        <summary>
		CLICK TO ENLARGE 😇
        </summary>
	    📄 <a href="#description">Description</a>
        <br>
        🎓 <a href="#objectives">Objectives</a>
        <br>
        🔨 <a href="#tech-stack">Tech stack</a>
        <br>
        📂 <a href="#files-description">Files description</a>
        <br>
        💻 <a href="#installation_and_how_to_use">Installation and how to use</a>
        <br>
        ♥️ <a href="#thanks">Thanks</a>
        <br>
        👷 <a href="#authors">Authors</a>
</details>

## 📝 <span id="description">Description</span>

Solid Snake is a classic C implementation of the snake game, inspired by [this ASMR programming video ](https://www.youtube.com/watch?v=cUJE10XEjrU).
<br>
The game features a growing snake that consumes apples while avoiding collisions with itself.

## 🎓 <span id="objectives">Objectives</span>

The objective of the project is to create a functional and enjoyable implementation of the classic snake game in C, playable in a Terminal. The scope includes implementing core game mechanics, such as snake movement, apple generation, collision detection and scoring.
<br>
The project serves as a confirmation of my C programming skills.

## 🔨 <span id="tech-stack">Tech stack</span>

<p align="left">
    <img src="https://img.shields.io/badge/C-a8b9cc?logo=&logoColor=black&style=for-the-badge" alt="C badge">
    <img src="https://img.shields.io/badge/SHELL SCRIPT-000000?logo=gnu-bash&logoColor=white&style=for-the-badge" alt="Shell Script badge">
</p>

## 📂 <span id="files-description">Files description</span>

| **FILE**               | **DESCRIPTION**                                     |
| :--------------------: | --------------------------------------------------- |
| `resources`            | Contains the resources required for the repository. |
| `README.md`            | The readme file you are currently reading 😉.       |
| `best_score.c`         | Handles reading and writing the best score.         |
| `disable_canonical.c`  | Disables canonical mode for Terminal input.         |
| `generate_apple.c`     | Generates the apple's position in the game.         |
| `generate_snake.c`     | Generates and moves the snake in the game.          |
| `get_keyboard_input.c` | Gets keyboard input for controlling the snake.      |
| `main.c`               | Entry point of the program, contains the main loop. |
| `main.h`               | Header file with structure and function prototypes. |
| `print_game_over.c`    | Prints the game over message when the game ends.    |
| `print_game_title.c`   | Prints the game title ASCII art.                    |
| `print_playground.c`   | Prints the playground of the game.                  |

## 💻 <span id="installation_and_how_to_use">Installation and how to use</span>

**Instalation:**

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

4. Run from your Terminal:

```
./solid_snake
```

**How to play:**

1. QWERTY
    - Up: `w`.
    - Right: `d`.
    - Down: `s`.
    - Left: `a`.
    - Quit: `esc`.

2. AZERTY
    - Up: `z`.
    - Right: `d`.
    - Down: `s`.
    - Left: `q`.
    - Quit: `esc`.

<br>
<img width="200px" src="./resources/images/solid_snake.gif">

## 🔧 <span id="whats-next">What's next ?</span>

- Clean and optimize code.

## ♥️ <span id="thanks">Thanks</span>

A big thank you to [Serene Dev](https://github.com/serene-dev) for his ASMR video and to [Holberton School](https://www.holbertonschool.com/) for providing a solid foundation in C programming.

## 👷 <span id="authors">Authors</span>

**Fabien CHAVONET**
- Github: [@fchavonet](https://github.com/fchavonet)
