#pragma once
#include<cstddef>
#include<stdexcept>
using namespace std;
template <typename T>

class DyanamicArr{
public:
    DynamicArr(): data_(nullptr), size_(0), capacity_(0){}
    explicit DynamicArr(size_t count) : data_(nullptr), size_(0), capacity_(0)
    {
        if(count > 0){
            data_ = new T[count]{};
            size_ = count;
            capacity_ = count;
        }
    }
    DynamicArr(size_t count, const T& value) : data_(nullptr), size_(0), capacity_(0){
        if(count > 0){
            data_ = new T[count];
            for(size_t i = 0; i < count; i++){
                data_[i] = value;
            }
            size_ = count;
            capacity_ = count;
        }

    }
    DynamicArr(const DynamicArr &other): data_(nullptr), size_(0), capacity_(0){
        copy_from(other);
    }
    DynamicArr &operator=(const DynamicArr &other) {
        if(this != &other){
            delete [] data_; // delete data_[] is invalid -- compiler error
            data_ = nullptr;
            size_ = 0;
            capacity_ = 0;
            copy_from(other);
        }
        return *this;
    }
    DynamicArr(DynamicArr &&other) noexcept 
        :data_(other.data_),size_(other.size_), capacity_(other.capacity_){
        other.data_ = nullptr;
        other.size_ = 0;
        other.capacity_ = 0;
    }
    DynamicArr & operator=(DynamicArr &&other) noexcept{
        if(this ! = &other){
            delete[] data_;
            data_ = other.data_;
            size_ = other.size_;
            capacity_ = other.capacity_;
            other.data_ = nullptr;
            other.size_ = 0;
            other.capacity_ = 0;
        }
        return *this;
    }
    ~DynamicArr(){
        delete[] data_;
    }

    void push_back(const T& value){
        if(size_ == capacity_){
            grow();
        }
        data_[size_++] = value;
    }
    void push_back(T &&value){
        if(size_ == capacity_){
            grow();
        }
        data_[size_++] = move(value);
    }
    void pop_back(){ //no shrinking on pop, matches std::vector behavior
        if(size_ == 0){
            throw out_of_range("pop_back() called on empty DynamicArr");
        }
        --size_;
    }
    T& at(size_t index){
        if(index >= size_){
            throw out_of_range("DynamicArr::at() index out of range");
        }
        return data_[index];
    }
    const T& at(size_t index) const {
        if(index >= size){
            throw out_of_range("DynamicArr::at() index out of range");
        }
        return data_[index];
    }
    T & operator[](size_t index) {//unchecked access
        return data_[index];
    }
    const T & operator[](size_t index) const doubt why two different here
};  
