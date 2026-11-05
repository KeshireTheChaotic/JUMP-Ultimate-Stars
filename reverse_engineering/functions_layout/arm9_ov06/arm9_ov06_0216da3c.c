
/* WARNING: Removing unreachable block (ram,0x0216dbcc) */
/* WARNING: Removing unreachable block (ram,0x0216dbd4) */
/* WARNING: Removing unreachable block (ram,0x0216dbd8) */
/* WARNING: Removing unreachable block (ram,0x0216dbdc) */
/* WARNING: Removing unreachable block (ram,0x0216dbe0) */

undefined4 FUN_0216da3c(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  if ((*(int *)(param_1 + 0x34) != 0) && ((*(uint *)(*(int *)(param_1 + 0x34) + 0x2c) & 9) != 0)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  piVar9 = *(int **)(param_1 + 0x30);
  iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  if (piVar9 != (int *)0x0) {
    sVar2 = *(short *)(param_1 + 0x38);
    iVar1 = -(int)*(short *)(param_1 + 0x3a) >> 5;
    iVar7 = (*piVar9 - *(int *)(iVar8 + 0xc)) * iVar1 +
            ((piVar9[1] - *(int *)(iVar8 + 0x10)) + -0x1000) * ((int)sVar2 >> 5);
    sVar3 = (short)iVar1;
    sVar4 = (short)((int)sVar2 >> 5);
    if (iVar7 < 1) {
      if (iVar7 < 0) {
        *(short *)(param_1 + 0x38) = sVar2 - sVar3;
        *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) - sVar4;
      }
    }
    else {
      *(short *)(param_1 + 0x38) = sVar2 + sVar3;
      *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) + sVar4;
    }
    sVar2 = *(short *)(param_1 + 0x3a);
    uVar5 = FUN_0200c954((int)*(short *)(param_1 + 0x38) * (int)*(short *)(param_1 + 0x38));
    uVar6 = FUN_0200c954((int)sVar2 * (int)sVar2);
    FUN_0200bfb4(uVar5,uVar6);
    uVar5 = FUN_0200cb80();
    FUN_0200c9e4(0x45800000,uVar5);
    local_18 = FUN_0200c8e0();
    FUN_0216c2fc(&local_1c,(int)*(short *)(param_1 + 0x38),&local_18);
    *(short *)(param_1 + 0x38) =
         (short)((int)(local_1c * 0x100 + ((uint)(local_1c * 0x100 >> 0xb) >> 0x14)) >> 0xc);
    FUN_0216c2fc(&local_20,(int)*(short *)(param_1 + 0x3a),&local_18);
    *(short *)(param_1 + 0x3a) =
         (short)((int)(local_20 * 0x100 + ((uint)(local_20 * 0x100 >> 0xb) >> 0x14)) >> 0xc);
  }
  *(short *)(iVar8 + 0x24) =
       (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x38) >> 8);
  *(short *)(iVar8 + 0x26) =
       (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x3a) >> 8);
  iVar8 = FUN_0216ed30(*(undefined4 *)(param_1 + 0x2c));
  if (iVar8 != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x2c) & 8) == 0) {
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x78) & 0x400) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

