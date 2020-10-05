# all: runner another_runner
# runner: runner.cpp hello.cpp
# 	g++ runner.cpp hello.cpp -o runner
# another_runner:
# 	g++ runner.cpp hello.cpp -o another_runner

compiler = g++

first = runner

second = another_runner

all: $(first) $(second)

$(first): $(first).cpp hello.h
	g++ $(first).cpp hello.cpp -o $(first)

$(second): $(first).cpp hello.h
	g++ $(first).cpp hello.cpp -o $(second)

remove:
	$(RM) -f $(first) $(second)