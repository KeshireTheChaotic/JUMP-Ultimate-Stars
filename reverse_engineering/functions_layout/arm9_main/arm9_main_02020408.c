
/* JUS-CLASS jus_TagALMT::jus_TagALMT [class-type-tag] stores vtable 02094cd4 into *this
   (constructor) */

undefined4 *
jus_TagALMT::jus_TagALMT
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6)

{
  jus_Class_02094d7c::jus_Class_02094d7c();
  *param_1 = &vftable;
  param_1[0xd] = param_3;
  param_1[2] = param_4;
  if (param_6 != 0) {
    FUN_0203263c(param_1);
  }
  param_1[9] = param_5;
  return param_1;
}

