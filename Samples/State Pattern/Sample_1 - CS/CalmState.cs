namespace Sample
{
    internal class CalmState : State
    {
        public override void Enter()
        {
            Console.WriteLine($"[{_enemy.GetName}.CalmState]: called Enter!");
        }

        public override void Exit()
        {
            Console.WriteLine($"[{_enemy.GetName}.CalmState]: called Exit!");
        }

        public override void Update()
        {
            Console.WriteLine($"[{_enemy.GetName}.CalmState]: called Update!");
        }
    }
}
