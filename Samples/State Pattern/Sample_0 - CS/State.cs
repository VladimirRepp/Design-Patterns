namespace Sample
{
    internal abstract class State
    {
        protected string _name;

        public string GetName => _name;

        public abstract void Enter();
        public abstract void Execute();
        public abstract void Exit();
    }
}
