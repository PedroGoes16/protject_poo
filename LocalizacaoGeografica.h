


class LocalizacaoGeografica { 
  private:
    
    float latitude;
    float longitude;
  
  public:
    // como já estamos chamando o latitude e longitude no construtor, não precisamos de set (prof disse)
    localizacaoGeografica(float latitude, float longitude);
    void set_latitude();
    void set_longitude();
    ~localizacaoGeografica();
}
