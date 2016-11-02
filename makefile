Electronic_Pet: main.o second.o
	g++ $^ -o $@

main.o: main.cpp second.h
	g++ -c $< -o $@

second.o: second.cpp second.h
	g++ -c $< -o $@

clean:
	rm -f *.o main

.PHONY: clean
