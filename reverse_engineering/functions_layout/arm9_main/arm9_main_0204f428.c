
undefined4 *
FUN_0204f428(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0200c9e4(0x45800000,param_5,param_3,param_4,param_4);
  uVar1 = FUN_0200c8e0();
  FUN_0200c9e4(0x45800000,param_4);
  uVar2 = FUN_0200c8e0();
  FUN_0200c9e4(0x45800000,param_3);
  uVar3 = FUN_0200c8e0();
  FUN_0200c9e4(0x45800000,param_2);
  uVar4 = FUN_0200c8e0();
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}

