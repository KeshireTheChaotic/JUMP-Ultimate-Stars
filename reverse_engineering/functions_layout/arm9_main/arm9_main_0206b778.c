
void FUN_0206b778(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 local_48 [32];
  undefined4 uStack_8;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_8 = param_4;
  for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(iVar1 + 0x10); iVar2 = iVar2 + 1) {
    local_48[iVar2] = *(undefined2 *)(iVar1 + 0x16);
  }
  FUN_02029c68(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),local_48,*(undefined2 *)(iVar1 + 0xe));
  return;
}

