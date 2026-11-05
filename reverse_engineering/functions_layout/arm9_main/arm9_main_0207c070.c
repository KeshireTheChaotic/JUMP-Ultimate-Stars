
void FUN_0207c070(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1c) != '\x01') {
    if (*(char *)(param_1 + 0x1c) != '\x02') {
      return;
    }
    if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
      return;
    }
  }
  FUN_0207c414(param_1,*(undefined4 *)(param_1 + 8));
  FUN_0207c414(param_1,*(undefined4 *)(param_1 + 0xc));
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x5c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xfffffbff;
  }
  if ((*(char *)(param_1 + 0x1c) == '\x02') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x60), iVar1 != 0)) {
    FUN_0207b3c0(iVar1,0);
  }
  FUN_02037c24(DAT_0214be0c + (uint)*(byte *)(param_1 + 0x1c) * 8,param_1);
  FUN_02037b98(DAT_0214be0c + 0x20,param_1);
  if ((*(byte *)(param_1 + 0x1d) & 2) != 0) {
    *(uint *)(*(int *)(param_1 + 0xc) + 0x40) =
         *(uint *)(*(int *)(param_1 + 0xc) + 0x40) & 0xffffff7f;
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfd;
  }
  if ((*(byte *)(param_1 + 0x1d) & 4) != 0) {
    *(uint *)(*(int *)(param_1 + 0xc) + 0x44) =
         *(uint *)(*(int *)(param_1 + 0xc) + 0x44) & 0xfffffffd;
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfb;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x78) = *(uint *)(*(int *)(param_1 + 0xc) + 0x78) & 0xfffdffff
  ;
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 1;
  return;
}

