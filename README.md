# cmake-example-project
Winding up using CMake or associated wrappers a lot lately so experimenting a little bit to learn how it works. Basic project as a starting ground. 

Files structure for this project is as follows: 
```
.
├── CMakeLists.txt
├── bin
├── build
├── build.sh
├── src
│   ├── CMakeLists.txt
│   ├── class.cpp
│   ├── include
│   │   └── class.hpp
│   └── test
│       ├── CMakeLists.txt
│       └── test-class.cpp
└── targets
    ├── CMakeLists.txt
    └── simple-program.cpp


```

Intent is that: 
* bin - cmake binary output 
* build - all cmake output
* src - library for all canonically related code 
* targets - any `main` files expected to build output. 
    * intent is 1 targets folder to avoid a ton of `CMakeLists.txt` files.