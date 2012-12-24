# file CMakeLists.txt

# esta primeira linha não é obrigatória. Mas o CMake às vezes reclama da
#ausência dela
cmake_minimum_required(VERSION 2.8)

# definição do nome do project. Não precisa ser obrigatoriamente o nome
#do diretório
PROJECT(AnalogClock)

FIND_PACKAGE(Qt4 REQUIRED)

#Arquivos fontes .cpp
SET(PRJ_SOURCES 
# 	src/
	src/main.cpp 
	src/analogclock.cpp
)

#Arquivos de cabeçalho .h que contenham a macro QObject
SET(PRJ_HEADERS 
# 	src/include
	src/include/analogclock.h
)

#Arquivos de interface .ui
set(PRJ_UIS
# 	ui/
)

#Arquivos de recursos .qrc
set(PRJ_RESOURCES
# 	resource/
)


#Comandos de compilação
QT4_WRAP_CPP(PRJ_HEADERS_MOC ${PRJ_HEADERS})
QT4_WRAP_CPP(PRJ_UIS_H ${PRJ_UIS})
QT4_WRAP_UI(PRJ_RESOURCES_CPP ${PRJ_RESOURCES})

INCLUDE(${QT_USE_FILE})

ADD_DEFINITIONS(${QT_DEFINITIONS})

ADD_EXECUTABLE(AnalogClock 
		${PRJ_SOURCES} 
		${PRJ_HEADERS_MOC}
		${PRJ_UIS_H}
		${PRJ_RESOURCES_CPP}
)

TARGET_LINK_LIBRARIES(AnalogClock ${QT_LIBRARIES})