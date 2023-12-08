#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

struct node {
    ll destination;
    ll source;
    ll range;
};

vector<ll> seeds;
vector<node> seedToSoil;
vector<node> soilToFertilizer;
vector<node> fertilizerToWater;
vector<node> waterToLight;
vector<node> lightToTemperature;
vector<node> temperatureToHumidity;
vector<node> humidityToLocation;

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

ll getSoilforSeed(ll seed)
{
    return 1;
}

ll getFertilizerforSoil(ll soil)
{
    for (auto i : seedToSoil) {
        if (i.destination == soil) {
            return i.source;
        }
    }
}

ll getWaterforFertilizer(ll fertilizer)
{
    for (auto i : soilToFertilizer) {
        if (i.destination == fertilizer) {
            return i.source;
        }
    }
}

ll getLightforWater(ll water)
{
    for (auto i : fertilizerToWater) {
        if (i.destination == water) {
            return i.source;
        }
    }
}

ll getTemperatureforLight(ll light)
{
    for (auto i : waterToLight) {
        if (i.destination == light) {
            return i.source;
        }
    }
}

ll getHumidityforTemperature(ll temperature)
{
    for (auto i : lightToTemperature) {
        if (i.destination == temperature) {
            return i.source;
        }
    }
}

ll getLocationforHumidity(ll humidity)
{
    for (auto i : temperatureToHumidity) {
        if (i.destination == humidity) {
            return i.source;
        }
    }
}

void solve_part1()
{
    vector<ll> v;

    for (int i = 0; i < seeds.size(); i++) {
        ll seed = seeds[i];
        ll soil = getSoilforSeed(seed);
        ll fertilizer = getFertilizerforSoil(soil);
        ll water = getWaterforFertilizer(fertilizer);
        ll light = getLightforWater(water);
        ll temperature = getTemperatureforLight(light);
        ll humidity = getHumidityforTemperature(temperature);
        ll location = getLocationforHumidity(humidity);

        v.push_back(location);
    }

    sort(v.begin(), v.end());

    cout << v[0] << endl;
}
void solve()
{

    seeds = takeSeeds("seed-to-soil");
    seedToSoil = takeMapInput("soil-to-fertilizer");
    soilToFertilizer = takeMapInput("fertilizer-to-water");
    fertilizerToWater = takeMapInput("water-to-light");
    waterToLight = takeMapInput("light-to-temperature");
    lightToTemperature = takeMapInput("temperature-to-humidity");
    temperatureToHumidity = takeMapInput("humidity-to-location");
    humidityToLocation = takeMapInput();

    // cout << "seeds: ";
    // for (auto i : seeds) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << endl;

    // cout << "seedToSoil: " << endl;
    // printMap(seedToSoil);

    // cout << "soilToFertilizer: " << endl;
    // printMap(soilToFertilizer);

    // cout << "fertilizerToWater: " << endl;
    // printMap(fertilizerToWater);

    // cout << "waterToLight: " << endl;
    // printMap(waterToLight);

    // cout << "lightToTemperature: " << endl;
    // printMap(lightToTemperature);

    // cout << "temperatureToHumidity: " << endl;
    // printMap(temperatureToHumidity);

    // cout << "humidityToLocation: " << endl;
    // printMap(humidityToLocation);

    // cout << endl;

    solve_part1();
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