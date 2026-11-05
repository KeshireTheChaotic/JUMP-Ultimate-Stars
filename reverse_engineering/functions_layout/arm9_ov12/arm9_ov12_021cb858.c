
void FUN_021cb858(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_021cb80c();
  for (uVar2 = 0; uVar2 < *(ushort *)(param_2 + 2); uVar2 = uVar2 + 1) {
    iVar1 = *param_2 + uVar2 * param_2[1];
    if (*(char *)(iVar1 + 0xe) == '\0') {
      FUN_021cb724(param_1,*(undefined4 *)(iVar1 + 8),*(undefined2 *)(iVar1 + 0xc));
    }
    else {
      FUN_021cb798(param_1,*(undefined4 *)(iVar1 + 8),*(undefined2 *)(iVar1 + 0xc));
    }
  }
  return;
}

