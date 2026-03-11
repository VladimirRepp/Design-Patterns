namespace Task_0
{
    internal class Player
    {
        private IWeaponStrategy _weaponStrategy;

        // Анализ проблемы: 
        // Нарушение открытости-закрытости
        // Для добавление нового оружия, нужно переписать код 
        // Длинная лестница if-else

        // Было так:
        //public void Attack(string weapon_type)
        //{
        //    if (weapon_type == "Sword")
        //        Console.WriteLine("Sword Attack!");

        //    if (weapon_type == "Bow")
        //        Console.WriteLine("Bow Attack!");

        //    if (weapon_type == "Magic")
        //        Console.WriteLine("Magic Attack!");
        //}

        // Стало: 
        public void SetWeaponStrategy(IWeaponStrategy weaponStrategy)
        {
            _weaponStrategy = weaponStrategy;
        }

        public void Attack()
        {
            if (_weaponStrategy == null)
            {
                Console.WriteLine("WeaponStrategy is NULL!");
                return;
            }

            _weaponStrategy.Attack();
        }
    }
}
