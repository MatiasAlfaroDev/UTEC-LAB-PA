# Configuración básica
CXX      := g++
CXXFLAGS := -std=c++11 -Wall -Iinclude
LDFLAGS  := 
TARGET   := programa

# Directorios
SRCDIR   := src
INCDIR   := include
BUILDDIR := build

# Archivos fuente y objetos (automáticos)
SOURCES  := $(wildcard $(SRCDIR)/*.cpp)
OBJECTS  := $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SOURCES))

# Regla principal
all: $(BUILDDIR) $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ -o $@

# Regla para objetos
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Crear directorio build si no existe
$(BUILDDIR):
	mkdir $(BUILDDIR)

# Limpieza (portable para Windows/Unix)
clean:
ifeq ($(OS),Windows_NT)
	del /S /Q $(BUILDDIR)\*.o $(TARGET).exe 
	rmdir /S /Q $(BUILDDIR)
else
	rm -rf $(BUILDDIR) $(TARGET)
endif

.PHONY: all clean