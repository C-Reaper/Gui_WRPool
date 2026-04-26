# Project README

## Overview
The project is a Water Ripple Pool simulation implemented in C. It uses custom libraries and windowing APIs to render and interact with the water ripple effect.

## Features
- Water Ripple Pool simulation
- Mouse interaction to create ripples
- Clear screen functionality
- Basic window management (setup, update, delete)

## Project Structure

### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools
- Libraries needed:
  - X11 for Linux windowing
  - user32, gdi32, winmm for Windows windowing
  - emcc for WebAssembly

## Build & Run
### Linux
To build and run the project on Linux:

```sh
cd <Project>
make -f Makefile.linux all
make -f Makefile.linux exe
```

### Windows
To build and run the project on Windows:

```sh
cd <Project>
make -f Makefile.windows all
make -f Makefile.windows exe
```

### Wine
To cross-compile for Windows using Wine on Linux:

```sh
cd <Project>
make -f Makefile.wine all
make -f Makefile.wine exe
```

### WebAssembly (Emscripten)
To build and run the project as a WebAssembly module:

```sh
cd <Project>
make -f Makefile.web all
make -f Makefile.web exe
```

---

## Files

- **src/**: Contains the source code.
  - **Main.c**: The entry point of the program.
  - **WRPool.h**: Header file for the WRPool library.
- **Makefile.linux**: Build configuration for Linux.
- **Makefile.windows**: Build configuration for Windows.
- **Makefile.wine**: Build configuration for Wine cross-compilation.
- **Makefile.web**: Build configuration for WebAssembly.
- **README.md**: This file.

## License
The project is licensed under the MIT License.