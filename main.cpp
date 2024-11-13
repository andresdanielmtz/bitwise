#include <iostream> 
#include <bitset>

int main() { 
  std::bitset<8> bits { 0b0000'0101 }; 
  bits.set(3); // bit pos 3 to 1 
  bits.flip(4); // flip bit 4 (now we have 0001 1101) 
  bits.reset(4); // flip 4 to 0 -> 0000 1101rel="noreferrer"
  
  std::cout << "All the bits: " << bits << std::endl; 
  std::cout << "Bit 3 has value: " << bits.test(3) << std::endl;
}
