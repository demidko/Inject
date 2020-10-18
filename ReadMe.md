## Injector -- пример sql инъекции

### Как запускать на macOS?
*. Устанавливаем систему сборки cmake  
  `brew install cmake`
*. Устанавливаем менеджер пакетов vcpkg 
  `brew install vcpkg`
*. Проверяем путь к менеджеру пакетов (в дальнейшем именуется как $TOOLCHAIN)  
  `vcpkg integrate install`
*. Загружаем зависимость restinio (веб-сервер)
  `vcpkg install restinio`
*. Подготавливаем cmake к сборке в текущей директории
   ```
   cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=$TOOLCHAIN -G "Unix Makefiles" .
   ```
*. Собираем проект  
  `cmake --build . --target all`
*. Запускаем  
  `./Injector`