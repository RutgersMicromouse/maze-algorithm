# Maze Algorithm Repository

This repository will contain the maze algorithm. Right now, it uses a left wall following algorithm.

## how to build

This uses a build tool known as cmake. This will make compilation much easier. There's a `CMakeLists.txt` file which describes what the final executable should look like.

```sh
mkdir build # if you didn't create a folder named build yet
cd build # go into build folder
cmake .. # generate make file and other components
make # compile your code
```


- This is expected to be used in conjunction with the micromouse maze simulator


## Documentation

https://github.com/mackorone/mms-cpp: the micromouse cpp api
https://github.com/mackorone/mms: The micromouse maze simulation program