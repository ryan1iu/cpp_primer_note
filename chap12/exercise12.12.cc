#include <memory>

void process(std::shared_ptr<int> ptr) {
}

int main() {
  process(new int());
}
