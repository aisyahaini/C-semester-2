#include <iostream>
#include <vector>

using namespace std;

//pendeklarasian struct sebuah tree awal
struct node {
    int data;
    node *left;
    node *right;
};

//fungsi untuk menambahkan fungsi baru
void tambahnode(node* &root, int isi){
    //jika root masih kosong
    if(root == NULL){
        //pembuatan node baru
        node *baru;
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
void inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        cout << root->data<<' ';
        inorder(root->right);
    }
}

//fungsi yang digunakan untuk mencetak tree secara preorder
void preorder(node *root){
    if(root != NULL){
        cout << root->data<<' ';
        preorder(root->left);
        preorder(root->right);
    }
}

//fungsi yang digunakan untuk mencetak tree secara postorder
void postorder(node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data<<' ';
    }
}

int main() {
    // deklarasi variabel untuk menyimpan data dari tree
    vector<int> data = {7, 5, 8, 3, 7, 9};

    // inisialisasi root
    node* root = NULL;

    // loop untuk menambahkan node ke dalam tree
    int i=0;
    while (i < data.size()) {
        tambahnode(root, data[i]);
        i++;
    }

    // mencetak tree secara inorder, preorder, dan postorder
    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    return 0;
}
