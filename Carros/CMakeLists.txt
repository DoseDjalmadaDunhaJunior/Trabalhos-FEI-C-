cmake_minimum_required(VERSION 3.9)
project(Carros)

set(CMAKE_CXX_STANDARD 17)

add_executable(Carros main.cpp Veiculo.cpp Veiculo.h Carro.cpp Carro.h Caminhao.cpp Caminhao.h Moto.cpp Moto.h Mundo.cpp Mundo.h)