# AddOn_SomeStuff
Дополнение для архикада
## Возможности

### Синхронизация свойств и параметров GDL
Для записи значения GDL параметра в свойства необходимо:
1. Создать свойство с типом Критерий соответсвия (ИСТИНА/ЛОЖЬ). Имя - любое. В описании свойства написать **Sync_flag**
2. В описании обновляемого свойства указать имя параметра (как в GDL редакторе, латиницей) **Sync_from(*имя_параметра*)**
3. Добавляем команды расширения в меню через окружающую среду, выбираем нужную и работаем.

Доступно два варианта - разовая синхронизация выделенных элементов командой **Синхронизировать выделенные** и синхронизация всех доступных для редактирования элементов командой **Синхронизировать все**


## Совместимость с версиями:
Archicad WIN 24