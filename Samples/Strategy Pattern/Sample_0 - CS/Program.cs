using Task_0;

Player player = new Player();

player.Attack();

player.SetWeaponStrategy(new GunWeaponStrategy());
player.Attack();

player.SetWeaponStrategy(new MagicWeaponStrategy());
player.Attack();
