
int FUN_021ce2c4(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar2 = 0;
  if ((param_2 == DAT_021d57a4) && (DAT_021d57a0 != 0)) {
    uVar4 = 0;
    if (DAT_021d57a0 != 0) {
      piVar3 = &DAT_021d57ac;
      do {
        if ((*piVar3 != 0) && (*(int *)(*piVar3 + 0xc) == 2)) {
          iVar2 = 1;
          break;
        }
        piVar3 = piVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_021d57a0);
    }
    if (iVar2 == 0) {
      return 0;
    }
    if ((DAT_021d6684 & 1) == 0) {
      iVar2 = 0x460;
    }
    else {
      iVar2 = 0;
    }
    *(undefined4 *)((int)&DAT_021d5dc0 + iVar2) = 0x5f564354;
    if (DAT_021d579c < 2) {
      FUN_020517c4(param_1,&DAT_021d5dcc + iVar2);
    }
    else {
      FUN_020517c4(param_1,&DAT_021d5dd0 + iVar2);
    }
    (&DAT_021d5dc4)[iVar2] = 0x40;
    sVar1 = DAT_021d5780 + 1;
    *(short *)((int)&DAT_021d5dc6 + iVar2) = DAT_021d5780;
    DAT_021d5780 = sVar1;
    uVar5 = OS_GetTick();
    *(uint *)((int)&DAT_021d5dc8 + iVar2) =
         (uint)uVar5 >> 6 | (int)((ulonglong)uVar5 >> 0x20) << 0x1a;
    DAT_021d6684 = DAT_021d6684 + 1;
    iVar2 = 1;
  }
  return iVar2;
}

