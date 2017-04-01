# cpp-test

## Build with CMake and run
```
$ cd /path_to/cpp-test
$ cmake -H. -Bbuild && cmake --build build -- -j4 && ./build/bin/cpp-test
```

## Clean project
```
$ cd /path_to/cpp-test
$ rm -rf build
```

## Generate doxygen
```
$ cd /path_to/cpp-test
$ doxygen && open html/index.html
```
