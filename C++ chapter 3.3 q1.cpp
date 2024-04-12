#include <iostream>
using namespace std;
class DiamondCompany {
	public:
	int comp_id;
    char comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    char comp_ceo;
    public:
    DiamondCompany(int id, char name, int staff_quantity, double revenue, int import_raw_diamonds, int export_diamonds, char ceo) {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff_quantity;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_raw_diamonds;
        comp_export_diamonds = export_diamonds;
        comp_ceo = ceo;
}
void displayd() {
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Revenue per Year: $" << comp_revenue << endl;
        cout << "Imported Raw Diamonds per Year: " << comp_import_raw_diamonds << endl;
        cout << "Exported Diamonds per Year: " << comp_export_diamonds << endl;
        cout << "CEO: " << comp_ceo << endl;
    }
};
int main() {
        int id, staff_quantity, import_raw_diamonds, export_diamonds;
        double revenue;
        char company_name, ceo;
		cout << "Company ID: ";
        cin >> id;
        cout << "Company Name: ";
        cin >> company_name;
        cout << "Staff Quantity: ";
        cin >> staff_quantity;
        cout << "Revenue per Year: ";
        cin >> revenue;
        cout << "Imported Raw Diamonds per Year: ";
        cin >> import_raw_diamonds;
        cout << "Exported Diamonds per Year: ";
        cin >> export_diamonds;
        cout << "CEO: ";
        cin >> ceo ;
        DiamondCompany company(id, company_name, staff_quantity, revenue, import_raw_diamonds, export_diamonds, ceo);
        }