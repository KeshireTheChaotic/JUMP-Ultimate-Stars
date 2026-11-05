
bool FUN_0214df28(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 6) == '\0') {
    uVar1 = (int)(uint)*(byte *)(iVar2 + 0xb) >> 4;
    if (uVar1 == 3) {
      uVar1 = (uint)*(byte *)(*(int *)(DAT_0214bd80 + 0x40) +
                             (short)(ushort)*(byte *)(iVar2 + 7) * 0x3c);
    }
  }
  else if (*(char *)(iVar2 + 6) == '\x01') {
    uVar1 = (uint)*(byte *)((uint)*(byte *)(iVar2 + 7) * 0x14 + *(int *)(DAT_0214bd80 + 0x48) +
                           (*(char *)(iVar2 + 8) + -1) * 8);
  }
  else {
    uVar1 = 3;
  }
  return uVar1 == param_2;
}

