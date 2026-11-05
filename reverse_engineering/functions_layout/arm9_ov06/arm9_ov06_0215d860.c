
undefined4 FUN_0215d860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02159930();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(param_1 + 0x1d4))(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(code **)(param_1 + 0x1d4) = FUN_0215da84;
      iVar1 = FUN_0215d904(*(undefined4 *)(param_1 + 0x1a8));
      if ((iVar1 == 0) && (*(byte *)(param_1 + 0xd8) <= *(byte *)(param_1 + 0xd9))) {
        uVar2 = 0;
      }
      else {
        FUN_02157494(param_1,2,FUN_0215d91c,FUN_0215da48,0x10,param_4);
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

