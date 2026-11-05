
void FUN_02158888(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_c [12];
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x90) & 0x10) == 0x10) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x50) + 0xc);
    iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc;
    iVar2 = iVar1 + 4;
    iVar1 = iVar1 + 0xea;
    if (0x100 < iVar2) {
      iVar2 = 0x100;
    }
    if (0x100 < iVar1) {
      iVar1 = 0x100;
    }
    FUN_0214ee3c(auStack_c,iVar2,0xc,iVar1,0xac);
    iVar1 = FUN_0203b3f4();
    FUN_02152e64(*(undefined4 *)(iVar1 + 0x88),0,auStack_c);
  }
  return;
}

