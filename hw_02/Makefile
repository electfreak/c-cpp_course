FLAGS=-std=c++17 -Iinclude

huffman: obj/main.o obj/HuffCodes.o obj/HuffmanArchiver.o
	g++ obj/*.o -o huffman

obj/HuffCodes.o: include/HuffCodes.h src/HuffCodes.cpp
	g++ -c src/HuffCodes.cpp $(FLAGS) -o obj/HuffCodes.o

obj/HuffmanArchiver.o: include/HuffmanArchiver.h src/HuffmanArchiver.cpp
	g++ -c src/HuffmanArchiver.cpp $(FLAGS) -o obj/HuffmanArchiver.o

obj/main.o: src/main.cpp include/HuffmanArchiver.h include/HuffCodes.h include/Exception.h | obj
	g++ -c src/main.cpp $(FLAGS) -o obj/main.o

obj: 
	mkdir obj

.PHONY: test
test: include/HuffmanArchiver.h include/HuffCodes.h
	g++ $(FLAGS) test/test.cpp -o test/hw_02_test

.PHONY: clean
clean:
	rm -rf obj huffman test/hw_02_test test/out