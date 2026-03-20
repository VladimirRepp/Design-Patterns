namespace Sample
{
    internal class Program
    {
        // Задача: в игре (бесконенчый раннер) при событие "Монета собрана" нужно: 
        // - включить звук собранной монеты 
        // - увеличить счетчик собранных монет 
        // - сохранить результат 

        // Проблема: много систем должны реагировать на событие 
        // Решение: паттерн наблюдатель 
        static void Main(string[] args)
        {
            IObserver soundSystem = new SoundSystem();
            IObserver scoreSystem = new ScoreSystem();
            IObserver dataSystem = new DataSystem();

            Coin? coin = null;

            // Имитация игрового жизненного цикла 
            for (int i = 0; i < 10; i++) {
                Console.WriteLine($"Iteratin #{i}");

                coin = GetCoin();

                if(coin != null)
                {
                    soundSystem.Update();
                    scoreSystem.Update();
                    dataSystem.Update();
                }
                else
                {
                    Console.WriteLine("Coin not received!");
                }

                Console.WriteLine();
            }
        }

        static Coin? GetCoin() {
            // Шанс успеха 
            Random rand = new();
            int chance = rand.Next(0, 10);

            if (chance < 5)
                return null;

            return new Coin();
        }
    }
}
