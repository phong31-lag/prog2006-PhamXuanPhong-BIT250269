Bài 1
  #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "So chan";
    else
        cout << "So le";

    return 0;
}

Bài 2
  #include <iostream>
using namespace std;

int main() {
    float W, H;

    cout << "Nhap W: ";
    cin >> W;

    cout << "Nhap H: ";
    cin >> H;

    cout << "Dien tich = " << W * H;

    return 0;
}

Bài 3
  #include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        cout << i << endl;
    }

    return 0;
}

Bài 4
  #include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0)
            cout << "Vo so nghiem";
        else
            cout << "Vo nghiem";
    } else {
        float x = -b / a;
        cout << "x = " << x;
    }

    return 0;
}

Bài 5
  #include <iostream>
using namespace std;

int timMax(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int n = 5;

    cout << "Gia tri lon nhat: " << timMax(arr, n);

    return 0;
}

Bài 6
  #include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap so tu 1-7: ";
    cin >> n;

    switch(n) {
        case 1: cout << "Chu nhat"; break;
        case 2: cout << "Thu hai"; break;
        case 3: cout << "Thu ba"; break;
        case 4: cout << "Thu tu"; break;
        case 5: cout << "Thu nam"; break;
        case 6: cout << "Thu sau"; break;
        case 7: cout << "Thu bay"; break;
        default: cout << "Khong hop le";
    }

    return 0;
}

Bài 7
  #include <iostream>
using namespace std;

int main() {
    int n, S = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        S += i;
    }

    cout << "Tong S = " << S;

    return 0;
}
