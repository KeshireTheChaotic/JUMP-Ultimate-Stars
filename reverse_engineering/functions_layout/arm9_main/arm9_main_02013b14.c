
/* JUS-CLASS jus_TagIPMV::jus_TagIPMV [class-type-tag] stores vtable 0209ade8 into *this
   (constructor) */

undefined4 *
jus_TagIPMV::jus_TagIPMV
          (undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5
          ,undefined4 param_6,undefined4 param_7,byte param_8,byte param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_8 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x1c))(param_3,param_4);
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x1c))(param_3,param_4);
    uVar2 = param_6;
    param_6 = uVar1;
  }
  jus_TagIPCT::jus_TagIPCT
            (param_1,param_2,param_3,param_4,param_5,uVar2,param_6,param_7,
             (uint)param_9 << 3 | 3 | (uint)param_8 << 2);
  *param_1 = &vftable;
  return param_1;
}

