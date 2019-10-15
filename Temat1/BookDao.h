#include "IDao.h"
#include "Book.h"
#include <deque>

#ifndef BOOKDAO_H
#define BOOKDAO_H

class BookDao : public IDao{
public:
    static BookDao* getInstance();
    BookDao();
    virtual ~BookDao();
    void listAll();
    void readFile(std::string filename);
    void printToFile(std::string filename);
    virtual void store(IStorageObject* iStorageObject);
    virtual void remove(IStorageObject* iStorageObject);
    virtual void update(IStorageObject* iStorageObject);
    virtual IStorageObject* read(unsigned int Id);
private:
    std::deque<Book> bookQueue;
    static BookDao* instance;
};

#endif //PERSONDAO_H
