
void FUN_0216e898(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined2 *puStack_14;
  
  param_1 = param_1 << 8;
  puStack_14 = param_4;
  if (param_2 == 0) {
    FUN_0216e934(&local_1c,param_1);
  }
  else {
    FUN_0216e934(&local_18,param_1);
    local_1c = -local_18;
  }
  *param_3 = (short)(local_1c >> 4);
  FUN_0216e988(&local_20,param_1);
  uVar1 = FUN_0200c954(local_20);
  FUN_0200c5ac(uVar1,0x45800000);
  FUN_0200c85c();
  FUN_02009c54();
  uVar1 = FUN_0200b6c4();
  FUN_0200c9e4(0x45800000,uVar1);
  iVar2 = FUN_0200c8e0();
  *param_4 = (short)(iVar2 >> 4);
  return;
}

