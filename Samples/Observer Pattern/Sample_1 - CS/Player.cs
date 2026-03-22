namespace Sample_Observer
{
    internal class Player
    {
        private int _hp;
        private List<IHPObserver> _hpObservers;

        public int HP => _hp;

        public Player()
        {
            _hpObservers = new();
        }

        public void СhangeHP(int new_hp)
        {
            if (new_hp == _hp)
                return;

            if (new_hp == 0)
                return;

            _hp = new_hp;
            NotifyObservers();
        }

        public void AddObserver(IHPObserver hpObserver)
        {
            _hpObservers.Add(hpObserver);
        }

        public void RemoveObserver(IHPObserver hpObserver)
        {
            _hpObservers.Remove(hpObserver);
        }

        public void ClearObservers()
        {
            _hpObservers.Clear();
        }

        private void NotifyObservers()
        {
            foreach (var o in _hpObservers)
                o.Update(_hp);
        }
    }
}
