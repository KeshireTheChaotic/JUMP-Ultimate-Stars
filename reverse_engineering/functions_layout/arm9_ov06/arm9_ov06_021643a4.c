
void FUN_021643a4(int param_1)

{
  int iVar1;
  int *unaff_r7;
  
  (**(code **)(**(int **)(param_1 + 100) + 0x5c))();
  iVar1 = unaff_r7[1];
  iVar1 = FUN_0206c7fc(*(byte *)(iVar1 + 0xd) + 0x401203,*(int *)(iVar1 + 4) >> 8,
                       *(int *)(iVar1 + 8) >> 8,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 100) + 0x5c))();
  FUN_0207342c(0x7a,0x4e);
  iVar1 = FUN_02163bc8(*(undefined4 *)(*unaff_r7 + 0xc),0);
  if (iVar1 != 0) {
    FUN_0216383c();
    *(undefined1 *)((int)unaff_r7 + 0x12) = 0;
    *(undefined2 *)(unaff_r7 + 4) = 0xb4;
  }
  return;
}

