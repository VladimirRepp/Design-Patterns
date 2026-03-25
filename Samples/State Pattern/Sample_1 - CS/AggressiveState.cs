namespace Sample
{
    internal class AggressiveState : State
    {
        public override void Enter()
        {
            Console.WriteLine($"[{_enemy.GetName}.AggressiveState]: called Enter!");
        }

        public override void Exit()
        {
            Console.WriteLine($"[{_enemy.GetName}.AggressiveState]: called Exit!");
        }

        public override void Update()
        {
            Console.WriteLine($"[{_enemy.GetName}.AggressiveState]: called Update!");
        }
    }
}
