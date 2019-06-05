# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("if")

# Включите подпроекты.
add_executable(for "for.c" "func1.c" "func2.c" "func3.c" "func4.c" "func5.c")
