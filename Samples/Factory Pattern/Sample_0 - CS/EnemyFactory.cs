namespace Sample
{
    internal class EnemyFactory
    {
        public IEnemy CreateEnemy(int playerLevel)
        {
            IEnemy enemy = null;

            if (playerLevel < 5)
            {
                enemy = new Skeleton();
            }
            else if (playerLevel >= 5 && playerLevel < 10)
            {
                enemy = new Ork();
            }
            else
            {
                enemy = new Dragon();
            }

            return enemy;
        }
    }
}
