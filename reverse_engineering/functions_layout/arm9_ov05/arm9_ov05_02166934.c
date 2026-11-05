
undefined4 FUN_02166934(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0207452c(*(undefined4 *)(param_1 + 0x124));
  uVar2 = (uint)(byte)(&DAT_0216d760)[param_2];
  if (uVar2 == 0) {
    thunk_FUN_0207400c(param_3,iVar1);
    return 1;
  }
  FUN_02074178(param_3,iVar1,uVar2);
  thunk_FUN_0207400c(param_4,iVar1 + uVar2 * 2);
  return 0;
}

