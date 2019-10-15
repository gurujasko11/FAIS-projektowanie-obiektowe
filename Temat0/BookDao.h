#include "IDao.h"
#include "Book.h"
#include <deque>

#ifndef BOOKDAO_H
#define BOOKDAO_H

class BookDao : public IDao{
public:
    BookDao();
    virtual ~BookDao();
    virtual void store(IStorageObject* iStorageObject);
    virtual void remove(IStorageObject* iStorageObject);
    virtual void update(IStorageObject* iStorageObject);
    virtual IStorageObject* read(unsigned int Id);
private:
    std::deque<Book> bookQueue;
};

#endif //PERSONDAO_H
