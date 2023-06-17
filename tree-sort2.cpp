// membuat sorting tree

#include <iostream>
#include <vector>

using namespace std;

//pendeklarasian struct sebuah tree awal
struct bulat {
    int data;
    bulat kiri;
    bulat kanan;
};

//fungsi untuk menambahkan fungsi baru
void tambahnode(bulat &root, int isi){
    //jika root masih kosong
    if(root == NULL){
        //pembuatan node baru
        bulat *baru;
        //pengalokasian memori  dari node yang telah dibuat
        baru = new node;
        // inisialisasi awal node yang baru dibuat
        baru ->data =isi;
        baru ->left = NULL;
        baru ->right = NULL;
        root=baru;
    }
    // jika data yang dimasukkan lebih kecil dari root
    else if (isi < root->data) {
        tambahnode(root->left, isi);
    }
    // jika data yang dimasukkan lebih besar dari root
    else if (isi > root->data) {
        tambahnode(root->right, isi);
    }
}

//fungsi yang digunakan untuk mencetak tree secara inorder
void inorder(bulat *root){
    if(root != NULL){
        inorder(root->left);
        cout << root->data<<' ';
        inorder(root->right);
    }
}


int main() {
    // deklarasi variabel untuk menyimpan data dari tree
    vector<int> data = {7, 5, 8, 3, 7, 9};

    // inisialisasi root
    bulat root = NULL;

    // loop untuk menambahkan node ke dalam tree
    int i=0;
    while (i < data.size()) {
        tambahnode(root, data[i]);
        i++;
    }

    cout << "Data sebelum disorting :" << data[i] << endl;

    // mencetak tree secara inorder, preorder, dan postorder
    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    return 0;
}
