//#include "gologger.h"
//#include <thread>
//
////TEST1 - general tests of all functionality.
////TEST2 - mulithreading test
//#define TEST2
//
//int main() {
//    std::string name("output.csv"),
//                sep(",");
//    gologger log(sep, name);
//
//#ifdef TEST1
//    int ix = 4;
//    float fx = 5.5f;
//    std::string str{ "lvalue string" };
//    LOG(ID, ix, 123);
//    LOG(ID, &ix);
//    LOG(ID, "rvalue string", '+', ix, fx);
//    LOG(ID, LOCAL_TIME, FUNC);
//    for (int i = 0; i < 10; i++) {
//        LOG(ID, APP_TIME, LOCAL_TIME, FUNC, ix, fx, str, "rvalue string", bool(1));
//        std::this_thread::sleep_for(std::chrono::milliseconds(100));
//    }
//    auto lambda = []() {return "from lambda string"; };
//    LOG(ID, lambda());
//#endif
//
//
//#ifdef TEST2
//    auto lambda_log = [](std::string&& str) { 
//        for (int i = 0; i < 10; i++) {
//        LOG(ID, APP_TIME,LOCAL_TIME, FUNC,str, std::this_thread::get_id());
//        std::this_thread::sleep_for(std::chrono::milliseconds(500));
//    } };
//    std::thread tr1(lambda_log, "lambda 1 msg");
//    std::thread tr2(lambda_log, "lambda 2 msg");
// 
//    tr1.join();
//    tr2.join();
//
//#endif
//    
//
//    auto vec = log.copy_log();
//
//    for (auto& s : vec)std::cout << s << std::endl;
//    return 0;
//}