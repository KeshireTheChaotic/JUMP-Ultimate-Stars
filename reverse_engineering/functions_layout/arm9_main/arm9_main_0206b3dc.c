
void FUN_0206b3dc(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 local_248 [32];
  undefined2 local_208 [256];
  
  FUN_0206ae7c(*(undefined4 *)(param_1 + 4),local_208,*(undefined2 *)(param_1 + 0xe),
               *(undefined1 *)(param_1 + 0x10));
  bVar1 = *(byte *)(param_1 + 0x16);
  for (iVar2 = 0; iVar2 < (int)(uint)bVar1; iVar2 = iVar2 + 1) {
    local_248[iVar2] = local_208[iVar2];
  }
  for (iVar2 = 0; iVar2 < (int)((uint)*(byte *)(param_1 + 0x10) - (uint)*(byte *)(param_1 + 0x16));
      iVar2 = iVar2 + 1) {
    local_208[iVar2] = local_208[iVar2 + (uint)*(byte *)(param_1 + 0x16)];
  }
  for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(param_1 + 0x16); iVar2 = iVar2 + 1) {
    local_208[iVar2 + ((uint)*(byte *)(param_1 + 0x10) - (uint)*(byte *)(param_1 + 0x16))] =
         local_248[iVar2];
  }
  FUN_02029c68(*(undefined4 *)(*(int *)(param_1 + 4) + 4),local_208,*(undefined2 *)(param_1 + 0xe),
               *(undefined1 *)(param_1 + 0x10));
  return;
}

