## Inject - пример игрушечных SQL инъекций

Представляет собой наносервис для регистрации пользователей с простым UI (и намеренно заложенными ошибками проектирования).

### Как собирать?
1. Устанавливаем менеджер C++ зависимостей vcpkg:  
   https://github.com/microsoft/vcpkg#getting-started
1. Загружаем с его помощью бибилотеку веб-сервера restinio:  
   ```vcpkg install restinio```
1. Находим путь к тулчейн-файлу для интеграции cmake с vcpkg:  
   ```vcpkg integrate install```
1. Подготавливаем cmake к сборке используя подходящий для вашей ОС cmake generator (-G):  
   ```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=см./пункт/выше -G "Unix Makefiles" -B bin```
1. Собираем проект:  
   ```cmake --build bin --target all```
  
