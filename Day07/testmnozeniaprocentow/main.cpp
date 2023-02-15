#include <iostream>

using namespace std;

float BaseRepVotingChanceModifier;
float RepWithRepModifier;
float FriendlyRepModifier = 0.2f;
float NeutralSenatorVoteChance = 0.5f;
float FinalVoteChance;

int main()
{
    BaseRepVotingChanceModifier = 0.5f;
    //RomeRepFriendly
    RepWithRepModifier = BaseRep + (FriendlyRepModifier * BaseRep);
    //RepWithRepModifier = 0.6f
    //SenatorApproach = Approach::Neutral
    FinalVoteChance = RepWithRepModifier + (RepWithRepModifier * NeutralSenatorVoteChance);
    //FinalVoteChance = 0.9f;

    return 0;
}
