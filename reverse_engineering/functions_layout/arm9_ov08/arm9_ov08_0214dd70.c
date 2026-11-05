
undefined4 FUN_0214dd70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = FUN_0214cdb0(s_MELCO_0216af88);
  FUN_0214d0c8(param_2,8,s_MELCO_0216af88,uVar1);
  iVar2 = FUN_0214cf20(param_1,param_2,6);
  if (iVar2 == 0) {
    iVar2 = FUN_0214cdc4(*(undefined2 *)(param_1 + 6));
    iVar3 = FUN_0214cdc4(*(undefined2 *)(param_2 + 6));
    if (iVar2 + 1 != iVar3) {
      uVar4 = 0xfffffffe;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

