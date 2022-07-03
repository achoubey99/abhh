CC = g++
CPPFLAGS = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: bankapp

bankapp : $(OBJ)main.o $(OBJ)user.o $(OBJ)Account.o $(OBJ)transaction.o
	$(CC) -o bankapp $(OBJ)main.o $(OBJ)user.o $(OBJ)Account.o $(OBJ)transection.o
	mv bankapp $(BIN)
                    

$(OBJ)main.o: $(SRC)main.cpp
	$(CC) $(CPPFLAGS) $(SRC)main.cpp -I $(INCLUDE)
	mv main.o $(OBJ)	

$(OBJ)user.o: $(SRC)user.cpp
	$(CC) $(CPPFLAGS) $(SRC)user.cpp -I $(INCLUDE)
	mv user.o $(OBJ)	

$(OBJ)Account.o: $(SRC)Account.cpp
	$(CC) $(CPPFLAGS) $(SRC)Acount.cpp -I $(INCLUDE)
	mv Account.o $(OBJ)


$(OBJ)transaction.o: $(SRC)transaction.cpp
	$(CC) $(CPPFLAGS) $(SRC)transaction.cpp -I $(INCLUDE)
	mv transaction.o $(OBJ)



clean:
	rm -f  bankapp *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)bankapp
			
