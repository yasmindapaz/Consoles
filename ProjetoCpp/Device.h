#ifndef DEVICE_H
#define DEVICE_H

#include <string>
#include <ostream>
using std::ostream;
using std::string;

class Device
{
    friend ostream &operator<<(ostream &, const Device &);  //Operador de saída com streams
    public: 
        Device();
        Device(const Device &);
        ~Device();
        void insertStorageDevice(const float &, int);       //Insere dispositivos de armazenamento externo
        void removeStorageDevice(int);                      //Remove dispositivos de armazenamento externo
        void deviceInfo() const;                            //Exibe as informações de dispositivo 
        void power_ON();                                    //Ligar
        void power_OFF();                                   //Desligar
        void deviceInfo();
    
        virtual void start() = 0; 
        
    protected:
        const static int USB_PORTS = 2;                     //Máximo disponível de entradas USB
        const static bool ethernetCard = true;                           //Presença ou ausência de placa de rede no dispositivo (nem todo dispositivo possui) 
        bool power;                                         //Botão ligar
        string manufacturer;                                //Fabricante
        float intStorage;                                   //Armazenamento interno (é diferente dependendo do console)
        float extStorage[USB_PORTS];                        //Armazenamento externo (HDs externos, flash drives, etc)

};

#endif //DEVICE_H


