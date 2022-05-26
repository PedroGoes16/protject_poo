


class LocalizacaoGeografica { 
  private:
    
    float latitude;
    float longitude;
  
  public:
    
    localizacaoGeografica(float latitude, float longitude);
    void set_latitude();
    float get_latitude();
    void set_longitude();
    float get_longitude();
    ~localizacaoGeografica();
}
