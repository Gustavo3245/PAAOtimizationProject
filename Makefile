# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra -g

# Arquivos fonte
SRC = main.c eft.c sjf.c lcf.c

# Objetos gerados a partir dos fontes
OBJ = $(SRC:.c=.o)

# Nome do executável final
TARGET = organizador_aulas

# Regra principal
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Regra genérica para compilar .c em .o
%.o: %.c types.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -f *.o $(TARGET)

# Atalho para compilar e rodar
run: $(TARGET)
	./$(TARGET)
