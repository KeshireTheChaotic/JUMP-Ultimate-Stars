
int FUN_02191bdc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0x80;
  if (*(short *)(param_1 + 2) != 0) {
    iVar1 = FUN_02193440();
    iVar2 = FUN_02193440(*(undefined2 *)(param_1 + 8));
    iVar5 = FUN_02191bbc(param_1 + 0x10);
    iVar5 = iVar1 + 0x194 + iVar2 + iVar5;
  }
  if (*(short *)(param_1 + 6) != 0) {
    iVar1 = FUN_02193440();
    iVar2 = FUN_02193440(*(undefined2 *)(param_1 + 10));
    iVar3 = FUN_02193440(*(undefined2 *)(param_1 + 0xc));
    iVar4 = FUN_02191bbc(param_1 + 0x14);
    iVar5 = iVar5 + 0x110 + iVar1 + iVar2 + iVar3 + iVar4;
  }
  return iVar5;
}

