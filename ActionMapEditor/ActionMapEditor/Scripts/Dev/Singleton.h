#ifndef SINGLETON_H
#define SINGLETON_H

template<class T>
class Singleton {
   protected:
    Singleton() {}

    virtual ~Singleton() {}

   public:
    // インスタンスを生成する
    static T* CreateInstance() {
        instance = new T();
        return instance;
    }

    // インスタンスを削除する
    static void DestoroyInstance() {
        delete instance;
        instance = nullptr;
    }

    // インスタンスを取得する
    static T* GetInstance() {
        return ( instance == nullptr ) ? CreateInstance() : instance;
    }

   private:
    static T* instance;
};

template<class T>
T* Singleton<T>::instance = nullptr;

#endif  // !SINGLETON_H
