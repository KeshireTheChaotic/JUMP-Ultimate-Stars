
void FUN_02154878(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_021547b8();
  iVar4 = 0;
  puVar3 = &DAT_0216a4a0 + param_1 * 2;
  iVar2 = 0;
  do {
    uVar1 = FUN_02165fc4(0,*puVar3,1);
    *(undefined4 *)((int)DAT_0216e6d0 + iVar2) = uVar1;
    FUN_02165b80(*(undefined4 *)((int)DAT_0216e6d0 + iVar2),0xffffffff,1);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  FUN_02165bc4(*DAT_0216e6d0,0xffffffff,param_2,param_4);
  FUN_02165bc4(DAT_0216e6d0[1],0xffffffff,param_3,param_4);
  return;
}

