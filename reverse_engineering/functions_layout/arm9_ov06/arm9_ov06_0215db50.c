
undefined4 FUN_0215db50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02159930();
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x10) == 0) {
      uVar2 = 0;
    }
    else {
      FUN_02157494(param_1,4,FUN_0215dba4,0,0,param_4);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

