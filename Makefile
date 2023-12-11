EXEC=b.out
OBJ_DIR=./obj
SRC=Vector.cpp Matrix.cpp Solver.cpp main.cpp
OBJ1=$(SRC:.cpp=.o)
OBJ=$(patsubst %.o, $(OBJ_DIR)/%.o, $(OBJ1))

.SUFFIXES: .o .cpp
all: ${EXEC}
	@echo "Hello world!" ${OBJ} ${OBJ1}

${EXEC}: ${OBJ}
	g++ -o ${EXEC} ${OBJ}

${OBJ_DIR}/main.o: main.cpp
	g++ -c $< -o $@

${OBJ_DIR}/%.o: %.cpp 
	g++ -c $< -o $@



