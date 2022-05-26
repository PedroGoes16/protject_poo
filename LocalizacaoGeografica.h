class LocalizacaoGeografica { 
  private:
    
    float latitude;
    float longitude;
  
  public:
    // como já estamos chamando o latitude e longitude no construtor, não precisamos de set (prof disse)
    // ele também me disse que não é necessário o nome da variável, apenas seu tipo
    localizacaoGeografica(float, float);
    float get_latitude();
    float get_longitude();
    ~localizacaoGeografica();
}
