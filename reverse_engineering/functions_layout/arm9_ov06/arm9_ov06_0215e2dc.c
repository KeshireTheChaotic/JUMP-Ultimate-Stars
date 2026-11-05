
void FUN_0215e2dc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x26) = 0;
    if (*(char *)(param_1 + 0xdd) == '\0') {
      *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
      *(char *)(param_1 + 0xd9) = *(char *)(param_1 + 0xd9) + '\x01';
      FUN_0215d82c(*(undefined4 *)(param_1 + 0x1a4),3);
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2e) =
           *(undefined2 *)(param_1 + 0xba);
      FUN_02157450(param_1,4);
      *(undefined1 *)(param_1 + 0x1e8) = 0;
      *(undefined1 *)(param_1 + 0x1e7) = 0;
    }
    else {
      if (*(char *)(param_1 + 0xdd) < '\0') {
        FUN_02083950(*(undefined4 *)(param_1 + 0x1a8),1);
      }
      else {
        FUN_02083950(*(undefined4 *)(param_1 + 0x1a8));
      }
      *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xdc) + '\x01';
      *(undefined1 *)(param_1 + 0x1e8) = 0xc;
      FUN_02157450(param_1,8);
    }
    *(char *)(param_1 + 0xdb) = *(char *)(param_1 + 0xdb) + '\t';
  }
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    iVar1 = FUN_0215dec8(param_1);
    if (iVar1 == 0) {
      FUN_0215d2e4(param_1);
      return;
    }
    return;
  }
  *(char *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) + -1;
  if (*(char *)(param_1 + 0x1e8) == '\b') {
    FUN_02157450(param_1,4);
    FUN_0215f6e4(param_1,0x230008,0);
    *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x24) = 0;
    *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x26) = 0;
    *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) =
         *(char *)(param_1 + 0xdd) * 0xa00;
    *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2e) =
         *(short *)(param_1 + 0xba) / 2;
    *(undefined1 *)(param_1 + 0xdd) = 0;
    return;
  }
  return;
}

