#include <iostream>
#include <string>
#include <vector>
using namespace std;

class HashTable {
public:
    HashTable(size_t size) : table(size), filled(0) {}

    void insert(const string& key) {
        if (filled * 2 >= table.size()) {
            rehash();
        }

        size_t index = hash(key);
        while (table[index].first != "" && table[index].first != key) {
            index = (index + 1) % table.size();
        }

        if (table[index].first == "") {
            filled++;
        }
        table[index].first = key;
        table[index].second++;
    }

    int search(const string& key) {
        size_t index = hash(key);
        while (table[index].first != "" && table[index].first != key) {
            index = (index + 1) % table.size();
        }

        return table[index].second;
    }

private:
    vector<pair<string, int>> table;
    size_t filled;

    size_t hash(const string& key) {
        size_t value = 0;
        size_t power = 1;

        for (char ch : key) {
            value += ch * power;
            power *= 31;
        }

        return value % table.size();
    }

    void rehash() {
        vector<pair<string, int>> old_table = table;
        table.resize(table.size() * 2);
        filled = 0;

        for (const auto& entry : old_table) {
            if (entry.first != "") {
                insert(entry.first);
            }
        }
    }
};

int main() {
    HashTable ht(200);

    ht.insert("hello");
    ht.insert("world");
    ht.insert("test");
    ht.insert("world");

    cout << "hello: " << ht.search("hello") << endl;
    cout << "world: " << ht.search("world") << endl;
    cout << "test: " << ht.search("test") << endl;
    cout << "notfound: " << ht.search("notfound") << endl;

    return 0;
}
