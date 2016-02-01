#include <string>
using std::string;

#ifndef XBOX360_H
#define XBOX360_H

class Xbox360
{
public:
    Xbox360();
    ~Xbox360();
    void power_on_off();
    void kinect_on_off();
    void instalar_jogo();
    void desinstalar_jogo();
    void exibe_info();
    void cadastrar_usuario( string, int );
    void listar_usuarios ( ) const;
private:     
    double version;
    double availableStorage;
    int coord_xyz[3];
    bool onoff;
    bool kinect_onoff;
    string usuarios[5];
};

#endif // XBOX360_H
