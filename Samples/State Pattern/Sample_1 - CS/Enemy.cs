namespace Sample
{
    internal class Enemy
    {
        private string _name;
        private State _currentState;

        public string GetName => _name;

        public Enemy(string name)
        {
            _name = name;
        }
        public Enemy(string name, State state)
        {
            _name = name;
            SetState(state);
        }

        public void Update()
        {
            if (_currentState != null)
                _currentState.Update();
            else
                Console.WriteLine("[Enemy.Update.Error]: State set null!");
        }

        public void SetState(State newState)
        {
            if (_currentState != null)
                _currentState.Exit();

            _currentState = newState;

            _currentState.SetEnemy(this);
            _currentState.Enter();
        }
    }
}