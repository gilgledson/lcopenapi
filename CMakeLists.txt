cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(lcopensdk VERSION 1.0)

# Ativa o uso de pastas padrão do GNU (lib, include, bin, etc.)
include(GNUInstallDirs)

# Configura as variáveis de caminho
set(HEADER_FILES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(LIB_FILES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/lib")
set(BIN_FILES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/bin")

# Verifica e instala cabeçalhos
set(HEADER_FILES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

# Verifica se a pasta existe e copia os headers preservando a estrutura
if(EXISTS "${HEADER_FILES_DIR}")
    install(DIRECTORY "${HEADER_FILES_DIR}/"
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
        FILES_MATCHING PATTERN "*.h"
    )
else()
    message(WARNING "Diretório de cabeçalhos não encontrado: ${HEADER_FILES_DIR}")
endif()

# Verifica e instala bibliotecas estáticas (.lib)
file(GLOB LIB_FILES "${LIB_FILES_DIR}/*.lib")
if (LIB_FILES)
    install(FILES ${LIB_FILES}
        DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
else()
    message(WARNING "Nenhuma biblioteca encontrada em ${LIB_FILES_DIR}")
endif()

# Verifica e instala bibliotecas dinâmicas (.dll)
file(GLOB BIN_FILES "${BIN_FILES_DIR}/*.dll")
if (BIN_FILES)
    install(FILES ${BIN_FILES}
        DESTINATION ${CMAKE_INSTALL_BINDIR}
    )
else()
    message(WARNING "Nenhum arquivo DLL encontrado em ${BIN_FILES_DIR}")
endif()

# Gera e instala o arquivo de configuração lcopensdk-config.cmake
include(CMakePackageConfigHelpers)
configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/lcopensdk-config.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/lcopensdk-config.cmake"
    INSTALL_DESTINATION ${CMAKE_INSTALL_DATADIR}/lcopensdk
)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/lcopensdk-config.cmake"
    DESTINATION ${CMAKE_INSTALL_DATADIR}/lcopensdk
)

