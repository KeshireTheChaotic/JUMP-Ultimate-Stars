
int FUN_02191ad8(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x73) = *param_2;
  *(undefined1 *)(param_1 + 0x72) = param_2[1];
  iVar3 = param_1 + 0x80;
  if (*(short *)(param_2 + 2) != 0) {
    *(int *)(param_1 + 100) = iVar3;
    *(undefined2 *)(param_1 + 0x17c) = *(undefined2 *)(param_2 + 4);
    uVar1 = FUN_02191a6c(param_1 + 0x194,iVar3,param_2 + 0x10);
    uVar1 = FUN_02191abc(uVar1,param_1 + 0x3c,*(undefined2 *)(param_2 + 2));
    iVar3 = FUN_02191abc(uVar1,param_1 + 0x50,*(undefined2 *)(param_2 + 8));
    *(undefined2 *)(param_1 + 0x18a) = *(undefined2 *)(param_2 + 0xe);
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 400);
  }
  if (*(short *)(param_2 + 6) == 0) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(DAT_021a9d30 + 0x68);
  }
  else {
    *(int *)(param_1 + 0x68) = iVar3;
    *(int *)(iVar3 + 0x10c) = param_1;
    uVar1 = FUN_02191a6c(iVar3 + 0x110,iVar3,param_2 + 0x14);
    uVar1 = FUN_02191abc(uVar1,param_1 + 0x48,*(undefined2 *)(param_2 + 6));
    uVar1 = FUN_02191abc(uVar1,param_1 + 0x58,*(undefined2 *)(param_2 + 10));
    iVar2 = FUN_02191abc(uVar1,iVar3 + 0xf8,*(undefined2 *)(param_2 + 0xc));
    *(undefined4 *)(iVar3 + 0x108) = 0;
    *(undefined4 *)(iVar3 + 0x104) = *(undefined4 *)(iVar3 + 0x108);
    iVar3 = iVar2;
  }
  return iVar3;
}

