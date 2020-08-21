#include "../matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {
    plt::specgram({1,3,2,4}, 4);
    plt::show();
}
