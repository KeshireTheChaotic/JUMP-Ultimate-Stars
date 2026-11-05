
void FUN_020094ac(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar9 = CONCAT44(param_2,param_1);
  uVar5 = param_2 & 0x7fffffff;
  if (0x440fffff < uVar5) {
    if ((0x7ff00000 < uVar5) || ((uVar5 == 0x7ff00000 && (param_1 != 0)))) {
      FUN_0200b3a0(param_1,param_2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x020094e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    if ((int)param_2 < 1) {
      uVar9 = FUN_0200bc6c(0,0,uRam0208db98,uRam0208db9c);
      FUN_0200bc6c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uRam0208db78,uRam0208db7c);
                    /* WARNING: Could not recover jumptable at 0x02009520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_0200b3a0(uRam0208db98,uRam0208db9c,uRam0208db78,uRam0208db7c);
                    /* WARNING: Could not recover jumptable at 0x020094fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (uVar5 < 0x3fdc0000) {
    uVar8 = 0x3e1fffff < uVar5;
    if (uVar5 < 0x3e200000) {
      FUN_0200b3a0(0x8800759c,0x7e37e43c,param_1,param_2);
      bVar7 = true;
      FUN_0200c26c();
      if ((bool)uVar8 && !bVar7) {
                    /* WARNING: Could not recover jumptable at 0x02009550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2);
        return;
      }
    }
    iVar6 = -1;
  }
  else {
    uVar9 = FUN_02009910(param_1,param_2);
    uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar1 = (undefined4)uVar9;
    if (uVar5 < 0x3ff30000) {
      if (uVar5 < 0x3fe60000) {
        iVar6 = 0;
        uVar9 = FUN_0200b8cc(0,0x40000000);
        uVar9 = FUN_0200bc6c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
        uVar10 = FUN_0200b3a0(0,0x40000000,uVar1,uVar2);
        uVar9 = FUN_0200d534((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                             (int)((ulonglong)uVar10 >> 0x20));
      }
      else {
        iVar6 = 1;
        uVar9 = FUN_0200bc6c(uVar1,uVar2,0,0x3ff00000);
        uVar10 = FUN_0200b3a0(0,0x3ff00000,uVar1,uVar2);
        uVar9 = FUN_0200d534((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                             (int)((ulonglong)uVar10 >> 0x20));
      }
    }
    else if (uVar5 < 0x40038000) {
      iVar6 = 2;
      uVar9 = FUN_0200bc6c(uVar1,uVar2,0,0x3ff80000);
      uVar10 = FUN_0200b8cc(0,0x3ff80000,uVar1,uVar2);
      uVar10 = FUN_0200b3a0(0,0x3ff00000,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      uVar9 = FUN_0200d534((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                           (int)((ulonglong)uVar10 >> 0x20));
    }
    else {
      iVar6 = 3;
      uVar9 = FUN_0200d534(0,0xbff00000);
    }
  }
  uStack_c = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_10 = (undefined4)uVar9;
  uVar9 = FUN_0200b8cc(uStack_10,uStack_c,uStack_10,uStack_c);
  uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar1 = (undefined4)uVar9;
  uVar9 = FUN_0200b8cc(uVar1,uVar3,uVar1,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar2 = (undefined4)uVar9;
  uVar9 = FUN_0200b8cc(uVar2,uVar4,uRam0208dbf0,uRam0208dbf4);
  uVar9 = FUN_0200b3a0(_FUN_0208dbe0,FUN_0208dbe0,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b8cc(uVar2,uVar4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b3a0(uRam0208dbd0,uRam0208dbd4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b8cc(uVar2,uVar4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b3a0(uRam0208dbc0,uRam0208dbc4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b8cc(uVar2,uVar4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b3a0(uRam0208dbb0,uRam0208dbb4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b8cc(uVar2,uVar4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b3a0(uRam0208dba0,uRam0208dba4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200b8cc(uVar1,uVar3,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar1 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar10 = FUN_0200b8cc(uVar2,uVar4,0x2c6a6c2f,0xbfa2b444);
  uVar10 = FUN_0200b3a0(uRam0208dbd8,uRam0208dbdc,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar10 = FUN_0200b8cc(uVar2,uVar4,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar10 = FUN_0200b3a0(uRam0208dbc8,uRam0208dbcc,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar10 = FUN_0200b8cc(uVar2,uVar4,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar10 = FUN_0200b3a0(uRam0208dbb8,uRam0208dbbc,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar10 = FUN_0200b8cc(uVar2,uVar4,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar10 = FUN_0200b3a0(uRam0208dba8,uRam0208dbac,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar10 = FUN_0200b8cc(uVar2,uVar4,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (iVar6 < 0) {
    uVar9 = FUN_0200b3a0((int)uVar9,uVar1,(int)uVar10,uVar2);
    uVar9 = FUN_0200b8cc(uStack_10,uStack_c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    FUN_0200bc6c(uStack_10,uStack_c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x02009774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar6 = iVar6 * 8;
  uVar9 = FUN_0200b3a0((int)uVar9,uVar1,(int)uVar10,uVar2);
  uVar9 = FUN_0200b8cc(uStack_10,uStack_c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0200bc6c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),
                       *(undefined4 *)(FUN_0208db60 + iVar6),
                       *(undefined4 *)(FUN_0208db60 + iVar6 + 4));
  uVar9 = FUN_0200bc6c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uStack_10,uStack_c);
  uVar9 = FUN_0200bc6c(*(undefined4 *)(&DAT_0208db80 + iVar6),*(undefined4 *)(iVar6 + 0x208db84),
                       (int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  if ((int)param_2 < 0) {
    uVar9 = FUN_0200bc6c(0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x020097d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  return;
}

