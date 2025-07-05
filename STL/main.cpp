#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <forward_list>

void usingVector() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6); // добавить в конец

    std::cout << "Третий элемент: " << numbers[2] << std::endl;

    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void usingList() {
    std::list<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_front(6); // добавляем в начало списка

    numbers.remove(3); // удаляем элемент по значению

    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void usingDeque() {
    std::deque<int> numbers = {2, 3, 4};
    numbers.push_back(1); // в начало
    numbers.push_front(5); // в конец

    std::cout << "Первый элемент: " << numbers.front() << std::endl;
    std::cout << "Последний элемент: " << numbers.back() << std::endl;

    numbers.pop_front(); // удаление первого элемента

    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void usingSet() {
    std::set<int> numbers = {4, 2, 1, 3, 5};
    numbers.insert(6);
    numbers.insert(3); // дубликат не добавится

    if (numbers.find(4) != numbers.end()) {
        std::cout << "4 is in the set" << std::endl;
    }

    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void usingMultiset() {
    std::multiset<int> numbers = {5, 2, 1, 3, 2};
    numbers.insert(2); // дубликат добавится

    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void usingMap() {
    std::map<std::string, int> fruitCount = {{"apple", 2}, {"banana", 5}};
    fruitCount["orange"] = 4; // Новая пара ключ-значение

    std::cout << "Apples: " << fruitCount["apple"] << std::endl;
    std::cout << "Pineapple: " << fruitCount["pineapple"] << std::endl; // если нет значения, то вернет
                                                                        // дефолтное значение

    for(const auto& pair: fruitCount) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;
}

void usingMultimap() {
    std::multimap<std::string, int> fruitCount = {{"apple", 2}, {"apple", 3}, {"banana", 5}};
    fruitCount.insert({"apple", 1}); // добавляет еще одну пару ключ-значение

    // итерация по multimap
    auto range = fruitCount.equal_range("apple");
    for(auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }
    std::cout << std::endl;

    for (auto it = fruitCount.begin(); it != fruitCount.end(); ++it) {
        std::cout << it->first << ": " << it->second << '\n';
    }
}

void usingUnorderedSet() {
    std::unordered_set<int> numbers = {4, 1, 2, 3, 5, 10};
    numbers.insert(6); // добавляем новый элемент
    numbers.erase(10); // удаляем элемент

    if (numbers.find(4) != numbers.end()) {
        std::cout << "4 is in the set" << std::endl;
    }

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void usingUnorderedMap() {
    std::unordered_map<std::string, int> fruitCount = {{"apple", 2}, {"banana", 5}};
    fruitCount["orange"] = 4;

    fruitCount.erase("banana"); // удаляем

    std::cout << "Apples: " << fruitCount["apple"] << std::endl;

    for(const auto& pair: fruitCount) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

void usingStack() {
    // LIFO
    std::stack<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    while (!numbers.empty()) {
        std::cout << numbers.top() << " ";
        numbers.pop();
    }
    std::cout << std::endl;
}

void usingQueue() {
    // FIFO
    std::queue<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    while (!numbers.empty()) {
        std::cout << numbers.front() << " ";
        numbers.pop();
    }
    std::cout << std::endl;
}

void usingPriorityQueue() {
    std::priority_queue<int> numbers;
    numbers.push(3);
    numbers.push(1);
    numbers.push(4);
    numbers.push(2);
    numbers.push(5);

    while (!numbers.empty()) {
        std::cout << numbers.top() << " ";
        numbers.pop();
    }
    std::cout << std::endl;
}

void usingFindAlgorithm() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    auto it = std::find(data.begin(), data.end(), 3);
    if (it != data.end()) {
        std::cout << "Found: " << *it << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
}

void usingSortAlgorithm() {
    std::vector<int> data = {5, 1, 4, 2, 3};
    std::sort(data.begin(), data.end());
    for (int n : data) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

void usingRotateAlgorithm() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    std::rotate(data.begin(), data.begin() + 2, data.end());
    for (int n : data) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

void usingCopyAlgorithm() {
    std::vector<int> src = {1, 2, 3, 4, 5};
    std::vector<int> dest(5);
    std::copy(src.begin(), src.end(), dest.begin());
    for (int n : dest) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

void usingTransformAlgorithm() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6};
    std::transform(data.begin(), data.end(), data.begin(),
                   [](int x){ return x*x; });

    for (int n : data) {
        std::cout <<n << " ";
    }
    std::cout << std::endl;
}

void usingRemoveAlgorithm() {
    // есть еще remove
    std::vector<int> data = {1, 2, 3, 4, 5, 6};
    auto newEnd = std::remove_if(data.begin(), data.end(),
                                 [](int x) { return x % 2 == 0; });
    data.erase(newEnd, data.end());
    for (int n : data) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

void usingInputIterator() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    std::istream_iterator<int> start(std::cin), end;
    std::vector<int> numbers(start, end);

    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

void usingOutputIterator() {
    std::ostream_iterator<int> out_it (std::cout, ", ");
    std::vector<int> data = {1, 2, 3, 4, 5};

    std::copy(data.begin(), data.end(), out_it);
    std::cout << std::endl;
}

void usingForwardList() {
    std::forward_list<int> flist = {1, 2, 3, 4, 5};

    for (auto it = flist.begin(); it != flist.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void usingBidirectional() {
    std::list<int> l = {1, 2, 3, 4, 5};

    for (auto it = l.rbegin(); it != l.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void usingRandomAccess() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    std::cout << "Third element: " << v[2] << std::endl;
    std::cout << "Second element using iterator: " << *(v.begin() + 1) << std::endl;
}

int main() {
    setlocale(LC_ALL, "RUS");

    std::cout << "-=-=-=-= Vector =-=-=-=-" << std::endl;
    usingVector();

    std::cout << "\n-=-=-=-= List =-=-=-=-" << std::endl;
    usingList();

    std::cout << "\n-=-=-=-= Deque =-=-=-=-" << std::endl;
    usingDeque();

    std::cout << "\n-=-=-=-= Set =-=-=-=-" << std::endl;
    usingSet();

    std::cout << "\n-=-=-=-= Multiset =-=-=-=-" << std::endl;
    usingMultiset();

    std::cout << "\n-=-=-=-= Map =-=-=-=-" << std::endl;
    usingMap();

    std::cout << "\n-=-=-=-= Multimap =-=-=-=-" << std::endl;
    usingMultimap();

    std::cout << "\n-=-=-=-= Unordered set =-=-=-=-" << std::endl;
    usingUnorderedSet();

    std::cout << "\n-=-=-=-= Unordered map =-=-=-=-" << std::endl;
    usingUnorderedMap();

    std::cout << "\n-=-=-=-= Stack =-=-=-=-" << std::endl;
    usingStack();

    std::cout << "\n-=-=-=-= Queue =-=-=-=-" << std::endl;
    usingQueue();

    std::cout << "\n-=-=-=-= Priority queue =-=-=-=-" << std::endl;
    usingPriorityQueue();

    std::cout << "\n-=-=-=-= Algorithm find =-=-=-=-" << std::endl;
    usingFindAlgorithm();

    std::cout << "\n-=-=-=-= Algorithm sort =-=-=-=-" << std::endl;
    usingSortAlgorithm();

    std::cout << "\n-=-=-=-= Algorithm rotate =-=-=-=-" << std::endl;
    usingRotateAlgorithm();

    std::cout << "\n-=-=-=-= Algorithm copy =-=-=-=-" << std::endl;
    usingCopyAlgorithm();

    std::cout << "\n-=-=-=-= Algorithm transform =-=-=-=-" << std::endl;
    usingTransformAlgorithm();

    std::cout << "\n-=-=-=-= Algorithm remove =-=-=-=-" << std::endl;
    usingRemoveAlgorithm();

    std::cout << "\n-=-=-=-= Input iterator =-=-=-=-" << std::endl;
    usingInputIterator();

    std::cout << "\n-=-=-=-= Output iterator =-=-=-=-" << std::endl;
    usingOutputIterator();

    std::cout << "\n-=-=-=-= Forward list =-=-=-=-" << std::endl;
    usingForwardList();

    std::cout << "\n-=-=-=-= Bidirectional =-=-=-=-" << std::endl;
    usingBidirectional();

    std::cout << "\n-=-=-=-= Random access =-=-=-=-" << std::endl;
    usingRandomAccess();

    return 0;
}