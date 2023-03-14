import java.util.*;
class Books
{
    public String name;
    Books(String name)
    {
        this.name = name;
    } 
}
class list
{
    public static void main(String[] args)
    {
        Books nameswind = new Books("NamesWind");
        Books bible = new Books("Bible");
        Books George_Martin = new Books("Gerge Martin");
        
        List <Books> bookshelf = new ArrayList<>();
        bookshelf.add(nameswind);
        bookshelf.add(bible);
        bookshelf.add(George_Martin);

        for(int i = 0; i < bookshelf.size(); i++)
            System.out.println(bookshelf.get(i).name);
        
        for(Books book: bookshelf)
            System.out.println(book.name);
    }
}