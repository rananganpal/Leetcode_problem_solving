char* addBinary(char* a, char* b) {
  int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = lenA > lenB ? lenA : lenB;
    char* result = (char*)malloc(maxLen + 2); // +1 for carry, +1 for null terminator
    result[maxLen + 1] = '\0';

    int carry = 0, i = 0;
    for (i = 0; i < maxLen; i++) {
        int bitA = (lenA - 1 - i >= 0) ? a[lenA - 1 - i] - '0' : 0;
        int bitB = (lenB - 1 - i >= 0) ? b[lenB - 1 - i] - '0' : 0;
        int sum = bitA + bitB + carry;

        result[maxLen - i] = (sum % 2) + '0'; // Store the result bit
        carry = sum / 2; // Update carry
    }

    if (carry) {
        result[0] = '1'; // Prepend carry if exists
        return result;
    } else {
        return result + 1; // Return without carry
    }
}