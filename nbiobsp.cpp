# include <iostream>
# include "rice/Class.hpp"
# include "nbiobsp.h"

using namespace Rice;
using namespace std;

extern "C"
void Init_nbiobsp()
{
  Class rb_c = define_class("NBioBSP")
    .define_method("init", &nbiobspInit)
    .define_method("capture", &nbiobspCapture)
    .define_method("match", &nbiobspMatch)
    .define_method("close", &nbiobspClose);
}
