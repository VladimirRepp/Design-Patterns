namespace Sample_Observer
{
    internal class UI : IHPObserver
    {
        public void Update(int hp)
        {
            Console.WriteLine("[Log]: UI called Update!");
        }
    }
}
