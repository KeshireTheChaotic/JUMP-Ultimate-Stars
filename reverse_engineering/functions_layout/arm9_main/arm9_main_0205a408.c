
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0205a408(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_r7;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar6;
  
  iVar2 = FUN_02057f40(2,9,10);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (param_1 == 0) {
    return 6;
  }
  if (param_2 == 0) {
    return 6;
  }
  if (param_3 == 0) {
    return 6;
  }
  iVar2 = FUN_02057adc(0);
  if (iVar2 == 0) {
    unaff_r7 = FUN_02057a54();
  }
  sVar1 = *(short *)(param_1 + 0x81c);
  if (sVar1 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0205a4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE_00)();
    return iVar2;
  }
  if ((sVar1 != 1) && (sVar1 != 4)) {
    return 3;
  }
  iVar4 = 5;
  if (iVar2 == 0) {
    bVar6 = false;
    uVar5 = 0;
    if (sVar1 == 4) {
      *(undefined2 *)(param_1 + 0x81c) = 1;
      uVar3 = *(ushort *)(param_1 + 0x808) + 3 & 3;
      iVar2 = FUN_020596e8(FUN_0205a2f4,param_1,param_1 + uVar3 * 0x200,
                           *(undefined2 *)(param_1 + 0x814));
      if (iVar2 == 7) {
        *(undefined2 *)(param_1 + uVar3 * 2 + 0x800) = 0xffff;
        *(ushort *)(param_1 + 0x80a) = *(short *)(param_1 + 0x80a) + 1U & 3;
      }
      else if ((iVar2 != 0) && (iVar2 != 2)) {
        *(undefined2 *)(param_1 + 0x81c) = 5;
                    /* WARNING: Could not recover jumptable at 0x0205a588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*UNRECOVERED_JUMPTABLE_00)(1);
        return iVar2;
      }
    }
    if ((uint)*(ushort *)(param_1 + 0x80c) != (uint)*(ushort *)(param_1 + 0x80a)) {
      iVar2 = (uint)*(ushort *)(param_1 + 0x80c) * 0x200;
      *(ushort *)(param_1 + iVar2) = *(ushort *)(param_1 + iVar2) | 1;
      MIi_CpuCopy16(param_1 + (uint)*(ushort *)(param_1 + 0x80c) * 0x200,param_3,0x200);
      bVar6 = true;
      iVar4 = 0;
      *(undefined2 *)(param_1 + 0x81a) =
           *(undefined2 *)(param_1 + (uint)*(ushort *)(param_1 + 0x80c) * 2 + 0x800);
      *(ushort *)(param_1 + 0x80c) = *(short *)(param_1 + 0x80c) + 1U & 3;
      if (((*(short *)(param_1 + 0x818) == 0) && (unaff_r7 != 0)) &&
         (*(short *)(param_1 + (uint)*(ushort *)(param_1 + 0x808) * 0x200) == 1)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    FUN_02059dd0(param_1,0);
    if ((bVar6) && (FUN_02059f44(param_1,0,param_2), *(short *)(param_1 + 0x818) == 0)) {
      FUN_02059dd0(param_1,uVar5);
    }
  }
  else {
    bVar6 = sVar1 == 4;
    if (bVar6) {
      *(undefined2 *)(param_1 + 0x81c) = 1;
    }
    else if ((uint)*(ushort *)(param_1 + 0x80c) != (uint)*(ushort *)(param_1 + 0x808)) {
      iVar2 = (uint)*(ushort *)(param_1 + 0x80c) * 0x200;
      if ((*(ushort *)(param_1 + iVar2) & 1) == 0) {
        *(ushort *)(param_1 + iVar2) = *(ushort *)(param_1 + iVar2) | 1;
      }
      else {
        MIi_CpuCopy16(param_1 + iVar2,param_3,0x200);
        bVar6 = true;
        iVar4 = 0;
        *(undefined2 *)(param_1 + 0x81a) =
             *(undefined2 *)(param_1 + (uint)*(ushort *)(param_1 + 0x80c) * 2 + 0x800);
        *(ushort *)(param_1 + 0x80c) = *(short *)(param_1 + 0x80c) + 1U & 3;
      }
    }
    if (bVar6) {
      iVar2 = param_1 + (uint)*(ushort *)(param_1 + 0x80a) * 0x200 + 0x20;
      MIi_CpuCopy16(param_2,iVar2,*(undefined2 *)(param_1 + 0x810));
      iVar2 = FUN_020596e8(FUN_0205a2f4,param_1,iVar2,*(undefined2 *)(param_1 + 0x810));
      *(ushort *)(param_1 + 0x80a) = *(short *)(param_1 + 0x80a) + 1U & 3;
      if ((iVar2 != 2) && (iVar2 != 0)) {
        *(undefined2 *)(param_1 + 0x81c) = 5;
        iVar4 = 1;
      }
    }
  }
  return iVar4;
}

