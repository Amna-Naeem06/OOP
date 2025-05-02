#include <iostream>
#include <fstream>
#include <limits> // For input validation

using namespace std;

#define MAX_ITEMS 10

class FoodItem {
private:
    string name;
    double price;
    int stock;

public:
    FoodItem(string n = "", double p = 0.0, int s = 0) : name(n), price(p), stock(s) {}

    void display() const {
        cout << name << " - $" << price << " (Stock: " << stock << ")\n";
    }

    bool updateStock(int quantity) {
        if (stock >= quantity) {
            stock -= quantity;
            return true;
        }
        return false;
    }

    void restock(int quantity) {
        if (quantity > 0)
            stock += quantity;
        else
            cout << "Error: Quantity must be positive!\n";
    }

    string getName() const { return name; }
    double getPrice() const { return price; }
    int getStock() const { return stock; }
};

class Order {
public:
    static double totalRevenue;
    static int totalSales;
    FoodItem items[MAX_ITEMS];
    int quantities[MAX_ITEMS];
    int itemCount;
    double totalPrice;

    Order() : itemCount(0), totalPrice(0.0) {}

    void addItem(FoodItem &item, int quantity) {
        if (item.updateStock(quantity) && itemCount < MAX_ITEMS) {
            items[itemCount] = item;
            quantities[itemCount] = quantity;
            totalPrice += item.getPrice() * quantity;
            totalSales++;
            totalRevenue += item.getPrice() * quantity;
            itemCount++;
            saveOrderToFile();
        } else {
            cout << "Error: Insufficient stock or order limit reached for " << item.getName() << "!\n";
        }
    }

    void displayOrder() const {
        if (itemCount == 0) {
            cout << "No items in the order!\n";
            return;
        }
        cout << "Order Summary:\n";
        for (int i = 0; i < itemCount; i++) {
            cout << items[i].getName() << " x " << quantities[i] << " = $" << (items[i].getPrice() * quantities[i]) << "\n";
        }
        cout << "Total: $" << totalPrice << "\n";
    }

    void cancelOrder() {
        if (itemCount == 0) {
            cout << "No order to cancel!\n";
            return;
        }
        for (int i = 0; i < itemCount; i++) {
            items[i].restock(quantities[i]);
        }
        itemCount = 0;
        totalPrice = 0.0;
        cout << "Order cancelled successfully!\n";
    }

    void saveOrderToFile() const {
        ofstream file("order_history.txt", ios::app);
        if (!file) {
            cout << "Error: Could not open file for writing order history!\n";
            return;
        }
        file << "Order:\n";
        for (int i = 0; i < itemCount; i++) {
            file << items[i].getName() << " x " << quantities[i] << " = $" << (items[i].getPrice() * quantities[i]) << "\n";
        }
        file << "Total: $" << totalPrice << "\n\n";
        file.close();
    }
};

double Order::totalRevenue = 0.0;
int Order::totalSales = 0;

class Customer {
public:
    void viewMenu(FoodItem menu[], int menuSize) const {
        cout << "Menu:\n";
        for (int i = 0; i < menuSize; i++) {
            menu[i].display();
        }
    }

    void placeOrder(FoodItem menu[], int menuSize, Order &order) {
        string itemName;
        int quantity;

        cout << "Enter food item name: ";
        cin >> itemName;

        cout << "Enter quantity: ";
        while (!(cin >> quantity) || quantity <= 0) {
            cout << "Error: Please enter a valid positive number for quantity: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        for (int i = 0; i < menuSize; i++) {
            if (menu[i].getName() == itemName) {
                order.addItem(menu[i], quantity);
                return;
            }
        }
        cout << "Error: Item not found!\n";
    }
};

class Admin {
public:
    void updateInventory(FoodItem menu[], int menuSize) {
        string itemName;
        int quantity;

        cout << "Enter food item to restock: ";
        cin >> itemName;

        cout << "Enter quantity: ";
        while (!(cin >> quantity) || quantity <= 0) {
            cout << "Error: Please enter a valid positive number for quantity: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        for (int i = 0; i < menuSize; i++) {
            if (menu[i].getName() == itemName) {
                menu[i].restock(quantity);
                cout << "Stock updated!\n";
                return;
            }
        }
        cout << "Error: Item not found!\n";
    }

    void generateSalesReport() const {
        ofstream file("sales_report.txt");
        if (!file) {
            cout << "Error: Could not open file for writing sales report!\n";
            return;
        }
        file << "Total Revenue: $" << Order::totalRevenue << "\nTotal Orders: " << Order::totalSales << "\n";
        file.close();
        cout << "Sales report generated!\n";
    }
};

int main() {
    FoodItem menu[] = {FoodItem("Burger", 5.99, 10), FoodItem("Pizza", 8.99, 5), FoodItem("Pasta", 7.49, 7)};
    int menuSize = 3;
    Customer customer;
    Admin admin;
    Order order;
    int choice;

    while (true) {
        cout << "\n1. View Menu\n2. Place Order\n3. Cancel Order\n4. Admin: Update Inventory\n5. Admin: Generate Sales Report\n6. Exit\nEnter choice: ";

        if (!(cin >> choice)) {
            cout << "Error: Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                customer.viewMenu(menu, menuSize);
                break;
            case 2:
                customer.placeOrder(menu, menuSize, order);
                order.displayOrder();
                break;
            case 3:
                order.cancelOrder();
                break;
            case 4:
                admin.updateInventory(menu, menuSize);
                break;
            case 5:
                admin.generateSalesReport();
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Error: Invalid choice! Please enter a number between 1 and 6.\n";
        }
    }
}
