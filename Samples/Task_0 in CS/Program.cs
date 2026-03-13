using Task_0;

// Полезная ссылка: https://refactoringu.ru/ru/design-patterns/strategy.html

Player player = new Player();

player.Attack();

player.SetWeaponStrategy(new GunWeaponStrategy());
player.Attack();

player.SetWeaponStrategy(new MagicWeaponStrategy());
player.Attack();

