
void FUN_021be2ac(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    iVar2 = DAT_021d525c + uVar4 * 0x5d4;
    if (*(char *)(iVar2 + 0x1d52) != '\0') {
      *(undefined2 *)(iVar2 + 0x1d4a) = 0;
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 0x10);
  DAT_021d51a8 = 0;
  uVar1 = 1;
  do {
    psVar3 = (short *)FUN_020588c8(param_1,uVar1);
    if (((psVar3 != (short *)0x0) && (*psVar3 != -1)) && (*psVar3 != 0)) {
      FUN_021be328(psVar3,uVar1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

