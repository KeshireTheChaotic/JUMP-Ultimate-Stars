
void FUN_038021c4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  
  iVar2 = param_1 * 0x24;
  pbVar6 = &DAT_03808fe8 + iVar2;
  if (((&DAT_03808fe8)[iVar2] & 1) != 0) {
    FUN_038016bc(pbVar6);
  }
  FUN_03801908(pbVar6,param_4);
  iVar3 = FUN_038007d0();
  if (-1 < iVar3) {
    iVar1 = iVar3 * 0x40;
    puVar5 = &DAT_03809228 + iVar1;
    FUN_038019cc(puVar5);
    FUN_038019b8(puVar5,param_2,param_3);
    (&DAT_03808ff0)[iVar2] = (char)iVar3;
    FUN_03801cc8(*(undefined4 *)(&DAT_03809250 + iVar1));
    iVar2 = FUN_03801c78(*(undefined4 *)(&DAT_03809250 + iVar1));
    *(int *)(&DAT_03809250 + iVar1) = *(int *)(&DAT_03809250 + iVar1) + 1;
    if (iVar2 == 0xfe) {
      uVar4 = FUN_03801c28(puVar5);
      uVar4 = uVar4 & 0x1ffff;
      iVar2 = 1;
      while (uVar4 = uVar4 >> 1, uVar4 != 0) {
        if ((uVar4 & 1) != 0) {
          iVar3 = FUN_038007d0();
          if (iVar3 < 0) break;
          FUN_038019cc(&DAT_03809228 + iVar3 * 0x40);
          pbVar6[iVar2 + 8] = (byte)iVar3;
        }
        iVar2 = iVar2 + 1;
      }
    }
    else {
      *(int *)(&DAT_03809250 + iVar1) = *(int *)(&DAT_03809250 + iVar1) + -1;
    }
    *pbVar6 = *pbVar6 & 0xfe | 1;
    *pbVar6 = *pbVar6 & 0xfd;
    if (DAT_03808aa4 != 0) {
      *(uint *)(DAT_03808aa4 + 4) = *(uint *)(DAT_03808aa4 + 4) | 1 << (param_1 & 0xff);
    }
  }
  return;
}

