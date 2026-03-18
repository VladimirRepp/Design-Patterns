namespace Sample
{
    internal class Program
    {
        // Задача: создать врагов относительно уровня игрока 

        static void Main(string[] args)
        {
            Player player = new();
            IEnemy enemy = null;

            player.Level = 1;

            // Проблема: код создания объектов находится где то в коде 
            //if (player.Level < 5)
            //{
            //    enemy = new Skeleton();
            //}
            //else if (player.Level >= 5 && player.Level < 10)
            //{
            //    enemy = new Ork();
            //}
            //else
            //{
            //    enemy = new Dragon();
            //}

            // Решение: вынести создание объектов в отдельную сущность 
            EnemyFactory factory = new();
            enemy = factory.CreateEnemy(player.Level);

            if (enemy != null)
                enemy.Attack();
            else
                Console.WriteLine( "Enemy not define!");
            // Пример вывода:
            // "Skeleton is attacking!"
            // "Ork is attacking!"
            // "Dragon is attacking!"
        }
    }
}
