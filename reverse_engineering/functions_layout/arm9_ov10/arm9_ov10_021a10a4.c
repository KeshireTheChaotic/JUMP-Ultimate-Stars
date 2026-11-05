
void FUN_021a10a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_02051890(param_1 + 0x34,param_1 + 0x38,4);
  *(char *)(param_1 + 0x34) =
       *(char *)(param_1 + 0x38) + (char)((9 - *(char *)(param_1 + 0x38)) / 2);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x2c) = (int)*(char *)(param_1 + 0x35);
  *(int *)(param_1 + 8) = *(char *)(param_1 + 0x36) + -1;
  uVar2 = FUN_021766fc();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 0x8d0) = 0;
  do {
    iVar1 = iVar3 * 2;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(param_1 + iVar1 + 0x8c4) = 0;
  } while (iVar3 < 4);
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  *(undefined4 *)(param_1 + 0x8ec) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  return;
}

