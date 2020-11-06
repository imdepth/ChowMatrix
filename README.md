# CHOW Matrix

[![Build Status](https://travis-ci.com/Chowdhury-DSP/ChowMatrix.svg?token=Ub9niJrqG1Br1qaaxp7E&branch=main)](https://travis-ci.com/Chowdhury-DSP/ChowMatrix)
[![License](https://img.shields.io/badge/License-BSD-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

CHOW Matrix is a delay effect, made up of an inifintely growable tree
of delay lines, each with individual controls for feedback, panning, 
distortion, and more.

## TODO
- [ ] Presets
- [ ] Auto-updating


## Building

To build from scratch, you must have CMake installed.

```bash
# Clone the repository
$ git clone https://github.com/Chowdhury-DSP/ChowMatrix.git
$ cd ChowMatrix

# initialize and set up submodules
$ git submodule update --init --recursive

# build with CMake
$ cmake -Bbuild
$ cmake --build build --config Release
```

## License

ChowMatrix is open source, and is licensed under the BSD 3-clause license.
Enjoy!
