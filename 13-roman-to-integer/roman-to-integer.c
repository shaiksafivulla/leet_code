int romanToInt(char* s) {
    int total = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int value = 0;
        int next = 0;

        if (s[i] == 'I') {
            value = 1;
        }
        else if (s[i] == 'V') {
            value = 5;
        }
        else if (s[i] == 'X') {
            value = 10;
        }
        else if (s[i] == 'L') {
            value = 50;
        }
        else if (s[i] == 'C') {
            value = 100;
        }
        else if (s[i] == 'D') {
            value = 500;
        }
        else if (s[i] == 'M') {
            value = 1000;
        }

    
        if (s[i + 1] == 'I') {
            next = 1;
        }
        else if (s[i + 1] == 'V') {
            next = 5;
        }
        else if (s[i + 1] == 'X') {
            next = 10;
        }
        else if (s[i + 1] == 'L') {
            next = 50;
        }
        else if (s[i + 1] == 'C') {
            next = 100;
        }
        else if (s[i + 1] == 'D') {
            next = 500;
        }
        else if (s[i + 1] == 'M') {
            next = 1000;
        }

        // Add or subtract the current value
        if (value < next) {
            total = total - value;
        }
        else {
            total = total + value;
        }
    }

    return total;
}

