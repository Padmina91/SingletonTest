#ifndef SINGLETONTEST_SINGLETON_HPP
#define SINGLETONTEST_SINGLETON_HPP

class Mama {
protected:
    Mama();
    static Mama *singleton;
public:
    Mama(const Mama& other) = delete;
    Mama(const Mama&& other) = delete;
    Mama* operator=(const Mama& other) = delete;
    Mama* operator=(const Mama&& other) = delete;
    
    static Mama* create_entity();
    
    virtual void get_type();
};

class Child1 : public Mama {
protected:
    Child1();
    
public:
    Child1(const Child1& other) = delete;
    Child1(const Child1&& other) = delete;
    Child1* operator=(const Child1& other) = delete;
    Child1* operator=(const Child1&& other) = delete;
    
    static Mama* create_entity();
    
    void get_type() override;
};

class Child2 : public Mama {
protected:
    Child2();
public:
    Child2(const Child2& other) = delete;
    Child2(const Child2&& other) = delete;
    Child2* operator=(const Child2& other) = delete;
    Child2* operator=(const Child2&& other) = delete;
    
    static Mama* create_entity();
    
    void get_type() override;
};

class Child3 : public Mama {
protected:
    Child3();
public:
    Child3(const Child3& other) = delete;
    Child3(const Child3&& other) = delete;
    Child3* operator=(const Child3& other) = delete;
    Child3* operator=(const Child3&& other) = delete;
    
    static Mama* create_entity();
    
    void get_type() override;
};

#endif //SINGLETONTEST_SINGLETON_HPP