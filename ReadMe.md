## Injector -- пример sql инъекции

### Как запускать на macOS?
0. Устанавливаем систему сборки cmake  
   `brew install cmake`
1. Устанавливаем менеджер пакетов vcpkg 
   `brew install vcpkg`
2. Загружаем зависимость restinio (веб-сервер)
   `vcpkg install restinio`
3. Подготавливаем cmake к сборке в текущей директории
   ```
   cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=/usr/local/Cellar/vcpkg/2020.07/libexec/scripts/buildsystems/vcpkg.cmake -G "Unix Makefiles" .
   ```
4. Собираем проект  
   `cmake --build . --target all`
5. Запускаем  
   `./Injector`