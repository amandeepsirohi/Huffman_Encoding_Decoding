# Huffman coding
This repository contains a C++ implementation of Huffman encoding and decoding algorithms. Huffman coding is a popular technique for lossless data compression. It assigns variable-length codes to different characters, with shorter codes for more frequently occurring characters. This leads to efficient encoding for commonly used characters, resulting in compression.




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
