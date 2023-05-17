#ifndef DYNAMICTEMPLATES_H_INCLUDED
#define DYNAMICTEMPLATES_H_INCLUDED


#include <iostream>
#endif // DYNAMICTEMPLATES_H_INCLUDED

template<typename T>
class DynamicIntegerArray{
    private:
        T *data;
        int size;
    public:
        DynamicIntegerArray(){
            this->size =0;
            this->data =new T[0];
    }
        DynamicIntegerArray(const T arr[], int size){
            this->size=size;
            data = new T[size];
            for(int i=0;i<size;i++)
                data[i] =arr[i];
    }
         DynamicIntegerArray(const DynamicIntegerArray <T>&o){
            this->size =o.size;
            data= new T[o.size];
            for(int i=0;i<o.size;i++)
                data[i]=o.data[i];
    }
        int getSize() const{
            return size;
    }
        ~DynamicIntegerArray(){
            delete[]data;
    }
        void print() const {
        std:: cout<<"[";
        for(int i =0;i<size;i++)
            std::cout<<data[i]<<" ";
            std::cout<<"]";
    }

        void pushback(T value){
            T *aux=new T[size+1];
            for(int i=0;i<size;i++)
                aux[i] = data[i];
                aux[size] = value;
                delete[] data;
                data=aux;
                size++;

    }
        void insert(T value,int pos){

            T *aux=new T[size+1];
            for(int i=0;i<size;i++)
                aux[i]=data[i];
            for(int i=size;i>pos;i--)
            {
                aux[i]=data[i-1];
            }
                aux[pos]=value;
                delete[]data;
                data=aux;
            size++;
    }
        void remove(int pos){
           if(pos<0||pos>=size){
                return;
            }
            T *aux=new T [size-1];
            for(int i=0;i<pos;i++)
                aux[i]=data[i];
            for(int i=pos;i<size;i++)
                {
                aux[i-1]=data[i];
                }
                delete[]data;
                data=aux;
            size--;
    }
};

class Estudiante{
private:
    std::string estudiante;
public:
    Estudiante(){
    estudiante="";
    }

    Estudiante(const std::string& estudiante){
        this->estudiante=estudiante;
    }

    std::string getEstudiante() const{
        return estudiante;
        }
    void setEstudiante(const std::string& estudiante){
        this->estudiante=estudiante;

    }
    friend std::ostream& operator<<(std::ostream& os, const Estudiante& estudiante) {
        os << estudiante.getEstudiante();
        return os;
    }
};
