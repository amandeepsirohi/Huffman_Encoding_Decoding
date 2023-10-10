# Huffman coding
This repository contains a C++ implementation of Huffman encoding and decoding algorithms. Huffman coding is a popular technique for lossless data compression. It assigns variable-length codes to different characters, with shorter codes for more frequently occurring characters. This leads to efficient encoding for commonly used characters, resulting in compression.


## Here's a simple example to illustrate the Huffman coding process:

Suppose we have the input data "ABBCCCDDDD". The frequency table would be:

| Character  |   Frequency  | 
| :------------ |:---------------:| 
| A     | 1| 
| B    | 2     |   
| C | 3   |
| D | 4|

Following the algorithm described above, we construct the Huffman tree

  ```bash       
       (10)
      /   \
   (4)D   (6)
         /   \
      (3)C   (3)
           /   \
        (1)A   (2)B 
```

and assign the following Huffman codes:

| Character  |   Frequency  | 
| :------------ |:---------------:| 
| A     | 0|
| B    | 10     |   
| C | 110   |
| D | 111|


This is a simplified example, but it demonstrates the basic structure and steps involved in Huffman coding. Keep in mind that in real-world scenarios, more complex data structures and algorithms may be used for efficiency and optimization.

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
