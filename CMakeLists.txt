# file CMakeLists.txt

# esta primeira linha não é obrigatória. Mas o CMake às vezes reclama da
#ausência dela
cmake_minimum_required(VERSION 2.6)

# definição do nome do project. Não precisa ser obrigatoriamente o nome
#do diretório
PROJECT(AnalogClock)

FIND_PACKAGE(Qt4 REQUIRED)

SET(AnalogClock_SOURCES 
	src/main.cpp 
	src/analogclock.cpp
)

SET(AnalogClock_HEADERS 
	src/include/analogclock.h
)

QT4_WRAP_CPP(AnalogClock_HEADERS_MOC ${AnalogClock_HEADERS})

INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

ADD_EXECUTABLE(AnalogClock ${AnalogClock_SOURCES} ${AnalogClock_HEADERS_MOC})

TARGET_LINK_LIBRARIES(AnalogClock ${QT_LIBRARIES})