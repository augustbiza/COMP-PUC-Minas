class Pessoa {
    private String nome;
    private int id;

    public Pessoa() {}
    public Pessoa(String nome, int id) {
        this.nome = nome;
        this.id = id;
    }

    public String getNome() { return nome; }
    public int getId() { return id; }

    public void mostrarPessoa() {
        System.out.println("Nome: " + nome + "\nIdade: " + id);
    }
}