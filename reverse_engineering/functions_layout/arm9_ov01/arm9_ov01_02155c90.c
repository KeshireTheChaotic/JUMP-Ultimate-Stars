
void FUN_02155c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 0x10);
  if ((*(uint *)(iVar1 + 0x90) & 0x10) == 0x10) {
    uStack_c = param_4;
    if (*(byte *)(iVar3 + 3) < 8) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x50) + 0xc) + -0x20000;
      iVar2 = (int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc;
      iVar1 = iVar2 + 4;
      iVar2 = iVar2 + 0xea;
      if (0x100 < iVar1) {
        iVar1 = 0x100;
      }
      if (0x100 < iVar2) {
        iVar2 = 0x100;
      }
      FUN_0214dc98(auStack_14,iVar1,0x2c,iVar2,0xac);
      iVar1 = FUN_0203b3e4();
      FUN_02150768(*(undefined4 *)(iVar1 + 0x88),0,auStack_14);
    }
    else if (*(byte *)(iVar3 + 3) == 8) {
      FUN_0214dc98(auStack_1c,4,0x2c,0xea,0xac);
      iVar1 = FUN_0203b3e4();
      FUN_02150768(*(undefined4 *)(iVar1 + 0x88),0,auStack_1c);
    }
    *(char *)(iVar3 + 3) = *(char *)(iVar3 + 3) + '\x01';
  }
  return;
}

