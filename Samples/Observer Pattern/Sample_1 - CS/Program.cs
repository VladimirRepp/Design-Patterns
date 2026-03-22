namespace Sample_Observer
{
    class Programm
    {
        static void Main()
        {
            Player player = new();

            player.AddObserver(new HPBar());
            player.AddObserver(new UI());
            player.AddObserver(new PlayerSoundController());
            player.AddObserver(new AIEnemy());

            Random rand = new Random();
            int new_hp = 0;

            // Имитация игрового жизненного цикла
            for (int i = 0; i < 10; i++) {
                new_hp = rand.Next(0, 10);

                Console.WriteLine($"Iterarion #{i + 1}");
                Console.WriteLine($"New HP = {new_hp}");

                player.СhangeHP(new_hp);
                Console.WriteLine($"Current HP = {player.HP}");

                Console.WriteLine();

                // Пример вывода:
                // Iterarion #9
                // New HP = 7
                // [Log]: HPBar called Update!
                // [Log]: UI called Update!
                // [Log]: PlayerSoundController called Update!
                // [Log]: AIEnemy called Update!
                // Current HP = 7

                // Iterarion #10
                // New HP = 0
                // Current HP = 7
            }
        }
    }
}
