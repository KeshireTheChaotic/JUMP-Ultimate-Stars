
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff8af0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 in_r3;
  
                    /* JUS-TAG hw={"DMA":3} io=["040000b0","040000b4","040000b8"] */
  iVar2 = *DAT_020a0e48 + DAT_020a0fb8 * 4;
  pcVar3 = *(code **)(iVar2 + 0x14);
  if (pcVar3 == (code *)0x0) {
    _DAT_040000b0 = *(undefined4 *)(iVar2 + 0x24);
    _DAT_040000b4 = *(undefined4 *)(*DAT_020a0e48 + DAT_020a0fb8 * 4 + 0x2c);
    _DAT_040000b8 = *(uint *)(*DAT_020a0e48 + 0x34) >> 1 | 0x90000000;
  }
  else {
    (*pcVar3)(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x1c),pcVar3,DAT_020a0fb8,in_r3);
  }
  piVar1 = DAT_020a0e48 + 1;
  if (*piVar1 == 0) {
    _DAT_04000004 = _DAT_04000004 & 0xffdf;
    DAT_020a0e48 = DAT_020a0e48 + 1;
  }
  else {
    DAT_020a0e48 = DAT_020a0e48 + 1;
    FUN_02064f20(*(int *)(*piVar1 + DAT_020a0fb8 * 4 + 0xc) + -1);
  }
  _DAT_027c3ff8 = _DAT_027c3ff8 | 4;
  return;
}

