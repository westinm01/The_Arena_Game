fndef __SPREADSHEET_HPP__
#define __SPREADSHEET_HPP__

#include <string>
#include <initializer_list>
#include <vector>
#include <iosfwd>

class Select;

class Database
{
    std::vector<std::string> column_names;
    std::vector<std::vector<std::string> > data;
    Select* select = nullptr;

public:
    ~Database(){
	delete select;
    }

    const std::string& cell_data(int row, int column) const
    {
        return data.at(row).at(column);
    }

    std::string& cell_data(int row, int column)
    {
        return data.at(row).at(column);
    }

    void set_selection(Select* new_select){
	delete select;
	select = new_select;
    }

    
    void print_selection(std::ostream& out{

    }
    
    void clear();
    void set_column_names(const std::vector<std::string>& names);
    void add_row(const std::vector<std::string>& row_data);
    int get_column_by_name(const std::string& name) const;
};
   
#endif //__SPREADSHEET_HPP__
