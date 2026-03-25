namespace Sample
{
    internal class Player
    {
        private State _currentState = null;

        public void Update()
        {
            if(_currentState != null)
                _currentState.Execute();
            else
                Console.WriteLine("Player.Update.Error: State set null!");
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
