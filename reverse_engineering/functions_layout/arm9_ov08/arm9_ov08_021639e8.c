
void FUN_021639e8(uint param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0xf) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2) {
    case 0:
      goto switchD_021639fe_caseD_0;
    case 2:
      iVar2 = FUN_021639d0();
      iVar3 = DAT_0216e808;
      if (iVar2 == 2) {
        OS_DisableInterrupts();
        *(ushort *)(iVar3 + 2) = *(ushort *)(iVar3 + 2) | (ushort)(1 << (param_1 & 0xff));
        OS_RestoreInterrupts();
        iVar2 = (param_1 - 1) * 0x1e;
        iVar3 = DAT_0216e808 + 0x24 + iVar2;
        *(char *)(DAT_0216e808 + 0x24 + iVar2) = (char)param_3[5];
        *(undefined1 *)(iVar3 + 1) = *(undefined1 *)((int)param_3 + 0xb);
        *(char *)(iVar3 + 2) = (char)param_3[6];
        *(undefined1 *)(iVar3 + 3) = *(undefined1 *)((int)param_3 + 0xd);
        *(char *)(iVar3 + 4) = (char)param_3[7];
        *(undefined1 *)(iVar3 + 5) = *(undefined1 *)((int)param_3 + 0xf);
        *(short *)(DAT_0216e808 + iVar2 + 0x2a) = (short)param_1;
        return;
      }
      break;
    case 3:
      iVar3 = FUN_02163910();
      if (iVar3 != 6) {
        uVar1 = ~(ushort)(1 << (param_1 & 0xff));
        OS_DisableInterrupts();
        *(ushort *)(DAT_0216e808 + 2) = *(ushort *)(DAT_0216e808 + 2) & uVar1;
        *(ushort *)(DAT_0216e808 + 4) = *(ushort *)(DAT_0216e808 + 4) & uVar1;
        *(ushort *)(DAT_0216e808 + 6) = *(ushort *)(DAT_0216e808 + 6) & uVar1;
        *(ushort *)(DAT_0216e808 + 8) = *(ushort *)(DAT_0216e808 + 8) & uVar1;
        *(ushort *)(DAT_0216e808 + 10) = *(ushort *)(DAT_0216e808 + 10) & uVar1;
        *(ushort *)(DAT_0216e808 + 0xc) = *(ushort *)(DAT_0216e808 + 0xc) & uVar1;
        OS_RestoreInterrupts();
        return;
      }
      break;
    case 7:
      uVar1 = (ushort)(1 << (param_1 & 0xff));
      *(ushort *)(DAT_0216e808 + 8) = *(ushort *)(DAT_0216e808 + 8) & ~uVar1;
      *(ushort *)(DAT_0216e808 + 10) = *(ushort *)(DAT_0216e808 + 10) | uVar1;
      return;
    case 9:
      uVar1 = (ushort)(1 << (param_1 & 0xff));
      *(ushort *)(DAT_0216e808 + 10) = *(ushort *)(DAT_0216e808 + 10) & ~uVar1;
      *(ushort *)(DAT_0216e808 + 0xc) = *(ushort *)(DAT_0216e808 + 0xc) | uVar1;
      if (*(short *)(DAT_0216e808 + 2) == *(short *)(DAT_0216e808 + 0xc)) {
        func_0x021bfe80();
        return;
      }
      break;
    case 10:
      iVar3 = FUN_021639d0();
      if (iVar3 != 2) {
        FUN_02163ddc(param_1);
        return;
      }
      *(ushort *)(DAT_0216e808 + 4) =
           *(ushort *)(DAT_0216e808 + 4) | (ushort)(1 << (param_1 & 0xff));
      FUN_02163e60(param_1);
      iVar3 = func_0x021bead8(param_1);
      if (iVar3 != 0) {
        FUN_02051890(iVar3,DAT_0216e808 + 0xe + (param_1 - 1) * 0x1e,0x16);
        return;
      }
      break;
    case 0xc:
      iVar3 = FUN_021639d0();
      if (iVar3 == 4) {
        FUN_021639dc(5);
      }
      else {
        FUN_021639dc(0);
      }
      if (*(int *)(DAT_0216e808 + 0x1b144) != 0) {
        *(int *)(DAT_0216e808 + 0x1b144) = 0;
      }
      if (*(int *)(DAT_0216e808 + 0x1b140) != 0) {
        *(int *)(DAT_0216e808 + 0x1b140) = 0;
        return;
      }
      break;
    case 0xd:
      uVar1 = *param_3;
      if (uVar1 < 9) {
        if (((uVar1 < 8) && (uVar1 < 3)) && (uVar1 != 0)) {
          if ((uVar1 != 1) && (uVar1 != 2)) {
            return;
          }
LAB_02163bc0:
          FUN_021639dc(7);
          return;
        }
      }
      else if (uVar1 == 9) goto LAB_02163bc0;
      break;
    case 0xe:
      uVar1 = (ushort)(1 << (param_1 & 0xff));
      *(ushort *)(DAT_0216e808 + 4) = *(ushort *)(DAT_0216e808 + 4) & ~uVar1;
      *(ushort *)(DAT_0216e808 + 6) = *(ushort *)(DAT_0216e808 + 6) | uVar1;
      iVar3 = FUN_021639d0();
      if (iVar3 == 3) {
        FUN_02163d58(param_1);
        return;
      }
    }
  }
  else {
switchD_021639fe_caseD_0:
    FUN_02055684();
  }
  return;
}

