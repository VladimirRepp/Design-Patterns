namespace Sample_Observer
{
    internal class HPBar : IHPObserver
    {
        public void Update(int hp)
        {
            Console.WriteLine("[Log]: HPBar called Update!");
        }
    }
}
