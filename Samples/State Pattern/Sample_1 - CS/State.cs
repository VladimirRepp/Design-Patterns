namespace Sample
{
    internal abstract class State
    {
        protected Enemy _enemy;

        public Enemy MyEnemy
        {
            get => _enemy;
            set => _enemy = value;
        }

        public void SetEnemy(Enemy enemy)
        {
            _enemy = enemy;
        }

        public abstract void Enter();
        public abstract void Update();
	    public abstract void Exit();
    }
}
