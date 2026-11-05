
/* JUS-CLASS jus_Class_020974b8::jus_Class_020974b8 [class-default] stores vtable 020974b8 into
   *this (constructor) */

undefined4 *
jus_Class_020974b8::jus_Class_020974b8
          (undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  undefined4 local_18;
  
  local_18 = 0xc0000;
  jus_Class_02097558::jus_Class_02097558(param_1,0,&local_18);
  *param_1 = &vftable;
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  if (param_4 != 0) {
    param_3 = param_4;
  }
  param_1[0xd] = param_3;
  param_1[0xe] = param_5;
  param_1[0xf] = param_6;
  param_1[0x10] = param_7;
  return param_1;
}

