namespace Sample
{
    internal class RunState : State
    {
        public RunState()
        {
            _name = "RunState";
        }

        public override void Enter()
        {
            Console.WriteLine("RunState called Enter");
        }

        public override void Execute()
        {
            Console.WriteLine("RunState called Execute");
        }

        public override void Exit()
        {
            Console.WriteLine("RunState called Exit");
        }
    }
}
