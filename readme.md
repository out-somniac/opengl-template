# OpenGL template
This is an OpenGL template for small projects.

## Setup
Use git and cmake to set the entire project up
This project uses git submodules. After cloning use:
```
git submodule init
git submodule update
```
This will clone and prepare the dependencies.
You can now use cmake to create a configuration:
```
cmake -S . -B build
```
and build the project:
```
cmake --build build/
```
