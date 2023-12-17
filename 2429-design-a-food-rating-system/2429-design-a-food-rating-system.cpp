class FoodRatings
{
    public:
    unordered_map<string, int> food_rating;
    unordered_map<string, set<pair<int, string>>> cousin_rating;
    unordered_map<string, string> food_cousin;

    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector< int > &ratings)
    {
        int n = foods.size();
        for (int i = 0; i < n; i++)
        {
            food_rating[foods[i]] = ratings[i];
            cousin_rating[cuisines[i]].insert({ -ratings[i],
                foods[i] });
            food_cousin[foods[i]] = cuisines[i];
        }
    }

    void changeRating(string food, int newRating)
    {
        int curr_rating = food_rating[food];
        food_rating[food] = newRating;
        string find_cusine = food_cousin[food];
        cousin_rating[find_cusine].erase({ -curr_rating,
            food });
        cousin_rating[find_cusine].insert({ -newRating,
            food });
    }

    string highestRated(string cuisine)
    {
        return cousin_rating[cuisine].begin()->second;
    }
};