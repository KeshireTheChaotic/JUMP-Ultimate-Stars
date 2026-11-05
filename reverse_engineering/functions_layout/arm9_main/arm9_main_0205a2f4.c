
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0205a2f4(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_02058060();
  iVar1 = iVar1 + (uint)*(ushort *)(param_1 + 10) * 4;
  pcVar3 = *(code **)(iVar1 + 0xcc);
  iVar1 = *(int *)(iVar1 + 0x10c);
  if ((pcVar3 != FUN_0205a188) && (pcVar3 != FUN_0205a048)) {
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    return;
  }
  iVar2 = FUN_02057adc();
  if (*(short *)(param_1 + 2) != 0) {
    if (*(short *)(param_1 + 2) != 10) {
      *(undefined2 *)(iVar1 + 0x81c) = 5;
      return;
    }
    if (iVar2 != 0) {
      *(ushort *)(iVar1 + 0x80a) = *(short *)(iVar1 + 0x80a) + 3U & 3;
    }
    *(undefined2 *)(iVar1 + 0x81c) = 4;
    return;
  }
  if (iVar2 == 0) {
    *(short *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x80a) * 2 + 0x800) =
         (short)((int)(uint)*(ushort *)(param_1 + 0x1a) >> 1);
    *(ushort *)(iVar1 + 0x80a) = *(short *)(iVar1 + 0x80a) + 1U & 3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0205a374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

