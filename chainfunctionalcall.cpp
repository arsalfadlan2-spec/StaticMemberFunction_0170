#include <iostream>
using namespace std;

class buku {
    string judul;

public:
    // Belum ada method
};

int main() {
    return 0;
}

#include <iostream>
using namespace std;

class buku {
    string judul;

public:
    string getJudul() {
        return this->judul;
    }
};

int main() {
    return 0;
}

#include <iostream>
using namespace std;

class buku {
    string judul;

public:
    buku setJudul(string judul) {
        this->judul = judul;
        return *this; // chain function
    }

    string getJudul() {
        return this->judul;
    }
};

int main() {
    return 0;
}

