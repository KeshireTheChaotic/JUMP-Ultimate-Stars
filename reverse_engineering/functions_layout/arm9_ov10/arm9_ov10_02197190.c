
void FUN_02197190(undefined1 *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  do {
    param_1[iVar2 + 2] = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  uVar3 = 0;
  uVar4 = 0;
  iVar2 = 0;
  do {
    bVar1 = param_1[iVar2 + 2];
    uVar4 = uVar4 + (uint)bVar1 + (uint)*(byte *)(param_2 + uVar3) & 0xff;
    param_1[iVar2 + 2] = param_1[uVar4 + 2];
    param_1[uVar4 + 2] = bVar1;
    uVar3 = uVar3 + 1 & 0xff;
    if (param_3 <= (int)uVar3) {
      uVar3 = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}

