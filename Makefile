init:
	git submodule update --init
	cd rocket-chip && git submodule update --init api-config-chipsalliance hardfloat

compile:
	sbt compile

verilog:
	sbt "test:runMain gcd.TestTop -td ./build"

clean:
	rm -rf ./test_run_dir ./build