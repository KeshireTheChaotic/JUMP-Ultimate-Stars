
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0205a7fc(int param_1,uint param_2,int param_3,short param_4,int param_5)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = 1;
  iVar3 = FUN_02057f40(2,9,10);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (param_1 == 0) {
    return 6;
  }
  if (0xf < param_2) {
    return 6;
  }
  if (param_3 == 0) {
    return 6;
  }
  uVar4 = FUN_02057adc(0);
  if (uVar4 == 0) {
    uVar1 = FUN_02057a54();
  }
  MIi_CpuClearFast(0,param_1,0x820);
  *(undefined2 *)(param_1 + 0x808) = 0;
  *(undefined2 *)(param_1 + 0x80a) = 0;
  *(undefined2 *)(param_1 + 0x80c) = 0;
  *(short *)(param_1 + 0x810) = param_4;
  *(short *)(param_1 + 0x816) = (short)param_2;
  *(undefined2 *)(param_1 + 0x80e) = 0;
  *(ushort *)(param_1 + 0x818) = (ushort)(param_5 != 0);
  *(ushort *)(param_1 + 0x80e) = (ushort)param_3 | (ushort)(1 << (uVar4 & 0xff));
  sVar2 = FUN_02050dd0();
  *(short *)(param_1 + 0x812) = sVar2;
  *(short *)(param_1 + 0x814) = param_4 * sVar2;
  if (0x1fc < *(ushort *)(param_1 + 0x814)) {
    *(undefined2 *)(param_1 + 0x80e) = 0;
                    /* WARNING: Could not recover jumptable at 0x0205a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*UNRECOVERED_JUMPTABLE)();
    return iVar3;
  }
  *(ushort *)(param_1 + 0x814) = *(ushort *)(param_1 + 0x814) + 4;
  *(undefined2 *)(param_1 + 0x81c) = 1;
  if (uVar4 == 0) {
    iVar3 = 0;
    do {
      iVar6 = iVar3 * 0x200;
      iVar3 = iVar3 + 1;
      *(ushort *)(param_1 + iVar6) = *(ushort *)(param_1 + 0x80e) & (uVar1 | 1);
    } while (iVar3 < 4);
    FUN_02058b94(param_2,FUN_0205a188,param_1);
    iVar6 = 0;
    iVar3 = param_1;
    while( true ) {
      if (*(short *)(param_1 + 0x818) == 1) {
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
      }
      if (iVar5 <= iVar6) break;
      *(ushort *)(param_1 + 0x808) = *(short *)(param_1 + 0x808) + 1U & 3;
      iVar5 = FUN_020596e8(FUN_0205a2f4,param_1,iVar3,*(undefined2 *)(param_1 + 0x814));
      if (iVar5 == 7) {
        *(undefined2 *)(param_1 + iVar6 * 2 + 0x800) = 0xffff;
        *(ushort *)(param_1 + 0x80a) = *(short *)(param_1 + 0x80a) + 1U & 3;
      }
      else if ((iVar5 != 0) && (iVar5 != 2)) {
        *(undefined2 *)(param_1 + 0x81c) = 5;
        return 1;
      }
      iVar3 = iVar3 + 0x200;
      iVar6 = iVar6 + 1;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x80a) = 3;
    FUN_02058b94(param_2,FUN_0205a048,param_1);
  }
  return 0;
}

