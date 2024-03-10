   for (counter = 0; counter < num; counter++) {
        if (counter <= 1)
            next = counter;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }