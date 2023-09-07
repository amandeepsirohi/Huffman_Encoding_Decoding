# Huffman coding

Huffman coding is a lossless data compression algorithm. The idea is to assign variable-length codes to input characters, lengths of the assigned codes are based on the frequencies of corresponding characters. 
The variable-length codes assigned to input characters are Prefix Codes, means the codes (bit sequences) are assigned in such a way that the code assigned to one character is not the prefix of code assigned to any other character.


![1fEJE](https://github.com/amandeepsirohi/Huffman_Encoding_Decoding/assets/125798090/5e25c80b-8f86-45b5-9685-5ef32e6c4954)

## Usage
clone the repo
```console
git clone https://github.com/amandeepsirohi/Huffman_Encoding_Decoding.git --depth=1
```

## Building
```console
g++ huffman_main.cpp encode_text.cpp -o huff-encode
```

## Test on random text file
create text file with 500000 lines of random strings
```console
cat /dev/urandom | tr -dc 'a-z0-9' | fold -w 32 | head -n 500000 > input.txt
```

compress `input.txt` file
```console
huff-encode input.txt out.txt
```

## compare size
```console
du -h input.txt
16M    input.txt
```

```console
du -h out.txt
11M    out.txt
```

## decompress file
build decoder
```console
g++ huffman_main.cpp decode_text.cpp -o huff-decode
```

decompress `out.txt` file
```console
huff-encode compressed.huff out.txt
```
