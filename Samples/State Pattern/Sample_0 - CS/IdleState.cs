namespace Sample
{
    internal class IdleState : State
    {
        public IdleState()
        {
            _name = "IdleState";
        }

        public override void Enter()
        {
            Console.WriteLine("IdleState called Enter");
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
