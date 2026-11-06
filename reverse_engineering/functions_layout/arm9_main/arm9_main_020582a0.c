
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_020582a0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_020acae4 != 0) {
    return 3;
  }
  DAT_020acae4 = 1;
  if (param_1 == (int *)0x0) {
    DAT_020acae4 = 0;
    return 6;
  }
  if (3 < param_2) {
    DAT_020acae4 = 0;
    return 6;
  }
  if (((uint)param_1 & 0x1f) != 0) {
    DAT_020acae4 = 0;
    return 6;
  }
  thunk_FUN_02055910(0);
  iVar1 = FUN_0205587c(10,1);
  if (iVar1 == 0) {
    DAT_020acae4 = 0;
                    /* WARNING: Could not recover jumptable at 0x02058358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(4);
    return uVar2;
  }
  DC_InvalidateRange(param_1,param_3);
  MI_DmaFill32(param_2,param_1,0,param_3);
  DAT_020acae8 = param_1;
  *param_1 = (int)(param_1 + 0x80);
  DAT_020acae8[1] = *DAT_020acae8 + 0x300;
  DAT_020acae8[3] = DAT_020acae8[1] + 0x800;
  DAT_020acae8[4] = DAT_020acae8[3] + 0x100;
  FUN_02057b40();
  uVar3 = 0;
  *(short *)(DAT_020acae8 + 5) = (short)param_2;
  DAT_020acae8[0x53] = 0;
  *(undefined2 *)(DAT_020acae8 + 0x54) = 0;
  do {
    FUN_02058b94(uVar3 & 0xffff,0,0);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x10);
  FUN_02053d2c(&DAT_020acaec,&DAT_020acb0c,10);
  puVar4 = &DAT_020acb80;
  iVar1 = 0;
  do {
    *puVar4 = 0x8000;
    DC_StoreRange(puVar4,2);
    FUN_02053c84(&DAT_020acaec,puVar4,1);
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 0x80;
  } while (iVar1 < 10);
  FUN_020558a4(10,FUN_02057b5c);
  return 0;
}

