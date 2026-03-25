namespace Sample
{
    internal class WalkState : State
    {
        public WalkState()
        {
            _name = "WalkState";
        }

        public override void Enter()
        {
            Console.WriteLine("WalkState called Enter");
        }

        public override void Execute()
        {
            Console.WriteLine("IdleState called Execute");
        }

        public override void Exit()
        {
            Console.WriteLine("IdleState called Exit");
        }
    }
}
