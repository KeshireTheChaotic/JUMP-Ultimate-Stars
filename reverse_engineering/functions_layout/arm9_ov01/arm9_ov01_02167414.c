
void FUN_02167414(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_02087724();
  if (iVar2 != 2) {
    if (DAT_020afebd == '\0') {
      cVar1 = (&DAT_020afee6)[DAT_020afe98];
      iVar2 = DAT_020afe90;
    }
    else {
      uVar3 = 0;
      iVar2 = 0;
      for (iVar4 = 0; iVar4 < DAT_020afe90; iVar4 = iVar4 + 1) {
        uVar3 = uVar3 | 1 << (uint)(byte)(&DAT_020afebe)[iVar4];
      }
      iVar4 = 0;
      do {
        if ((uVar3 & 1) != 0) {
          iVar2 = iVar2 + 1;
        }
        iVar4 = iVar4 + 1;
        uVar3 = uVar3 >> 1;
      } while (iVar4 < 3);
      cVar1 = (&DAT_020afeea)[DAT_020afe98];
    }
    iVar4 = 0;
    do {
      *(wchar16 *)(param_1 + iVar4 * 2 + 0x88) =
           u_222_0216a078[(iVar2 + -2) * 0x18 + cVar1 * 6 + iVar4];
      FUN_02072870(iVar4,u_222_0216a078[(iVar2 + -2) * 0x18 + cVar1 * 6 + iVar4]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
  }
  return;
}

