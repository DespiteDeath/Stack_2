# Stack_2

## TODO:

- [X] 1. Необходимо добавить метод empty для класа stack.
- [X] 2. Необходимо добавить примеры для всех методов.
- [X] 3. Необходимо добавить конфигурационный файл CMakeLists.txt
- [X] 4. Обеспечить сборку с примерами и сборку без примеров

# Tutorial

## Структура репозитория:

```bash
$ tree repo
examples/
- init.cpp
- push.cpp
- pop.cpp
- empty.cpp
include/
- stack.hpp
sources/
- main.cpp
CMakeLists.txt
README.md
```

Скрипты для п.4 (1)
```bash
# сборка без примеров
$ cd repo
$ cmake -H. -B_builds
$ cmake --builds _builds
```

Скрипты для п.4 (2)
```bash
# сборка с примерами
$ cd repo
$ cmake -H. -B_builds -DBUILD_EXAMPLES=ON
$ cmake --builds _builds
$ ls _builds/init  # [✔]
$ ls _builds/pop   # [✔] 
$ ls _builds/push  # [✔]
$ ls _builds/empty # [✔]
```
