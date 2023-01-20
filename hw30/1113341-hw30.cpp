/*Student ID: 1113341 Name: �i���a*/
/*�ϥΪ̿�J�@�ӼƦr�N��L�ơA�z�L���j�p��X�ӽL�ư�����e����һݪ�����*/
#include<iostream>
using namespace std;

int times;

void hanoi(int disks, char source, char temp, char target) {
    if (disks == 1) {
        cout << "move disk from " << source << " to " << target << endl;
        times++;
        cout << "move disk from " << source << " to " << target << endl;
        times++;
    }
    else {
        hanoi(disks - 1, source, target, temp);
        hanoi(1, source, temp, target);
        hanoi(disks - 1, temp, source, target);
    }
}

void hanoi2colors(int disks) {
    char source = 'A';
    char temp = 'B';
    char target = 'C';
    int i;
    for (i = disks / 2; i > 1; i--) {
        hanoi(i - 1, source, temp, target);
        cout << "move disk from " << source << " to " << temp << endl;
        times++;
        cout << "move disk from " << source << " to " << temp << endl;
        times++;
        hanoi(i - 1, target, temp, source);
        cout << "move disk from " << temp << " to " << target << endl;
        times++;
    }
    cout << "move disk from " << source << " to " << temp << endl;
    times++;
    cout << "move disk from " << source << " to " << target << endl;
    times++;
}

int main() {
    int n;
    cout << "�п�J�L�ơG";
    while (cin >> n) {
        times = 0;
        hanoi2colors(n);
        cout << "Total move: " << times << endl;
        cout << "================================\n";
        cout << "�п�J�L�ơG";
    }
    
    return 0;
}