namespace Sample
{
    internal class Enemy
    {
        private IMove? _moveStrategy = null;

        public void SetMoveStrategy(IMove moveStrategy)
        {
            _moveStrategy = moveStrategy;
        }

        public void Move()
        {
            // _moveStrategy?.Move(); 
            // или 
            if (_moveStrategy != null)
                _moveStrategy.Move();
            else
                Console.WriteLine("_moveStrategy is null!");
        }

        public void Move(string type)
        {
            // Проблема: много вариантов поведения
            // Решение: поведение вынести в отдельные классы

            if (type == "Walk")
                Console.WriteLine("Enemy walking!");

            if (type == "Run")
                Console.WriteLine("Enemy running!");

            if (type == "Fly")
                Console.WriteLine("Enemy flying!");
        }
    }
}
