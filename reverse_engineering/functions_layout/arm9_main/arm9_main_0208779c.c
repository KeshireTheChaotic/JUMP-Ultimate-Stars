
void FUN_0208779c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 in_r3;
  int iVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_0208c51c();
  if (iVar2 == 0) {
    return;
  }
  uVar6 = func_0x0219a484();
  iVar2 = DAT_020afe98;
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 2) {
    return;
  }
  iVar5 = 0;
  if (DAT_020afebd == '\0') {
    for (; iVar5 < DAT_020afe94; iVar5 = iVar5 + 1) {
      if (iVar5 != iVar2) {
        iVar3 = func_0x0219a354(iVar5,uVar4);
        uVar4 = 0;
        if (-1 < iVar3) {
          func_0x021a28a8(iVar3,(int)(char)(&DAT_020afee6)[iVar2] <
                                (int)(char)(&DAT_020afee6)[iVar5],(int)(char)(&DAT_020afee6)[iVar5],
                          (int)(char)(&DAT_020afee6)[iVar2],in_r3);
          uVar4 = extraout_r1_00;
        }
      }
    }
    return;
  }
  cVar1 = (&DAT_020afebe)[DAT_020afe98];
  for (; iVar5 < DAT_020afe94; iVar5 = iVar5 + 1) {
    if (iVar5 != iVar2) {
      iVar3 = func_0x0219a354(iVar5,uVar4);
      uVar4 = 0;
      if ((-1 < iVar3) && (cVar1 != (&DAT_020afebe)[iVar5])) {
        func_0x021a28a8(iVar3,(int)(char)(&DAT_020afeea)[iVar2] < (int)(char)(&DAT_020afeea)[iVar5],
                        (int)(char)(&DAT_020afeea)[iVar5],(int)(char)(&DAT_020afeea)[iVar2],in_r3);
        uVar4 = extraout_r1;
      }
    }
  }
  return;
}

