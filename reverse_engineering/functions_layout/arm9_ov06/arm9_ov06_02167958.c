
void FUN_02167958(int param_1,short param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 * 0x34 + *(int *)(param_1 + 0x1c);
  *(short *)(iVar1 + 0x22) = *(short *)(iVar1 + 0x22) - param_3;
  uVar2 = (uint)*(byte *)(iVar1 + 0x2c);
  while( true ) {
    if (2 < uVar2) {
      FUN_02167a20();
      FUN_0207342c(0x7a,0x37);
      return;
    }
    if (*(short *)(iVar1 + uVar2 * 2 + 0x1c) < *(short *)(iVar1 + 0x22)) break;
    uVar2 = uVar2 + 1 & 0xff;
  }
  if (*(byte *)(iVar1 + 0x2c) == uVar2) {
    return;
  }
  *(char *)(iVar1 + 0x2c) = (char)uVar2;
  FUN_021679e0(param_1,iVar1,(*(byte *)(iVar1 + 0x2f) + uVar2) - 1 & 0xff,
               (uint)*(byte *)(iVar1 + 0x2f),param_4);
  return;
}

