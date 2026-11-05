
void FUN_0215fd7c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
  *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(param_1 + 0x58);
  if (*(byte *)(*(int *)(param_1 + 4) + 0x4d) < 3) {
    return;
  }
  iVar3 = param_1 + param_2 * 2;
  *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + *(short *)(iVar3 + 0x16);
  *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) + *(short *)(iVar3 + 0x16);
  if (*(char *)(*(int *)(param_1 + 4) + 0x4d) != '\x03') {
    return;
  }
  sVar1 = *(short *)(param_1 + 0x66);
  sVar2 = *(short *)(param_1 + 0x56);
  bVar4 = sVar1 == sVar2;
  if (bVar4) {
    sVar1 = *(short *)(param_1 + 0x68);
    sVar2 = *(short *)(param_1 + 0x58);
  }
  if (bVar4 && sVar1 == sVar2) {
    return;
  }
  FUN_0215f6e4(*(undefined4 *)(param_1 + 8),0x230017,1,iVar3,param_4);
  FUN_0207342c(0x7a,0x55);
  return;
}

