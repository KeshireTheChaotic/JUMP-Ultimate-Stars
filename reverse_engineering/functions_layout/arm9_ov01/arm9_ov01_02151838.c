
void FUN_02151838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x90) & 0x10) == 0x10) {
    iVar3 = *(int *)(iVar1 + 0x10);
    uStack_c = param_4;
    if (*(byte *)(iVar3 + 0x15a) < 8) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x50) + 0xc) + 0x20000;
      iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc;
      iVar2 = iVar1 + 0xe8;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      FUN_0214dc98(auStack_14,iVar1,0x1f,iVar2,0xa9);
      iVar1 = FUN_0203b3e4();
      FUN_02150768(*(undefined4 *)(iVar1 + 0x88),0,auStack_14);
    }
    else if (*(byte *)(iVar3 + 0x15a) == 8) {
      FUN_0214dc98(auStack_1c,0,0x1f,0xe8,0xa9);
      iVar1 = FUN_0203b3e4();
      FUN_02150768(*(undefined4 *)(iVar1 + 0x88),0,auStack_1c);
    }
    *(char *)(iVar3 + 0x15a) = *(char *)(iVar3 + 0x15a) + '\x01';
  }
  return;
}

