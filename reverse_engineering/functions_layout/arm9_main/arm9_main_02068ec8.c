
void FUN_02068ec8(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_02051890(&DAT_02092308,param_3,0x58);
  *(undefined4 *)(param_3 + 4) = *param_1;
  *(undefined4 *)(param_3 + 8) = param_1[1];
  if (*(byte *)(param_2 + 0xd0d) < 6) {
    iVar1 = FUN_02067348();
    param_2 = param_2 + iVar1 * 0x100;
    if (*(char *)(param_2 + 0xc0) != '\0') {
      *(undefined4 *)(param_3 + 0xc) = 0;
      uVar2 = FUN_02068e7c(param_2 + 0xc0);
      *(undefined4 *)(param_3 + 0x10) = uVar2;
      uVar2 = FUN_02068e34(*(undefined1 *)(param_2 + 0xd0));
      *(undefined4 *)(param_3 + 0x14) = uVar2;
      uVar2 = FUN_02068e7c(param_2 + 0xc4);
      *(undefined4 *)(param_3 + 0x18) = uVar2;
      uVar2 = FUN_02068e7c(param_2 + 200);
      *(undefined4 *)(param_3 + 0x1c) = uVar2;
      uVar2 = FUN_02068e7c(param_2 + 0xcc);
      *(undefined4 *)(param_3 + 0x20) = uVar2;
      return;
    }
    *(undefined4 *)(param_3 + 0xc) = 1;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x14) = 0;
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    *(undefined4 *)(param_3 + 0x20) = 0;
  }
  return;
}

