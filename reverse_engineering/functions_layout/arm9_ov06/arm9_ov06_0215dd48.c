
void FUN_0215dd48(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    FUN_02157450(param_1,6);
    *(code **)(param_1 + 0x1d8) = FUN_0215ddfc;
    FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),1);
    *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x26) = 0;
    *(undefined1 *)(param_1 + 0x1e8) = 0;
  }
  *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + '\x01';
  if (*(char *)(param_1 + 0x1e8) < '\x05') {
    return;
  }
  iVar1 = FUN_0215dec8(param_1);
  if (iVar1 == 0) {
    FUN_0215d2e4(param_1);
    return;
  }
  return;
}

