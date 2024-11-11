#include <iostream>
#include <string>
#include <list>
using namespace std;

class User {
    string username;
    string password;
public:
    User(string username, string password) {
        this->username = username;
        SetPassword(password);
    }

    void SetPassword(const string& password) {
        if (password.length() > 7) {
            this->password = password;
        }
        else {
            cout << "Password incorrect..." << endl;
        }
    }

    string GetUsername() const {
        return this->username;
    }

    string GetPassword() const {
        return this->password;
    }

    void Show() const {
        cout << "Username: " << GetUsername() << endl;
        cout << "Password: " << GetPassword() << endl;
    }
};

class Account {
    list<User*> users;
    static int count;
public:
    void SignUp() {
        string username, password;
        cout << "Username: ";
        getline(cin, username);

        cout << "Password: ";
        getline(cin, password);

        if (CheckUser(username)) {
            cout << "This username is already in use..." << endl;
        }
        else {
            users.push_back(new User(username, password));
            cout << "User registered" << endl;
            count++;
        }
    }

    bool CheckUser(const string& username) {
        for (auto user : users) {
            if (user->GetUsername() == username) {
                return true;
            }
        }
        return false;
    }

    bool SignIn(const User& signIn_user) {
        for (auto user : users) {
            if (user->GetUsername() == signIn_user.GetUsername()) {
                if (user->GetPassword() == signIn_user.GetPassword()) {
                    return true;
                }
                else {
                    cout << "Password is wrong..." << endl;
                    return false;
                }
            }
        }
        cout << "Username is wrong..." << endl;
        return false;
    }

    void Show_All_Users() const {
        if (users.empty()) {
            cout << "No users to display." << endl;
            return;
        }
        for (const auto& user : users) {
            user->Show();
        }
    }

    void Delete_Users() {
        for (auto& user : users) {
            delete user;
        }
        users.clear();
        cout << "All users deleted." << endl;
    }
};

int Account::count = 0;

void main() {
    Account account;
    account.SignUp();
    account.Show_All_Users();
    account.Delete_Users();
}
