
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02042988(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000004"] */
  DAT_020a0fd8 = 1;
  if (DAT_020a0c3e != '\0') {
    if (DAT_020a0c36 != '\0') {
      piVar1 = (int *)DAT_020a10ec;
      while (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        piVar1[(DAT_020a100c ^ 1) + 3] = piVar1[DAT_020a100c + 3];
        piVar1[(DAT_020a100c ^ 1) + 5] = piVar1[DAT_020a100c + 5];
        piVar1[(DAT_020a100c ^ 1) + 7] = piVar1[DAT_020a100c + 7];
        MIi_CpuCopy16(piVar1[DAT_020a100c + 9],piVar1[(DAT_020a100c ^ 1) + 9],piVar1[0xd]);
        piVar1[(DAT_020a100c ^ 1) + 0xb] = piVar1[DAT_020a100c + 0xb];
        piVar1 = (int *)iVar2;
      }
    }
    DAT_020a0f6c = DAT_020a0fd4;
    DAT_020a0fb8 = DAT_020a100c;
  }
  DAT_020a0e48 = *(int **)(&DAT_020a1778 + DAT_020a0f6c * 0xc);
  if (*DAT_020a0e48 == 0) {
    _DAT_04000004 = _DAT_04000004 & 0xffdf;
  }
  else {
    _DAT_04000004 = _DAT_04000004 | 0x20;
    GX_SetVCountEqVal(*(int *)(*DAT_020a0e48 + DAT_020a0fb8 * 4 + 0xc) + -1);
  }
  if (DAT_020a0c53 == '\0') {
    uVar3 = 0;
    do {
      FUN_0203d36c((&DAT_020a1700)[uVar3]);
      FUN_0203d36c((&DAT_020a1710)[uVar3]);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  for (uVar3 = 0; uVar3 < DAT_020a145c; uVar3 = uVar3 + 1) {
    (**(code **)(DAT_020a1458 + uVar3 * 8))(*(undefined4 *)(DAT_020a1458 + uVar3 * 8 + 4));
  }
  _DAT_027c3ff8 = _DAT_027c3ff8 | 1;
  return;
}

