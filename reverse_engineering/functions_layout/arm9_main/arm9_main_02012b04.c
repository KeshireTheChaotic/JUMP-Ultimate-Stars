
/* JUS-CLASS jus_Class_02094e78::jus_Class_02094e78 [class-default] stores vtable 02094e78 into
   *this (constructor) */

undefined4 *
jus_Class_02094e78::jus_Class_02094e78
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(0x44);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_020974b8::jus_Class_020974b8
                      (iVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  jus_Class_02094ecc::jus_Class_02094ecc(param_1,uVar2);
  *param_1 = &vftable;
  return param_1;
}

