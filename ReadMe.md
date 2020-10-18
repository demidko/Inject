## Injector -- пример sql инъекции

### Как запускать на macOS из директории репозитория?
1. Устанавливаем систему сборки cmake  `brew install cmake`
1. Устанавливаем менеджер пакетов vcpkg  `brew install vcpkg`
1. Загружаем зависимость restinio (веб-сервер)  `vcpkg install restinio`
1. Проверяем путь к менеджеру пакетов (в дальнейшем именуется как `$TOOLCHAIN`)  `vcpkg integrate install`
1. Подготавливаем cmake к сборке  
   `cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=$TOOLCHAIN -G "Unix Makefiles" .`
1. Собираем проект  `cmake --build . --target all`
1. Запускаем  `./Injector`