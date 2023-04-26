WeiMingHu NoC Project
=======================

## Try your sbt
There are two ways to build this project by sbt: use terminal command or sbt shell.

### Terminal command
A Makefile is provided. Under linux, you can simply use make commands.
```
// compile project
> make compile

// generate verilog file
> make verilog

// delete generated files
> make clean
```

### sbt shell
If you don't have linux environment, you have to input whole command lines.

In order to speed up compiling, enter sbt shell first:
```
// enter sbt shell
> sbt

// compile project
> compile

// generate verilog
> test:runMain gcd.TestTop -td ./build
```

The generated verilog files will be in ./build directory.
