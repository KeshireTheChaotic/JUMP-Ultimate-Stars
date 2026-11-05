
void FUN_02180814(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (int)*(short *)(*(int *)(param_1 + 0x2c) + 10);
  iVar5 = **(int **)(param_1 + 0x14);
  if (0x1000 < iVar2) {
    iVar2 = 0x1000;
  }
  iVar2 = (0x1000 - iVar2) * 0x400 >> 0x10;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (0x3f < iVar2) {
    iVar2 = 0x40;
  }
  if ((*(uint *)(param_1 + 0xd4) & 2) != 0) {
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 2;
  }
  bVar1 = *(byte *)(param_1 + 200);
  *(byte *)(param_1 + 200) = bVar1 + 1;
  if (iVar2 <= (int)(uint)bVar1) {
    if (*(char *)(param_1 + 0xc9) == '\0') {
      uVar3 = *(uint *)(iVar5 + 0xe8) | 4;
    }
    else {
      uVar3 = *(uint *)(iVar5 + 0xe8) | 8;
    }
    *(uint *)(iVar5 + 0xe8) = uVar3;
    *(char *)(param_1 + 0xc9) = '\x01' - *(char *)(param_1 + 0xc9);
    *(undefined1 *)(param_1 + 200) = 0;
  }
  iVar2 = FUN_0217e438(param_1);
  iVar4 = func_0x0215922c(*(undefined4 *)(param_1 + 0x20));
  if (iVar4 == 0 || iVar2 != 0) {
    *(undefined1 *)(param_1 + 0xc9) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0x105) = 1;
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) & 0xfffffffd;
    return;
  }
  return;
}

