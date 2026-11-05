
undefined4
FUN_0205d8ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  
  iVar1 = FUN_0205b550(param_1,param_2,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0205b40c(param_2,iVar1);
  iVar3 = FUN_0205d55c(param_3,6,uVar2,0);
  if (iVar3 == 0) {
    FUN_0205b4ec(iVar1,param_6 + *(int *)(param_6 + 0x18),*param_5,uStack_1c);
    FUN_0205b900(param_1,*(undefined1 *)((int)param_5 + 6));
    FUN_0205b89c(param_1,*(undefined1 *)((int)param_5 + 7));
    FUN_0205b830(param_1,param_7,param_8);
    return 1;
  }
  thunk_FUN_0205b1d8(iVar1);
  return 0;
}

