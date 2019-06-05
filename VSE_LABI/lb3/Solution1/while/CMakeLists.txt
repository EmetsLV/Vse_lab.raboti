# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("while")

# Включите подпроекты.
add_executable(while "while.c" "task1.c" "task2.c" "task3.c" "task4.c" "task5.c")
