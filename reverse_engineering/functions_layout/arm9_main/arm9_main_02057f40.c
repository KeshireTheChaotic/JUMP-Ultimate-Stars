
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_02057f40(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar5 = (undefined4 *)auStack_18;
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar2 = FUN_02058044();
  if (iVar2 != 0) {
    return iVar2;
  }
  DC_InvalidateRange(*(undefined4 *)(DAT_020acae8 + 4),2);
  puVar3 = &uStack_10;
  if (uStack_10 == 0) {
    puVar5 = (undefined4 *)local_14;
  }
  uVar1 = **(ushort **)(DAT_020acae8 + 4);
  iVar2 = 3;
  if (uStack_10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02057fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)*puVar5)(3);
    return iVar2;
  }
  do {
    puVar3 = puVar3 + 1;
    iVar4 = puVar5[2];
    if (*puVar3 == (uint)uVar1) {
      iVar2 = 0;
    }
    puVar5[2] = iVar4 + -1;
  } while (iVar4 + -1 != 0);
  return iVar2;
}

