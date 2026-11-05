
undefined4 FUN_020165dc(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_020104b4(param_1 | 0x42000000);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_02016628(*(undefined4 *)(iVar1 + 4),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
  return uVar2;
}

