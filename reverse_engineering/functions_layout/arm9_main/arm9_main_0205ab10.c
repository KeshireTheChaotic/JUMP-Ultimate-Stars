
int FUN_0205ab10(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                undefined2 param_5)

{
  int iVar1;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  
  FUN_02058060();
  iVar1 = FUN_02057f40(1,2);
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_02058214(0x1e,param_1);
  uStack_20 = 0x1e;
  uStack_18 = param_5;
  uStack_1e = param_2;
  uStack_1c = param_3;
  uStack_1a = param_4;
  iVar1 = FUN_02058070(&uStack_20,10);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

