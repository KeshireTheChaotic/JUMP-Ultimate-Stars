
/* JUS-CLASS jus_Class_02094484::jus_Class_02094484 [class-default] stores vtable 02094484 into
   *this (constructor) */

undefined4 *
jus_Class_02094484::jus_Class_02094484
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0x80000;
  uStack_c = param_4;
  jus_Class_02094370::jus_Class_02094370(param_1,&local_10);
  *param_1 = &vftable;
  FUN_02031150(param_1 + 4);
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8e] = 4;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0xffffffff;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0x80000000;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  DAT_020a107c = DAT_020a107c + 1;
  FUN_0201cca0(DAT_020a0d10,param_1);
  return param_1;
}

