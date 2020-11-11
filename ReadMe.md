## Inject - пример игрушечных SQL инъекций

Представляет собой наносервис для регистрации пользователей с простым UI (и намеренно заложенными ошибками проектирования).
Поскольку это C++ и здесь мы не ищем легких путей, перед запуском придется пройти квест по сборке приложения.

### Как собирать?
1. Устанавливаем систему сборки cmake.
1. Устанавливаем менеджер C++ зависимостей vcpkg:  
   https://github.com/microsoft/vcpkg#getting-started  
   Не забудьте сделать команду vcpkg исполняемой в шелле.
1. Загружаем с его помощью библиотеку веб-сервера restinio:  
   ```vcpkg install restinio```
1. Находим путь к тулчейн-файлу для интеграции cmake с vcpkg:  
   ```vcpkg integrate install```  
   Отображенный путь понадобится нам для передачи с параметром `-DCMAKE_TOOLCHAIN_FILE`
1. Подготавливаем cmake к сборке с оптимизациями:  
   ```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=см./пункт/выше -G "Unix Makefiles" -B bin``` 
   
   Параметр `-G` отличается на разных ОС и зависит от внешних инструментов. Найти подходящий вам можно здесь:  
   https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html
1. Собираем проект:  
   ```cmake --build bin --target all```

### Как запускать?
* На Windows:  
  В любом шелле запущенном от имени администратора: `Inject/Inject`
* На macOS, Linux:  
  `sudo Inject/Inject`