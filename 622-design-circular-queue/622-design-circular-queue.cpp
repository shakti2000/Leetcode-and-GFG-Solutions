vector<int>nums;
int temp;
class MyCircularQueue {
public:
    MyCircularQueue(int k) {
       vector<int>ans;
        nums=ans;
        temp=k;
    }
    bool enQueue(int value) {
        if(nums.size()<temp){
            nums.push_back(value);
            return true;
        }else{
            return false;
        }
    }
    
    bool deQueue() {
        if(nums.size()==0)return false;
        else{
            nums.erase(nums.begin());
          //  print(nums);
            return true;
        }
        
    }
    
    int Front() {
        if(nums.size()>0)return nums[0];
        else return -1;
    }
    
    int Rear() {
        if(nums.size()>0)return nums[nums.size()-1];
        else return -1;
    }
    
    bool isEmpty() {
        if(nums.size()==0)return true;
        else return false;
    }
    
    bool isFull() {
        if(nums.size()==temp)return true;
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */