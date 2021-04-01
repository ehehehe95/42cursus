# cub3D

## My first RayCaster with miniLibX

_Summary: This project is inspired by the world-famous eponymous 90’s game, which
was the first FPS ever. It will enable you to explore ray-casting. Your goal will be to
make a dynamic view inside a maze, in which you’ll have to find your way._

# Goals

This project’s objectives are similar to all this first year’s objectives: Rigor, use ofC, use
of basic algorithms, information research etc.

As a graphic design project,cub3Dwill enable you to improve your skills in these
areas: windows, colors, events, fill shapes, etc.

To concludecub3Dis a remarkable playground to explore the playful practical appli-
cations of mathematics without having to understand the specifics.

With the help of the numerous documents available on the internet, you will use
mathematics as a tool to create elegant and efficient algorithms.

# Mandatory part - cub3D

```
Program name cub3D
Turn in files All your files
Makefile all, clean, fclean, re, bonus
Arguments a map in format *.cub
External functs.
```
- open, close, read, write,
    printf, malloc, free, perror,
    strerror, exit
- All functions of the math
    library (-lm man man 3 math)
- All functions of the MinilibX

```
Libft authorized Yes
Description You must create a “realistic” 3D graphical
representation of the inside of a maze from a
first person perspective. You have to create this
representation using the Ray-Casting principles
mentioned earlier.
```
```
The constraints are as follows:
```
- Youmustuse theminiLibX. Either the version that is available on the operating
    system, or from its sources. If you choose to work with the sources, you will
    need to apply the same rules for your libftas those written above inCommon
    Instructionspart.
- The management of your window must remain smooth: changing to another win-
    dow, minimizing, etc.
- Display different wall textures (the choice is yours) that vary depending on which
    side the wall is facing (North, South, East, West).

- Your program must be able to display an item (sprite) instead of a wall.
- Your program must be able to set the floor and ceilling colors to two different ones.
- In case theDeepthoughthas eyes one day to evaluate your project, your program
    must save the first rendered image in bmp format when its second argument is
    "––save".
- If no second argument is supllied, the program displays the image in a window and
    respects the following rules:

```
◦ The left and right arrow keys of the keyboard must allow you to look left and
right in the maze.
```
```
◦ The W, A, S and D keys must allow you to move the point of view through
the maze.
```
```
◦ PressingESCmust close the window and quit the program cleanly.
```
```
◦ Clicking on the red cross on the window’s frame must close the window and
quit the program cleanly.
```
```
◦ If the declared screen size in the map is greater than the display resolution,
the window size will be set depending to the current display resolution.
```
```
◦ The use ofimagesof theminilibXis strongly recommended.
```
- Your program must take as a first argument a scene description file with the.cub
    extension.

```
◦ The map must be composed of only 4 possible characters: 0 for an empty
space, 1 for a wall, 2 for an item and N , S , E or W for the player’s start
position and spawning orientation.
This is a simple valid map:
111111
100101
102001
1100N
111111
```
```
◦ The map must be closed/surrounded by walls, if not the program must return
an error.
```
```
◦ Except for the map content, each type of element can be separated by one or
more empty line(s).
```
```
◦ Except for the map content which always has to be the last, each type of
element can be set in any order in the file.
```
```
◦ Except for the map, each type of information from an element can be separated
by one or more space(s).
```
```
◦ The map must be parsed as it looks like in the file. Spaces are a valid part of
the map, and is up to you to handle. You must be able to parse any kind of
map, as long as it respects the maps rules.
```


```
◦ Each element (except the map) firsts information is the type identifier (com-
posed by one or two character(s)), followed by all specific informations for each
object in a strict order such as :
∗ Resolution:
R 1920 1080
```
```
· identifier: R
· x render size
· y render size
∗ North texture:
NO ./path_to_the_north_texture
```
```
· identifier: NO
· path to the north texure
∗ South texture:
SO ./path_to_the_south_texture
```
```
· identifier: SO
· path to the south texure
∗ West texture:
WE ./path_to_the_west_texture
```
```
· identifier: WE
· path to the west texure
∗ East texture:
EA ./path_to_the_east_texture
```
```
· identifier: EA
· path to the east texure
∗ Sprite texture:
S ./path_to_the_sprite_texture
```
```
· identifier: S
· path to the sprite texure
∗ Floor color:
F 220,100,
```
```
· identifier: F
· R,G,B colors in range [0,255]: 0, 255, 255
```

```
∗ Ceilling color:
C 225,30,
```
```
· identifier: C
· R,G,B colors in range [0,255]: 0, 255, 255
```
```
◦ Example of the mandatory part with a minimalist .cub scene:
```
```
R 1920 1080
NO ./path_to_the_north_texture
SO ./path_to_the_south_texture
WE ./path_to_the_west_texture
EA ./path_to_the_east_texture
S ./path_to_the_sprite_texture
F 220,100,
C 225,30,
1111111111111111111111111
1000000000110000000000001
1011000001110000002000001
1001000000000000000000001
111111111011000001110000000000001
100000000011000001110111111111111
11110111111111011100000010001
11110111111111011101010010001
11000000110101011100000010001
10002000000000001100000010001
10000000000000001101010010001
11000001110101011111011110N
11110111 1110101 101111010001
11111111 1111111 111111111111
```
```
◦ If any misconfiguration of any kind is encountered in the file, the program
must exit properly and return "Error\n" followed by an explicit error message
of your choice.
```

# Bonus part

- Wall collisions.
- A skybox.
- Floor and/or ceiling texture.
- An HUD.
- Ability to look up and down.
- Jump or crouch.
- A distance related shadow effect.
- Life bar.
- More items in the maze.
- Object collisions.
- Earning points and/or losing life by picking up objects/traps.
- Doors which can open and close.
- Secret doors.
- Animations of a gun shot or animated sprite.
- Several levels.
- Sounds and music.
- Rotate the point of view with the mouse.

- Weapons and bad guys to fight!
