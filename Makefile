
boardtest: test.o boardtest.o board.o global.o
	g++ -o boardtest test.o board.o boardtest.o global.o -lstdc++ -lcppunit -ldl

board.o: src/board.cpp src/board.h
	g++ -c src/board.cpp -Isrc

test.o: tests/test.cpp
	g++ -c tests/test.cpp -Itests/ -Isrc/

boardtest.o: tests/boardtest.cpp tests/boardtest.h
	g++ -c tests/boardtest.cpp -Itests/ -Isrc/

global.o: src/global.cpp
	g++ -c src/global.cpp -Isrc/

clean:
	rm -f *.o
	rm -f boardtest
