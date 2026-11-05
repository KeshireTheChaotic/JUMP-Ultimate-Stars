
void FUN_02154ac8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x90) & 0x10) == 0x10) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x50) + 0xc);
    iVar2 = (int)(iVar2 + ((uint)(iVar2 >> 0xb) >> 0x14)) >> 0xc;
    iVar3 = iVar2 + 0xd;
    iVar2 = iVar2 + 0xf3;
    if (0x100 < iVar3) {
      iVar3 = 0x100;
    }
    if (0x100 < iVar2) {
      iVar2 = 0x100;
    }
    FUN_0214ee3c(auStack_14,iVar3,0x20,iVar2,0xc0);
    iVar1 = FUN_0203b3e4();
    FUN_02152e64(*(undefined4 *)(iVar1 + 0x88),0,auStack_14);
    FUN_0214ee3c(auStack_1c,iVar3,0,iVar2,0xa0);
    iVar2 = FUN_0203b3f4();
    FUN_02152e64(*(undefined4 *)(iVar2 + 0x88),0,auStack_1c);
  }
  return;
}

