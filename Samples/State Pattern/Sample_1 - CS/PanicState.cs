namespace Sample
{
    internal class PanicState : State
    {
        public override void Enter()
        {
            Console.WriteLine($"[{_enemy.GetName}.PanicState]: called Enter!");
        }

        public override void Exit()
        {
            Console.WriteLine($"[{_enemy.GetName}.PanicState]: called Exit!");
        }

        public override void Update()
        {
            Console.WriteLine($"[{_enemy.GetName}.PanicState]: called Update!");
        }
    }
}
