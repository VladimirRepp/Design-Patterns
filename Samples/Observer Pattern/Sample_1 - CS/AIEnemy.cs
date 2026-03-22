namespace Sample_Observer
{
    internal class AIEnemy : IHPObserver
    {
        public void Update(int hp)
        {
            Console.WriteLine("[Log]: AIEnemy called Update!");
        }
    }
}
