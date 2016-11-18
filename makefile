.PHONY : clean

Executable : test.o ListeT.o Trajet.o TrajetSimple.o Catalogue.o
	g++ -o Executable test.o ListeT.o Trajet.o TrajetSimple.o Catalogue.o

test.o : test.cpp
	g++ -c test.cpp

ListeT.o : ListeT.cpp ListeT.h
	g++ -c ListeT.cpp

Trajet.o : Trajet.cpp Trajet.h
	g++ -c Trajet.cpp

TrajetSimple.o : TrajetSimple.cpp TrajetSimple.h
	g++ -c TrajetSimple.cpp

Catalogue.o : Catalogue.cpp Catalogue.h
	g++ -c Catalogue.cpp

clean :
	rm -f *.o core
