# miniRT
This project is an introduction to the beautiful world of Raytracing.\
by [shackbei](https://github.com/shackbei) & [pweinstock](https://github.com/pweinstock)
## Description

The task in this project is to implement a raytracing algorithm to render computer-generated images, using the 42 graphics library [MLX42](https://github.com/codam-coding-college/MLX42).
The requirements include:

- 3 geometric objects: plane, sphere, cylinder
- variable object size
- rotation and translation of objects
- lighting system: diffuse light, ambient light
- configuration of scenes using a scene file with all relevant information

The bonus part consists of:

- specular reflections
- checkerboard coloring
- multiple light sources
- another 3D object
- textures
## How to Use

The only supported and tested operating systems is __macOS__ .

Clone this repository:
```
git clone https://github.com/pweinstock/miniRT.git
```
Change to the cloned directory and build the project:
```
cd miniRT && make
```
Run the program using our scene file template:
```
./miniRT scenes/<scene>.rt
```

|Action                       |Controls                                            |
|---------------------------- |:--------------------------------------------------:|
|Move: up down left right     | :arrow_up: :arrow_down: :arrow_left: :arrow_right: |
|Move: forwards backwards     |W S (mouse-wheel)                                   |
|Turn: left right             |A D                                                 |
|Turn: anywhere               |mouse-click                                         |
|Screenshot                   |P                                                   |
|Exit                         |ESC                                                 |

Pressing `P` creates a `.bmp`file that is stored in the `pictures` directory.
## Examples
![cornellbox](https://github.com/pweinstock/miniRT/assets/37242263/8cab7920-72a3-4a6b-ae7c-84781c3b8ba6)
![hall](https://github.com/pweinstock/miniRT/assets/37242263/fc2bf1fc-cdb9-4e75-91d5-06c735761d30)
![mirrors](https://github.com/pweinstock/miniRT/assets/37242263/cc959104-deea-429b-9343-063618b7e6a0)
