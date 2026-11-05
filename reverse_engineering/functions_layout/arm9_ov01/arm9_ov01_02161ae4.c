
void FUN_02161ae4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(int *)(iVar3 + 0x3c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x85);
    bVar4 = cVar1 == '\x01';
    if (bVar4) {
      cVar1 = *(char *)(iVar2 + 0x70);
    }
    if (bVar4 && cVar1 == '\0') {
      return;
    }
  }
  *(byte *)(iVar3 + 0xb2) = *(byte *)(iVar3 + 0xb2) & 0xfe | 1;
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 0x48) + 4));
  FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 4) + 4),FUN_021617f0);
  FUN_02028330(*(undefined4 *)(*(int *)(iVar3 + 4) + 4));
  FUN_02073ebc(3,0);
  func_0x021b3f78(*(undefined4 *)(*(int *)(iVar3 + 0x6c) + 4),0x510008);
  func_0x021b3f78(*(undefined4 *)(*(int *)(iVar3 + 0x60) + 4),0x510008);
  func_0x021b65cc();
  FUN_0207342c(0x78,0);
  return;
}

