class FoodRatings {
    unordered_map<string, set<pair<int, string>> > cToR;
    unordered_map<string, pair<pair<int, string>, string> > fToP;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); ++i){
            pair<int, string> p = {-ratings[i], foods[i]};
            cToR[cuisines[i]].insert(p);
            fToP[foods[i]] = {p, cuisines[i]};
        }
    }
    void changeRating(string food, int newRating) {
        auto& it = fToP[food];
        cToR[it.second].erase(it.first);
        it.first.first = -newRating;
        cToR[it.second].insert(it.first);
    }
    string highestRated(string cuisine) {
        return cToR[cuisine].begin()->second;
    }
};