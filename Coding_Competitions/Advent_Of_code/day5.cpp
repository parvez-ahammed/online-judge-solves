#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

struct node {
    ll destination;
    ll source;
    ll range;
};

vector<ll> takeSeeds(string breaker)
{
    string s;
    cin >> s;

    vector<ll> v;

    while (true) {
        cin >> s;

        if (s == breaker)
            break;

        v.push_back(stoll(s));
    }

    return v;
}

vector<node> takeMapInput(string breaker)
{
    vector<node> v;

    string s;
    cin >> s;

    while (true) {
        cin >> s;

        if (s == breaker)
            break;

        node n;
        n.destination = stoll(s);

        cin >> s;
        n.source = stoll(s);

        cin >> s;
        n.range = stoll(s);

        v.push_back(n);
    }

    return v;
}
void printMap(vector<node> v)
{
    for (auto i : v) {
        cout << i.destination << " " << i.source << " " << i.range << endl;
    }
    cout << endl;
}

vector<node> takeMapInput()
{
    vector<node> v;

    string s;
    cin >> s;

    while (cin >> s) {

        node n;
        n.destination = stoll(s);

        cin >> s;
        n.source = stoll(s);

        cin >> s;
        n.range = stoll(s);

        v.push_back(n);
    }

    return v;
}
void solve()
{

    vector<ll> seeds = takeSeeds("seed-to-soil");
    vector<node> seedToSoil = takeMapInput("soil-to-fertilizer");
    vector<node> soilToFertilizer = takeMapInput("fertilizer-to-water");
    vector<node> fertilizerToWater = takeMapInput("water-to-light");
    vector<node> waterToLight = takeMapInput("light-to-temperature");
    vector<node> lightToTemperature = takeMapInput("temperature-to-humidity");
    vector<node> temperatureToHumidity = takeMapInput("humidity-to-location");
    vector<node> humidityToLocation = takeMapInput();

    cout << "seeds: ";
    for (auto i : seeds) {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    cout << "seedToSoil: " << endl;
    printMap(seedToSoil);

    cout << "soilToFertilizer: " << endl;
    printMap(soilToFertilizer);

    cout << "fertilizerToWater: " << endl;
    printMap(fertilizerToWater);

    cout << "waterToLight: " << endl;
    printMap(waterToLight);

    cout << "lightToTemperature: " << endl;
    printMap(lightToTemperature);

    cout << "temperatureToHumidity: " << endl;
    printMap(temperatureToHumidity);

    cout << "humidityToLocation: "<< endl;
    printMap(humidityToLocation);

    cout << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}