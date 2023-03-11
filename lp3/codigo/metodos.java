class Aluno
{
    private String name, id;
    private float gpa;


    public Aluno(String name, String id, float gpa)
    {
        this.name = name;
        this.id = id;
        this.gpa  = gpa;        
    }

    public void getStd()
    {
        System.out.format("Nome: %s\nID: %s\nGPA: %f", name, id, gpa);
    }


}

class Metodo
{
    public static void main(String[] args)
    {
        Aluno eduardo = new Aluno("Eduardo", "019", 4);
        eduardo.getStd();
    }

}