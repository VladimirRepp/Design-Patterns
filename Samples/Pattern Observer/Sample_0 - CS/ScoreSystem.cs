namespace Sample 
{
    internal class ScoreSystem : IObserver
    {
        public void Update()
        {
            Console.WriteLine("ScoreSystem called Update!");
        }
    }
}
