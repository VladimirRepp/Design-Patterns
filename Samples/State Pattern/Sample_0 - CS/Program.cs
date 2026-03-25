namespace Sample
{
    internal class Program
    {
        // Проблема: объект имеет несколько состояний 
        // Задача: состояния игрока - покой, идти, бегать 
        static void Main(string[] args)
        {
            // Демонстрация решения с паттерном состояние 
            Player player = new Player();

            // Имитация жизненного цикла игры
            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine($"Iteration #{i + 1}");

                player.SetState(GetState());
                player.Update();

                Console.WriteLine();
            }

            // Пример вывода
            // Iteration #1
            // WalkState called Enter
            // WalkState called Execute

            // Iteration #2
            // WalkState called Exit
            // IdleState called Enter
            // IdleState called Execute

            // Iteration #3
            // IdleState called Exit
            // RunState called Enter
            // RunState called Execute
        }

        static State GetState()
        {
            Random rand = new Random();
            int randValue = rand.Next(0, 3);

            if(randValue == 0)
                return new IdleState();

            if (randValue == 0)
                return new WalkState();

            return new RunState();
        }
    }
}
