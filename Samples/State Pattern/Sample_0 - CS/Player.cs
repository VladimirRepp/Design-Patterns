namespace Sample
{
    internal class Player
    {
        private State _currentState = null;

        public void Update()
        {
            _currentState.Execute();
        }

        public void SetState(State new_state)
        {
            if (_currentState != null)
                _currentState.Exit();

            _currentState = new_state;
            _currentState.Enter();
        }
    }
}
