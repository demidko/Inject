## Injector --заведомо не рабочий в реальности пример sql инъекции на C++ 

### Как собирать?
1. Устанавливаем менеджер зависимостей vcpkg, например:  
   ```brew install vcpkg```
1. Загружаем зависимость restinio (веб-сервер)  
   ```vcpkg install restinio```
1. Находим путь для параметра cmake `-DCMAKE_TOOLCHAIN_FILE`
   ```vcpkg integrate install```
1. Подготавливаем cmake к сборке используя подходящий cmake generator, например:
   ```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=см./пункт/выше -G "Unix Makefiles" .```
1. Собираем проект  
   ```cmake --build . --target all```
