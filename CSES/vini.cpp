#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Material {
    int quantity_available;
    int quantity_needed;
    int cost_of_one_unit;
    int selling_price;
    double profit_margin; // profit margin per unit
};

bool compareMaterials(const Material& a, const Material& b) {
    return a.profit_margin > b.profit_margin;
}

int maxEarnings(int N, int M, vector<Material>& materials) {
    sort(materials.begin(), materials.end(), compareMaterials);

    int totalEarnings = 0;

    for (int i = 0; i < M; ++i) {
        int quantityToBuy = min(materials[i].quantity_available, N / materials[i].cost_of_one_unit);
        totalEarnings += quantityToBuy * materials[i].selling_price;
        N -= quantityToBuy * materials[i].cost_of_one_unit;
    }

    return totalEarnings;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<Material> materials(M);

    for (int i = 0; i < M; ++i) {
        cin >> materials[i].quantity_available;
    }

    for (int i = 0; i < M; ++i) {
        cin >> materials[i].quantity_needed;
    }

    for (int i = 0; i < M; ++i) {
        cin >> materials[i].cost_of_one_unit;
    }

    for (int i = 0; i < M; ++i) {
        cin >> materials[i].selling_price;
        materials[i].profit_margin = static_cast<double>(materials[i].selling_price) / materials[i].cost_of_one_unit;
    }

    int result = maxEarnings(N, M, materials);

    cout << result << endl;

    return 0;
}