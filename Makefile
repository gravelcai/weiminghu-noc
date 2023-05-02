init:
	git submodule update --init --recursive

compile:
	sbt compile

verilog:
	sbt "Test / runMain weiminghu.SimTop -td ./build"

clean:
	rm -rf ./build